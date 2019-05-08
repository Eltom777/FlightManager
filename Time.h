/*
Time.h
Teng Zhao: 40089560
Thomas Flynn: 40034877
*/

#pragma once

#include <iostream>
using namespace std;

class  Time {

public:
	Time();
	Time(int&, int&, int&);
	Time(const Time&);
	Time(int, int, int);
	void setTime(int, int, int);
	void printTime();
	int getHour();
	int getMinute();
	int getSecond();

private:
	int hour;
	int minute;
	int second;

};