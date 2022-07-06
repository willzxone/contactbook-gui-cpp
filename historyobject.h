#pragma once

#ifndef BASIC_LIB
#define BASIC_LIB
	#include<string>

#endif // !BASIC_LIB

	#include<iostream>
class history {
	int day, year,hours,seconds,minutes,month;
	time_t now = time(0);
	tm* ltm = localtime(&now);

public:
	history() {
		year = 1900+ltm->tm_year;
		month = 1 + ltm->tm_mon;
		day = ltm->tm_mday;
		hours = 5 + ltm->tm_hour;
		seconds = ltm->tm_sec;
		minutes = 30 + ltm->tm_min;
	}


	std::string getDate() {
		return (std::to_string(day) + "-" + std::to_string(month) + "-" + std::to_string(year));
	}
	std::string getTime() {
		return (std::to_string(hours) + ":" + std::to_string(minutes) + ":" + std::to_string(seconds));
	}


	int getDay() {
		return this->day;
	}
	int getHour() {
		return this->hours;
	}
	int getYear() {
		return this->year;
	}
	int getSecond() {
		return this->seconds;
	}
	int getMinutes() {
		return this->minutes;
	}
	int getMonth() {
		return this->month;
	}
	void setDay(int x) {
		this->day=x;
	}
	void setHour(int x) {
		this->hours=x;
	}
	void setYear(int x) {
		this->year=x;
	}
	void setSecond(int x) {
		this->seconds=x;
	}
	void setMinutes(int x) {
		this->minutes=x;
	}
	void setMonth(int x) {
		this->month=x;
	}
	

};
