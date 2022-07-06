#pragma once
#include <iostream>
#include <string>

class Address {
private:
	std::string house;
	std::string street;
	std::string city;
	std::string country;
	template <class stream>
	friend stream& operator<<(stream& out, Address& ref) {
		out << ref.getHouse() << ',' << ref.getStreet() << ',' << ref.getCity() << ',' << ref.getCountry() << std::endl;
		return out;
	};
public:
	bool equals(const Address& address);
	/*void print_address();*/
	Address* copy_address();

	std::string getHouse();
	std::string getStreet();
	std::string getCity();
	std::string getCountry();
			
	std::string ConcateAttributes();
	void setData(std::string house, std::string city, std::string country, std::string street);

	void setHouse(std::string house);
	void setCity(std::string city);
	void setCountry(std::string country);
	void setStreet(std::string street);

	Address(std::string house=" ", std::string street = " ", std::string city = " ", std::string country = " ");
};
