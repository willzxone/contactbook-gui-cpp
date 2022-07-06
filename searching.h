#pragma once
#include <string>
#include "Group.h"
#include "Contact.h"
#include "result.h"

struct result;
auto func = [&](std::string& str)->void {
	for (size_t i = 0; i < str.length(); i++)
	{
		str[i] = tolower(str[i]);
	}
};

bool searchAlgo(std::string &pattern, std::string &text) {
	int pattern_length, text_length, patern_index = 0, text_index = 0;
	pattern_length = pattern.length();
	text_length = text.length();
	int i = 0;
	func(text);
	func(pattern);

	for (int j = text_index; j < text_length; j++)
	{
		if (pattern[i] == text[j]) {
			patern_index++;
			i = patern_index;
			text_index = j + 1;
			if (i == pattern_length) { break; }
		}else if (text[j] == ' ') {
			i = 0;
			patern_index = 0;
			text_index = j + 1;
		}
		
	}

	if (patern_index == pattern_length)
		return true;
	else
		return false;
}



template<class type >
result& searchingFunction(std::string &arr, list<type>* contacts_list) {

	std::string temp;
	result obj;

	obj.result_count = 0;
	obj.result_arr =new int[contacts_list->GetCount()];

	for (int i = 0; i < contacts_list->GetCount(); i++)
	{
		temp = contacts_list->GetArr()[i]->ConcateAttributes();
		if (searchAlgo(arr, temp)) {
			*(obj.result_arr + obj.result_count) = i;
			obj.result_count++;
		}
	}
	return obj;

}