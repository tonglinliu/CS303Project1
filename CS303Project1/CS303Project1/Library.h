#pragma once

#include <list>
#include "Date.h"


class Library
{
public:
	Library();
	~Library();

	void add_book(std::string s);
	void add_employee(std::string s);

	void circulate_book(std::string s, Date d);
	void pass_on(std::string s, Date d);


private:
	
};

