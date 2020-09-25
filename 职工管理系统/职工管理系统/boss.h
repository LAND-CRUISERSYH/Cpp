#pragma once
#include"worker.h"
#include<string>

class boss :public worker
{
public:
	boss(int Id, string name, int Did);

	virtual void showInfo();

	virtual string getDeptName();
};