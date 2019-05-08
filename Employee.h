/*
Employee.h
Teng Zhao: 40089560
Thomas Flynn: 40034877
*/

#pragma once

#include "Person.h"
#include "Flight.h"
#include <array>

class Employee : public Person {
public:
	Employee();
	Employee(int, string, string, string);
	void setJobFunction(string);
	bool addFlight(Flight*);
	void print();

protected:
	string jobFunction;
	array<Flight*, 2> flightList;

};