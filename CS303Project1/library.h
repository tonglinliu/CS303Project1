
#pragma once
#include "Book.h"
#include "Date.h"
#include "Employee.h"
#include <vector>

using namespace std;

class Library {
public:
	Library();

	void add_book(string name);

	void add_employee(Employee &emp);

	void circulate_book(string name, Date circ_date);

	void pass_on(string name, Date pass_date);

private:
	vector<Book> book_list;
};