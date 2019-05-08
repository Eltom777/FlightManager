/*
Flight.h
Teng Zhao: 40089560
Thomas Flynn: 40034877
*/

#pragma once

#include <iostream>
#include <string>
#include <array>
#include "Time.h"
#include "Passenger.h"
#include "Date.h"

using namespace std;

class Employee;


class Flight {

public:
	Flight();
	Flight(int, int, int, int, int, int, int, int, int, int, int, int, int);
	void addEmployee(Employee*);
	void addPassenger(Passenger*);
	int getFlightNum();
	void getDepTime();
	void getArrTime();
	void getDepDate();
	void getArrDate();
	bool isFull();
	void printPassengerList();
	void printEmployeeList();
	void print();

private:
	int flightNum;
	Time depTime;
	Time arrTime;
	Date depDate;
	Date arrDate;
	int passCounter = 0;
	int empCounter = 0;
	array<Employee*, 3> employeeList;
	array<Passenger*, 5> passengerList;
};