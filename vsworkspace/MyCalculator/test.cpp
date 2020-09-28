ads_name ssName;
if (acedSSGet(NULL, NULL, NULL, NULL, ssName) != RTNORM)
{
	acutPrintf("/nδѡ��ʵ��");
	return;
}
Acad::ErrorStatus es;
long ssLength;
acedSSLength(ssName, &ssLength);
for (int i = 0; i < ssLength; i++)
{
	//���ָ��Ԫ�ص�objectId
	ads_name ent;
	acedSSName(ssName, i, ent);
	AcDbObjectId objId;
	acdbGetObjectId(objId, ent);

	//���ָ��ǰԪ�ص�ָ��
	AcDbEntity* pEnt = NULL;

	es = acdbOpenAcDbEntity(pEnt, objId, AcDb::kForRead);

	if (es != Acad::eOk)
	{
		return;
	}
	//�����Text����
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

	//�����MText����
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