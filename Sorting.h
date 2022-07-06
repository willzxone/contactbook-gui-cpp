#pragma once
#include <string>
#include "Contact.h"
#include "search.h"
#include "result.h"


struct result;
class Search;
class history;
template<class array>
void swap(array* arr, int i, int j) {
	int temp = 0;

	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;

}

template<class array, class integer, class str, class funcarr>
result &sorting(array* arr, integer size, str choice, bool (*func)(std::string, funcarr&, funcarr&)) {
	
	result obj;
	bool flag = false;
	obj.result_arr = new int[size];
	obj.result_count = size;

	for (int i = 0; i < size; i++)
	{
		obj.result_arr[i] = i;
	}
	for (int i = 0; i < size; i++)
	{
		for (int j = i+1; j < size; j++)
		{
			if (func(choice, *arr->GetArr()[obj.result_arr[i]], *arr->GetArr()[obj.result_arr[j]]) == true) {
				swap(obj.result_arr, i, j);
			}
		}
		
	}
	return obj;
}