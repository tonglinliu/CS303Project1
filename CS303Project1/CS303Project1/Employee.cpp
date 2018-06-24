#include "Employee.h"
#include <string>

// Constructor
Employee::Employee(std::string theName) {
	name = theName;
	waiting_time = 0;
	retaining_time = 0;
}