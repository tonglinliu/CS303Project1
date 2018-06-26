#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

class Employee {

public:
	// Constructor
	Employee(std::string theName);

	std::string getName() { return name; }
	int getWaitingTime() { return waiting_time; }
	int getRetainingTime() { return retaining_time; }

	void setWaitingTime(int w) { waiting_time = w; }
	void setRetainingTime(int r) { retaining_time = r; }

private:
	std::string name;
	int waiting_time;
	int retaining_time;
};
#endif // !EMPLOYEE_H

