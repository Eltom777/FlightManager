/*
Person.cpp
Teng Zhao: 40089560
Thomas Flynn: 40034877
*/

#include "Person.h"

Person::Person() {
	id = 0;
	name = " ";
	address = " ";
}

Person::Person(int a, string b, string c) {
	id = a;
	name = b;
	address = c;
}

int Person::getId() {
	return id;
}

string Person::getName() {
	return name;
}

string Person::getAddress() {
	return address;
}