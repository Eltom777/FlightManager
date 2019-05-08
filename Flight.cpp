/*
Flight.cpp
Teng Zhao: 40089560
Thomas Flynn: 40034877
*/

#include "Flight.h"
#include "Employee.h"


Flight::Flight() {

	passCounter = 0;
	flightNum = 0;
	depTime.setTime(0, 0, 0);
	arrTime.setTime(0, 0, 0);
	depDate.setDate(0, 0, 0);
	arrDate.setDate(0, 0, 0);

	for (auto& i : employeeList) {
		i = nullptr;
	}

	for (auto& i : passengerList) {
		i = nullptr;
	}
}

Flight::Flight(int a, int b, int c, int d, int e,int f, int g, int h, int i, int j, int k, int l, int m) {
	
	passCounter = 0;
	flightNum = a;
	depTime.setTime(b, c, d);
	depDate.setDate(e, f, g);
	arrDate.setDate(h, i, j);
	arrTime.setTime(k, l, m);
	
	for (auto& i : employeeList) {
		i = nullptr;
	}

	for (auto& i : passengerList) {
		i = nullptr;
	}
}

void Flight::addEmployee(Employee* a) {
	if (empCounter < 3) {
		for (auto& i : employeeList) {
			if (i == nullptr) {
				if (a->addFlight(this)) { // used to be i->addFlight(this), This caused the problem 
					i = a;
					empCounter++;
					cout << "Successful Added Employee to flight." << endl;
					break;
				}
			}
		}
	}
	else
		cout << "Add Employee Failed!" << endl;
}

void Flight::addPassenger(Passenger* a) {
	for (auto& i : passengerList) {
		if (i == nullptr) {
			i = a;
			passCounter++;
			break;
		}
	}
}

int Flight::getFlightNum() {
	return flightNum;
}

void Flight::getDepTime() {
	depTime.printTime();
}

void Flight::getArrTime() {
	arrTime.printTime();
}

void Flight::getDepDate() {
	depDate.printDate();
}

void Flight::getArrDate() {
	arrDate.printDate();
}

bool Flight::isFull(){
	if (passCounter < 5)
		return false;
	if (passCounter >= 5)
		return true;
}

void Flight::printPassengerList() {
	cout << "Passenger List:" << endl;
	for (auto& i : passengerList) {
		if (i != nullptr) {
			cout << i->getId();
			cout << ":";
			cout << i->getName() << endl;
		}
	}
}

void Flight::printEmployeeList() {
	cout << "Employee List:" << endl;
	for (auto& i : employeeList) {
		if (i != nullptr) {
			cout << i->getId();
			cout << ":";
			cout << i->getName() << endl;
		}
	}
}

void Flight::print(){
	cout << "---Flight---" << endl;
	cout << flightNum << endl;
	this->printPassengerList();
	this->printEmployeeList();
}