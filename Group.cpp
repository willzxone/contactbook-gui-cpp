#include "Group.h"
#include "list.h"
#include "Contact.h"

Group::Group(std::string name):name(name) {
	id = new list<int>(1);
}

Group::~Group() {
	delete id;
}

std::string Group::GetName() {
	return name;
}

list<int>* Group::GetContactsList() { return id; };


void Group::CopyAssign(Group& ref) {
	this->name = ref.name;
	delete id;
	
	id = new list<int>(ref.id->GetSize());

	for (int i = 0; i < ref.id->GetSize(); i++)
	{
		*id->GetArr()[i] = *ref.id->GetArr()[i];
	}
	id->SetCount(ref.id->GetCount());
}

Group::Group(Group& ref) {
	CopyAssign(ref);
}

void Group::operator=(Group& ref) {
	CopyAssign(ref);
}

Group::Group(Group&& ref) noexcept{
	CopyAssign(ref);
	
	delete ref.id;
	
}

std::string Group::ConcateAttributes() {
	std::string temp = this->name;
	return temp;
}

void Group::SetName(std::string name) { this->name = name; }
