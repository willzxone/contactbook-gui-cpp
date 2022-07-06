#include "Address.h"
#include <string>

Address::Address(std::string house, std::string street, std::string city, std::string country )
	:house(house),street(street),city(city), country(country) {};

std::string Address::getHouse() {return house;}
std::string Address::getStreet() {return street;}
std::string Address::getCity() {return city;}
std::string Address::getCountry() { return country; }

void Address::setHouse(std::string house) {this->house = house;}
void Address::setCity(std::string city) {this->city = city;}
void Address::setCountry(std::string country) {this->country = country;}
void Address::setStreet(std::string street) {this->street = street;}

void Address::setData(std::string house, std::string city, std::string country, std::string street) {
	setHouse(house); setCity(city); setCountry(country); setStreet(street);
}

bool Address::equals(const Address& address)
{
	if (this == &address)
		return true;
	else if (house == address.house && street == address.street && country == address.country && city == address.city)
		return true;
	else
		return false;
}

Address* Address::copy_address()
{
	Address* addressTemp;
	addressTemp = new Address(house,street,city,country);
	return addressTemp;
}


std::string Address::ConcateAttributes() {
	std::string temp = house + ' ' + street + ' ' + city + ' ' + country;
	return temp;
}
