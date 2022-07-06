#pragma once
#include <string>
#include "Contact.h"
#include "resize.h"
#include "list.h"
class Group
{
	std::string name;
	list <int>* id;
	
public:
	Group(std::string name="");

	Group(Group& ref);
	void operator=(Group& ref);
	Group(Group&& ref) noexcept;

	void CopyAssign(Group& ref);

	list<int>* GetContactsList();
	std::string GetName();
	void SetName(std::string name);
	std::string ConcateAttributes();

	template <class stream>
	friend stream& operator<<(stream& out, Group& ref) {
		out << ref.GetName() <<'\n';
		out << ref.GetContactsList()->GetCount()<<'\n';

		for (int i = 0; i < ref.id->GetCount(); i++)
		{
			if (i == ref.id->GetCount() - 1) {
				out << *ref.GetContactsList()->GetArr()[i] << '\n';
			}
			else {
				out<<*ref.GetContactsList()->GetArr()[i]<<',';
			}
		}
		return out;
	}
	~Group();

};

