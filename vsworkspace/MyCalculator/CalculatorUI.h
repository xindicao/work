#pragma once

#include <QWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QDebug>
#include <QString>
#include "MyCalculator.h"

class CalculatorUI : public QWidget
{
	Q_OBJECT

public:
	static CalculatorUI* instance();
	~CalculatorUI();
	void show();

private:
	CalculatorUI();
	bool init();
	void deInit();

private slots:
	void onButtonClicked();

private:
	static int clear;
	MyCalculator *mCalc;
	QLineEdit* mEdit;
	QPushButton* mButton[16];
};

