/*
Employee.cpp
Teng Zhao: 40089560
Thomas Flynn: 40034877
*/

#include "Employee.h"

Employee::Employee():Person() {
	jobFunction = " ";
	for (auto& i : flightList) {
		i = nullptr;
	}
}

Employee::Employee(int a, string b, string c, string d): Person(a, b, c) {
	jobFunction = d;
	for (auto& i : flightList) {
		i = nullptr;
	}
}

void Employee::setJobFunction(string a) {
	jobFunction = a;
}

bool Employee::addFlight(Flight* f) {
	for (auto& i : flightList) {
		if (i == nullptr) {
			i = f;
			return true;
		}

	}
	return false;
	
}



void Employee::print() {
	cout << "--Employee-- " << endl;
	cout << "ID: " << id << endl;
	cout << "Name: " << name << endl;
	cout << "Job Function: " << jobFunction << endl;
	cout << "Address: " << address << endl;
}