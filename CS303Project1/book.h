#pragma once
#include <string>
#include "PCQueue.h"
#include "Date.h"
using namespace std;

class Book {
public:
	Book(string book_name) { name = book_name;  archived = false; };

	void circulateBook(Date start_date);

	void passOn(Date pass_date);

	void addToQueue(Employee &emp);

	string getName();

private:
	Date start, end, last_pass;
	string name;
	bool archived;
	PCQueue wait_list;
};