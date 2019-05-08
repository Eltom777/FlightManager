#include <iostream>
#include <cstdlib> 
#include "Employee.h"
#include "Passenger.h"
#include "Booking.h"
#include "Flight.h"

using namespace std;

int main() {
	Passenger* p1 = new Passenger(1, "Hi", "1 Hi Street", "Yes");
	Passenger* p2 = new Passenger(2, "Hello", "2 Hello Avenue", "Yes");
	Passenger* p3 = new Passenger(3, "Hai", "3 Hai Boulevard", "No");
	Passenger* p4 = new Passenger(4, "Ni Hao", "4 Ni Hao Hill", "No");

	Employee* e1 = new Employee(11, "Piloter", "11 Pilot Street", "Pilot");
	Employee* e2 = new Employee(22, "Cooker", "22 Cook Avenue", "Cook");
	Employee* e3 = new Employee(33, "Attender", "33 Attendant Boulevard", "Attendant");

	Flight* f1 = new Flight(111, 01, 01, 01, 11, 11, 2011, 01, 01, 01, 12, 11, 2011);
	Flight* f2 = new Flight(222, 02, 02, 02, 02, 02, 2002, 02, 02, 02, 03, 02, 2002);

	Booking b1(p1, f1, "A1");//p1 has 2 flights
	Booking b2(p1, f2, "B1");
	Booking b3(p2, f1, "A2");//p2 has 2 flights
	Booking b4(p2, f2, "B2");
	Booking b5(p3, f1, "A3");//p3 has 1 flight
	Booking b6(p4, f2, "B3");//p4 has 1 flight

	f1->addEmployee(e1);
	f1->addEmployee(e2);
	f1->addEmployee(e3);

	f2->addEmployee(e1);
	f2->addEmployee(e2);
	f2->addEmployee(e3);

	f1->print();
	f2->print();
	

	system("pause");

	return 0;
}