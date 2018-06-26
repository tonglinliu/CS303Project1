#pragma once

#include <string>
#include "Date.h"
#include "Employee.h"
#include <list>


class Book
{
public:
	Book() : archived(false) {}
	Book(std::string t) : title(t), archived(false) {}
	~Book();

	void queueEmployee(Employee e);
	std::string getTitle() { return title; }
	bool isArchived() { return archived; }
	void archiveBook() { archived = true; }


private:
	std::string title;
	Date startedCirculation;
	Date leftCirculation;
	bool archived;

	list<Employee> waitList;



};

