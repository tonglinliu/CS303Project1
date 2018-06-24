#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

class Employee {

public:
	// Constructor
	Employee(std::string theName);

private:
	std::string name;
	int waiting_time;
	int retaining_time;
};
#endif // !EMPLOYEE_H

