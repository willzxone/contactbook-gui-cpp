#pragma once

#include"List.h"
#include "historyobject.h"


struct result;
class Search {
	list<std::string>* searchText;
	list<history>* historyObj;
public:
	Search(int x=1);
	void addSearch(std::string input);
	void removeSearch(int index);

	list<std::string>* getSearchText();

	list<history>* gethistoryObj();

	result& Sort();

};



