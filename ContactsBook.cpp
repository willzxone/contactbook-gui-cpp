#pragma once

#include "ContactsBook.h"
#include "Contact.h"
#include "Group.h"
#include"searching.h"
#include"search.h"
#include "resize.h"
#include"sorting.h"
#include <fstream>

void ContactsBook::createSearchList(int x) { search_list = new Search(x); }
void ContactsBook::createTop5Copntact() { top5contacts = new list<int>(5); }

void ContactsBook::add_contact(Contact& contact)
{
	contacts_list->AddItem(contact);
}

void ContactsBook::CreateGroup(std::string name) {
	Group* grp_temp = new Group(name);
	if (groups_list == NULL) {
		this->groups_list = new list<Group>(1);

		groups_list->AddItem(*grp_temp);
	}
	else {
		groups_list->AddItem(*grp_temp);
	}
	delete grp_temp;
}

template<class type>
bool duplicateCheck(list<type> *arr,int index,int id) {
	for (int i = 0; i < arr->GetArr()[index]->GetContactsList()->GetCount(); i++)
	{
		if (id == *(arr->GetArr()[index]->GetContactsList()->GetArr()[i])) {
			return false;
		}
	}
	return true;

	
}

void ContactsBook::AddContactToGroup(int id,std::string grp_name) {

		//NEED CHECKS HERE FOR EXCEPTION HANDLING
	
	result obj= searchingFunction(grp_name, groups_list);
	for (int i = 0; i < obj.result_count; i++)
	{
		if (duplicateCheck<Group>(groups_list, obj.result_arr[i], id)) {
			groups_list->GetArr()[obj.result_arr[i]]->GetContactsList()->AddItem(id);

		}

	}
	delete[]obj.result_arr;	
}

int ContactsBook::total_contacts()
{
	return this->contacts_list->GetCount();
}

result& ContactsBook::searchContact(std::string search) {
	result obj=searchingFunction(search, contacts_list);
	return obj;
}

ContactsBook::ContactsBook(int size_of_list) { contacts_list = new list<Contact>(size_of_list); createTop5Copntact(); }

result& ContactsBook::print_contacts_sorted(std::string choice)
{
	/*list<Contact>* contacts_copy = new list<Contact>(this->contacts_list->GetCount());
	contacts_copy->SetCount(contacts_list->GetCount());
	for (int i = 0; i < this->contacts_list->GetCount(); i++) { *contacts_copy->GetArr()[i] = *contacts_list->GetArr()[i]; }*/

	result obj;

	obj = sorting<list <Contact>, int,std::string, Contact>(contacts_list, contacts_list->GetCount(),choice, func);
	/*sort_contacts_list(contacts_copy,choice);*/

	/*for (int i = 0; i < this->contacts_list->GetCount(); i++) { std::cout << *contacts_copy->GetArr()[i]; }*/


	return obj;
}

bool ContactsBook::compare(std::string choice, Contact &choice1, Contact& choice2) {
	if (choice == "firstname") {

		return choice1.get_first_name() > choice2.get_first_name() ? true : false;
		
		//return choice1.get_first_name() > choice2.get_first_name() ? true : false;
	}
	else if (choice == "lastname") {
			return choice1.get_last_name() > choice2.get_last_name() ? true : false;
	}
	else if (choice == "emailaddress"|| choice == "email") {
			return choice1.get_email_address() > choice2.get_email_address() ? true : false;
	}
	else if (choice == "country") {
		return choice1.get_address()->getCountry() > choice2.get_address()->getCountry() ? true : false;
	}
	else if (choice == "city") {

		return choice1.get_address()->getCity() > choice2.get_address()->getCity() ? true : false;
	}
	else if (choice == "house") {

		return choice1.get_address()->getHouse() > choice2.get_address()->getHouse() ? true : false;
	}
	else if (choice == "street") {

		return choice1.get_address()->getStreet() > choice2.get_address()->getStreet() ? true : false;
	}
	return false;
}

void ContactsBook::reset(int index) {
	contacts_list->RemoveItem(index);

}

void ContactsBook::merge_duplicates()
{
	int* storeCount, count = 0, temp = -1;
	storeCount = new int[this->contacts_list->GetCount()];

	for (int i = 0; i < this->contacts_list->GetCount(); i++)
	{
		for (int j = i + 1; j < this->contacts_list->GetCount(); j++)
		{
			bool contactEqual = contacts_list->GetArr()[i]->equals(*contacts_list->GetArr()[j]);
			bool addressEqual = contacts_list->GetArr()[i]->get_address()->equals(*contacts_list->GetArr()[j]->get_address());

			if (contactEqual && addressEqual) {
				*(storeCount + count) = j;
				count++;
				break;
			}
		}
	}

	for (int i = 0; i < count; i++)
	{
		reset(*(storeCount + i));
	}

	this->contacts_list->SetCount(this->contacts_list->GetCount() - count);

	delete[] storeCount;
	storeCount = nullptr;
}

template<class input, class arr, class index>
Contact& tempHoldContact(input& in, arr** templist, index i) {
	std::string fname, lname, phone, email, house, street, city, country;
	getline(in, fname, ',');
	getline(in, lname, ',');
	getline(in, phone, ',');
	getline(in, email, '\n');
	getline(in, house, ',');
	getline(in, street, ',');
	getline(in, city, ',');
	getline(in, country, '\n');
	(templist[i])->set_data( fname, lname, phone, email);
	(templist[i])->get_address()->setData(house, city, country, street);
	return *(templist[i]);
}

ContactsBook* ContactsBook::load_from_file(std::string file_name)
{
	int size_of_contacts, contacts_count = 0;
	ContactsBook* contactsbookTemp=NULL;
	std::string content;
	std::ifstream file;
	file.open(file_name, std::ios::in);

	file >> size_of_contacts;
	if (size_of_contacts == -1) {
		
		contactsbookTemp = new ContactsBook(1);
	}
	else {
		file.ignore(1);
		file >> contacts_count;
		file.ignore(1);

		contactsbookTemp = new ContactsBook(size_of_contacts);

		contactsbookTemp->contacts_list->SetCount(contacts_count);

		for (int i = 0; i < contacts_count; i++)
		{
			tempHoldContact<std::ifstream, Contact, int>(file, contactsbookTemp->contacts_list->GetArr(), i);
		}
		file.close();

	}
	return contactsbookTemp;
}

void ContactsBook::load_groups(std::string file_name) {
	int size_of_groups, groups_count;
	std::string content;
	int contact_count=0,id=0;

	std::ifstream file;
	file.open(file_name, std::ios::in);

	file >> size_of_groups;
	if (size_of_groups!= -1) {
		file.ignore(1);
		file >> groups_count;

		groups_list = new list<Group>(size_of_groups);
		groups_list->SetCount(groups_count);
		file.ignore(1);
		for (int i = 0; i < groups_count; i++)
		{
			getline(file, content, '\n');
			groups_list->GetArr()[i]->SetName(content);

			file >> contact_count;
			file.ignore(1);

			for (int j = 0; j < contact_count; j++)
			{
				if (j != contact_count - 1) {
					getline(file, content, ',');
					id=std::stoi(content);
					groups_list->GetArr()[i]->GetContactsList()->AddItem(id);
				}
				else {
					getline(file, content, '\n');
					id = std::stoi(content);
					groups_list->GetArr()[i]->GetContactsList()->AddItem(id);
				}

			}
		}

	}
	file.close();
}

void ContactsBook::load_search(std::string file_name) {
	int count = 0; std::string temp;
	std::ifstream file;
	file.open(file_name, std::ios::in);
	file >> count;
	if (count > 0) {
		createSearchList(count);
	
	int date=0;
	this->search_list->gethistoryObj()->SetCount(count);
	file.ignore(1);
	for (int i = 0; i < count; i++)
	{
		if (i != count - 1) {
			getline(file, temp, ',');
		}
		else {
			getline(file, temp, '\n');
		}
		search_list->getSearchText()->AddItem(temp);
	}
	for (int i = 0; i < count; i++)
	{
		
		file >> date;
		search_list->gethistoryObj()->GetArr()[i]->setDay(date);

		file >> date;
		search_list->gethistoryObj()->GetArr()[i]->setMonth(date);
		file >> date;
		search_list->gethistoryObj()->GetArr()[i]->setYear(date);
		file >> date;
		search_list->gethistoryObj()->GetArr()[i]->setHour(date);
		file >> date;
		search_list->gethistoryObj()->GetArr()[i]->setMinutes(date);
		file >> date;
		search_list->gethistoryObj()->GetArr()[i]->setSecond(date);
	}
	}

}

void ContactsBook::save_to_file_contacts(std::string file_name)
{
	std::ofstream file;
	file.open(file_name, std::ios::out);

	if (contacts_list->GetCount() == 0) {
		file << -1 << std::endl;
	}
	else {
		file << contacts_list->GetSize() << std::endl;
		file << contacts_list->GetCount() << std::endl;


		for (int i = 0; i < this->contacts_list->GetCount(); i++)
		{
			file << *contacts_list->GetArr()[i];
		}
		file.close();
	}
}

void ContactsBook::save_to_file_groups(std::string file_name)
{
	std::ofstream file;
	file.open(file_name, std::ios::out);

	if (groups_list->GetCount() == 0) {
		file << -1 << std::endl;
	}
	else
	{
		file << groups_list->GetSize() << std::endl;
		file << groups_list->GetCount() << std::endl;

		for (int i = 0; i < this->groups_list->GetCount(); i++)
		{
			file << *groups_list->GetArr()[i];
		}
		file.close();
	}
	


}

void ContactsBook::save_to_file_search(std::string file_name) {
	std::ofstream file;
	int count = 0;
	file.open(file_name, std::ios::out);

	if (search_list->getSearchText()->GetCount() == 0) {
		file << -1 << std::endl;
	}
	else
	{
		file << search_list->getSearchText()->GetCount() << std::endl;
		count = search_list->getSearchText()->GetCount();
		for (int i = 0; i < count; i++)
		{
			file << *search_list->getSearchText()->GetArr()[i];
			if (i != count - 1) {
				file << ",";
			}
			else {
				file << '\n';
			}
		}
		for (int i = 0; i < count; i++)
		{
			file << search_list->gethistoryObj()->GetArr()[i]->getDay() << std::endl;
			file << search_list->gethistoryObj()->GetArr()[i]->getMonth() << std::endl;
			file << search_list->gethistoryObj()->GetArr()[i]->getYear() << std::endl;
			file << search_list->gethistoryObj()->GetArr()[i]->getHour() << std::endl;
			file << search_list->gethistoryObj()->GetArr()[i]->getMinutes() << std::endl;
			file << search_list->gethistoryObj()->GetArr()[i]->getSecond() << std::endl;

		}
		

		/*for (int i = 0; i < this->groups_list->GetCount(); i++)
		{
			file << *groups_list->GetArr()[i];
		}*/
		file.close();
	}

};



ContactsBook::~ContactsBook() {
	delete groups_list;
	delete contacts_list;
}


//void input(ContactsBook* contactsBook) {
//
//	int listSize= contactsBook->addContact;
//
//	if (listSize == 0) {
//		listSize = 1;
//	}
//
//	Contact* templist = new Contact[listSize];
//
//	if (contactsBook->contacts_list->full()) {
//		resize_list<Contact>(contactsBook->contacts_list->GetArr(), contactsBook->contacts_list->GetSize());
//		contactsBook->contacts_list->SetSize((contactsBook->contacts_list->GetSize() * 2) + contactsBook->addContact);
//	}
//
//	for (int i = 0; i < contactsBook->addContact; i++){ 
//		
//		contactsBook->add_contact( *( tempHoldContact<std::istream,Contact,int>(in,templist,i) + i ) ); 
//	}
//
//	delete[] templist;
//
//}