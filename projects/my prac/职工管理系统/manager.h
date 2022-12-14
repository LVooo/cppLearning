#pragma once
#include "Worker.h"

class Manager : public Worker
{
public:
	// 构造函数
	Manager(int id, string name, int depid);

	// 继承下来的纯虚函数
	virtual void showInfo();

	virtual string getDep();
};