ads_name ssName;
if (acedSSGet(NULL, NULL, NULL, NULL, ssName) != RTNORM)
{
	acutPrintf("/n未选择实体");
	return;
}
Acad::ErrorStatus es;
long ssLength;
acedSSLength(ssName, &ssLength);
for (int i = 0; i < ssLength; i++)
{
	//获得指定元素的objectId
	ads_name ent;
	acedSSName(ssName, i, ent);
	AcDbObjectId objId;
	acdbGetObjectId(objId, ent);

	//获得指向当前元素的指针
	AcDbEntity* pEnt = NULL;

	es = acdbOpenAcDbEntity(pEnt, objId, AcDb::kForRead);

	if (es != Acad::eOk)
	{
		return;
	}
	//如果是Text文字
	if (pEnt->isKindOf(AcDbText::desc()))
	{
		AcDbText* pText = NULL;
		pText = AcDbText::cast(pEnt);
		CString text = pText->textString();
		if (IsNumeric(text))
		{
			CalcData temp;
			temp.textConent = text;
			temp.y = pText->position().y;
			temp.eld = pText->objectId();
			strColArr.Add(temp);
		}
		pText->close();
	}

	//如果是MText文字
	if (pEnt->isKindOf(AcDbMText::desc()))
	{
		AcDbMText* pMText = NULL;
		pMText = AcDbMText::cast(pEnt);
		CString text = pMText->contents();
		if (IsNumeric(text))
		{
			CalcData temp;
			temp.textConent = text;
			temp.y = pMText->location().y;
			temp.eld = pMText->objectId();
			strColArr.Add(temp);
		}
		pMText->close();
	}
	pEnt->close();
}
acedSSFree(ssName);