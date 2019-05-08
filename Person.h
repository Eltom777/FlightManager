/*
Person.h
Teng Zhao: 40089560
Thomas Flynn: 40034877
*/

#pragma once

#include<string>
using namespace std;

class Person {

public:
	Person();
	Person(int, string, string);
	int getId();
	string getName();
	string getAddress();
	virtual void print() = 0;

protected:
	int id;
	string name;
	string address;

};