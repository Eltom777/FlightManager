/*
Passenger.h
Teng Zhao: 40089560
Thomas Flynn: 40034877
*/

#pragma once

#include "Person.h"
#include "Booking.h"
#include <array>

class Passenger : public Person {
public:
	Passenger();
	Passenger(int, string, string, string);
	void setFrequentFlyerPlan(string);
	bool addBooking(Booking*);
	void print();

protected:
	string frequentFlyerPlan;
	array<Booking*,2> bookingList;
};