#include "Employee.h"

void Employee::update_retain(Date start, Date pass)
{
	*retain_time += pass - start;
	//cout << this->name << ": " << *retain_time << endl;
}

void Employee::update_wait(Date start, Date pass)
{
	*wait_time += pass - start;
	//cout << this->name << ": " << *wait_time << endl;
}
