#pragma once

#ifndef BASIC_LIB
#define BASIC_LIB
#include <iostream>
#include <string>

#endif // !BASIC_LIB
#include "List.h"
#include "Group.h"
#include "Address.h"
#include "Contact.h"
#include "compare.h"


struct result;
class Search;
class ContactsBook {
private:

	list <Contact>* contacts_list;
	list <Group>* groups_list=NULL;
	list <int>* top5contacts=NULL;
	Search* search_list=NULL;
public:
	

	int addContact = 0;
	void add_contact(Contact& contact);
	void CreateGroup(std::string name);

	void AddContactToGroup(int id, std::string grp_name);

	result& searchContact(std::string search);

	int total_contacts();

	ContactsBook(int size_of_list);

	~ContactsBook();

	result& print_contacts_sorted(std::string choice);

	void merge_duplicates(); 
	void load_search(std::string file_name);

	static ContactsBook* load_from_file(std::string file_name);
	void load_groups(std::string file_name);

	void save_to_file_contacts(std::string file_name);
	void save_to_file_groups(std::string file_name);
	void save_to_file_search(std::string file_name);

	bool (*func)(std::string, Contact&,Contact&) =&compare ;

	///TEMP
	list<Contact>* GetContactList() { return contacts_list; }
	list<Group>* GetGroupList() { return groups_list; }
	Search* GetSearchList(){ return search_list; }
	list<int>* GetTop5Contact() { return top5contacts; }

	void createSearchList(int x=1);
	void createTop5Copntact();
private:
	static bool compare(std::string choice,Contact &choice1, Contact& choice2);
	void reset(int i);

};

