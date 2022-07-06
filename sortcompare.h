#pragma once

#ifndef BASIC_LIB
#define BASIC_LIB
	#include<string>
#endif // !BASIC_LIB
#include"historyobject.h"
class history;
auto searchCompareFunction = [](std::string choice, history& choice1, history& choice2) {
	bool flag = true;

	if (choice1.getDay() > choice2.getDay()) {
		flag = false;
	}
	else {
		flag = true;
	}
	if (choice1.getYear() > choice2.getYear()) {
		flag = false;
	}
	else {
		flag = true;
	}
	if (choice1.getMonth() > choice2.getMonth()) {
		flag = false;
	}
	else {
		flag = true;
	}
	if (choice1.getHour() > choice2.getHour()) {
		flag = false;
	}
	else {
		flag = true;
	}
	if (choice1.getMinutes() > choice2.getMinutes()) {
		flag = false;
	}
	else {
		flag = true;
	}
	if (choice1.getSecond() > choice2.getSecond()) {
		flag = false;
	}
	else {
		flag = true;
	}
	if (flag) {
		return true;
	}
	else {
		return flag;
	}
};
