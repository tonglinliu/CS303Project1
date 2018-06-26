#include "stdafx.h"
#include "Book.h"




Book::~Book()
{
	waitList.empty();
}

void Book::queueEmployee(Employee e)
{
	waitList.push_back(Employee(e.getName()));	// calls default constructor, setting wait time and retaining time to zero
}


