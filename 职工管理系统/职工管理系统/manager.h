#pragma once
#include"worker.h"
#include<string>

class manager :public worker
{
public:
	manager(int Id, string name, int Did);

	virtual void showInfo();

	virtual string getDeptName();
};