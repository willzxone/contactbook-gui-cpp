#include "Contact.h"
//#include"List.h"
//#include "Sorting.h"

Contact::Contact(std::string first_name="", std::string last_name = "", std::string mobile_number = "", std::string email_address = "", Address* address = NULL) {
	set_first_name(first_name);
	set_last_name(last_name);
	set_mobile_number(mobile_number);
	set_email_address(email_address);
	if (address != NULL) {
		delete this->address;
		set_address(address);
	}
	count++;
	this->id = count;
}

int Contact::count = 0;

Contact::Contact() { address = new Address; count++; this->id = count;}

std::string Contact::get_first_name() {return first_name;}

std::string Contact::get_last_name() {return last_name;}

std::string Contact::get_mobile_number() {return mobile_number;}

std::string Contact::get_email_address() {return email_address;}

int Contact::get_id() { return id; }

Address* Contact::get_address() {return address;}

Contact::Contact(Contact& ref) {
	first_name = ref.get_first_name();
	last_name = ref.get_last_name();
	email_address = ref.get_email_address();
	mobile_number = ref.get_mobile_number();
	id = ref.id;

	delete address;
	address = ref.get_address()->copy_address();
}

Contact::Contact(Contact&& ref) noexcept {
	first_name = ref.get_first_name();
	last_name = ref.get_last_name();
	email_address = ref.get_email_address();
	mobile_number = ref.get_mobile_number();
	id = ref.id;

	delete address;
	address = ref.get_address()->copy_address();
	delete ref.get_address();
};

void Contact::operator=(Contact& ref) {
	first_name=ref.get_first_name();
	last_name=ref.get_last_name();
	email_address=ref.get_email_address();
	mobile_number=ref.get_mobile_number();
	id = ref.id;
	delete address;
	address = ref.get_address()->copy_address();
}

void Contact::set_first_name (std::string first_name) {
	if (first_name != "")
		this->first_name = first_name;
}

void Contact::set_last_name(std::string last_name) {
	if (last_name != "")
		this->last_name = last_name;
}

void Contact::set_mobile_number(std::string mobile_number) {
	if (mobile_number.length() == 11)
		this->mobile_number = mobile_number;
}

void Contact::set_email_address(std::string email_address) {
	if (email_address != "")
		this->email_address = email_address;
}

void Contact::set_id(int id) { this->id = id; }
void Contact::set_address(Address* address) {this->address = address;}

void Contact::set_data(std::string first_name, std::string last_name, std::string mobile_number, std::string email_address) {
	set_first_name(first_name); set_last_name(last_name); set_mobile_number(mobile_number); set_email_address(email_address);
}

std::string Contact::ConcateAttributes() {
	std::string temp = first_name + last_name + ' ' + mobile_number + ' ' + email_address + ' ' + address->ConcateAttributes();
	return temp;
}


bool Contact::equals(Contact& contact) {
	if ( this->first_name == contact.get_first_name() &&
		this->last_name == contact.get_last_name() &&
		this->email_address == contact.get_email_address() &&
		this->mobile_number == contact.get_mobile_number() &&
		this->address->equals(*contact.get_address()) ) {
		return true;
	}
	else {
		return false;
	}
}

Contact* Contact::copy_contact()
{
	Contact* contactTemp;
	contactTemp = new Contact(first_name,last_name,mobile_number,email_address,this->get_address()->copy_address());
	return contactTemp;
}

Contact::~Contact() {
	delete address;
	address = NULL;
}
