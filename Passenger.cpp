/*
Passenger.cpp
Teng Zhao: 40089560
Thomas Flynn: 40034877
*/

#include "Passenger.h"

Passenger::Passenger() :Person() {
	frequentFlyerPlan = " ";
	for (auto& i : bookingList) {
		i = nullptr;
	}
}

Passenger::Passenger(int a, string b, string c, string d):Person(a,b,c){
	frequentFlyerPlan = d;
	for (auto& i : bookingList) {
		i = nullptr;
	}
}

void Passenger::setFrequentFlyerPlan(string a) {
	frequentFlyerPlan = a;
}

bool Passenger::addBooking(Booking* a) {
	for (auto& i : bookingList) {
		if (i == nullptr) {
			i = a;
			return true;
		}
	}
		return false;
}



void Passenger::print() {
	cout << "--Passenger--" << endl;
	cout << "ID: " << id << endl;
	cout << "Name: " << name << endl;
	cout << "Frequent Flyer Plan: " << frequentFlyerPlan << endl;
	cout << "Address: " << address << endl;
}