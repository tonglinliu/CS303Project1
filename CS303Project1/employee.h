#pragma once
#include <string>
#include "Date.h"
#include <iostream>

using namespace std;

class Employee {
public:
	Employee(string empl_name) { name = empl_name; };

	Employee() {};

	Employee(const Employee &emp) { name = emp.name;  wait_time = emp.wait_time; retain_time = emp.retain_time; };

	void update_retain(Date start, Date pass);

	void update_wait(Date start, Date pass);

	string name;
	int *wait_time = new int(0);
	int *retain_time = new int(0);
};
