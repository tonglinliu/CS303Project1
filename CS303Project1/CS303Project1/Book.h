#pragma once

#include <string>
#include "Date.h"
#include "Employee.h"
#include <list>


class Book
{
public:
	Book();

	~Book();

	void queueEmployee(Employee e);


private:
	std::string title;
	Date startedCirculation;
	Date leftCirculation;
	bool archived;

	list<Employee> waitList;



};

