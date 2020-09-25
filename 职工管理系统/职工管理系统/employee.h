#pragma once
#include"worker.h"
#include<string>

class employee :public worker
{
public:
	employee(int Id, string name, int Did);

	virtual void showInfo();

	virtual string getDeptName();
};