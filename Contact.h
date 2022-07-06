#pragma once

#ifndef BASIC_LIB
#define BASIC_LIB
	#include <iostream>
	#include <string>
#endif // !BASIC_LIB
	#include "Address.h"



class Contact {
private:
	int id=0;
	std::string first_name;
	std::string last_name;
	std::string mobile_number;
	std::string email_address;

	template <class stream>
	friend stream& operator<<(stream& out, Contact& ref) {
		out << ref.get_first_name() << ',' << ref.get_last_name()
			<< ',' << ref.get_mobile_number() << ',' << ref.get_email_address() << std::endl;
		out << *ref.get_address();
		return out;
	}

	Address *address;
	
public:
	static int count;
	bool equals(Contact& contact);
	Contact* copy_contact();

	void operator=(Contact& ref);
	Contact(Contact& ref);
	Contact (Contact&& ref) noexcept;
	std::string get_first_name();
	std::string get_last_name();
	std::string get_mobile_number();
	std::string get_email_address();
	int get_id();
	Address* get_address();

	std::string ConcateAttributes();

	void set_data(std::string first_name, std::string last_name, std::string mobile_number, std::string email_address);
	void set_first_name(std::string first_name);
	void set_last_name(std::string last_name);
	void set_mobile_number(std::string mobile_number);
	void set_email_address(std::string email_address);
	void set_id(int id);
	void set_address(Address* address);

	//void display();

	Contact();
	~Contact();
	Contact(std::string first_name, std::string last_name, std::string mobile_number, std::string email_address, Address *address);
};
