#pragma once
#include"List.h"
#include "sortcompare.h"
#include"Sorting.h"
#include "historyobject.h"

Search::Search(int x) {
	searchText = new list<std::string>(x);
	historyObj = new list<history>(x);
}
void Search::addSearch(std::string input) {
	searchText->AddItem(input);
	history temp;
	historyObj->AddItem(temp);
}
void Search::removeSearch(int index) {
	searchText->RemoveItem(index);
	historyObj->RemoveItem(index);

}

list<std::string>* Search::getSearchText() { return searchText; }

list<history>* Search::gethistoryObj() { return historyObj; }

result& Search::Sort() {
	result obj;
	obj=sorting<list <history>, int, std::string, history>(historyObj, historyObj->GetCount(), "", searchCompareFunction);
	return obj;
}