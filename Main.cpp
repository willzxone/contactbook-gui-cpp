//#include<iostream>
//#include<string>
//#include<fstream>
//#include"Address.h"
//#include"ContactsBook.h"
//#include"Contact.h"
//int main() {
//	int contactSize=0;
//
//	//std::cout << "\nEnter Number Of Contacts:",std::cin>>contactSize;
//
//	//ContactsBook *book=new ContactsBook(contactSize);
//	//book->addContact = contactSize;
//
//	//std::cin >> book;
//
//	//std::cout << "\nEnter Number Of Contacts:", std::cin >> contactSize;
//	//book->addContact = contactSize;
//
//	//std::cin >> book;
//
//	ContactsBook* book = book->load_from_file("saving.txt");
//
//	std::cout << std::endl << "SORTED" << std::endl;
//	book->print_contacts_sorted("first_name");
//
//	std::cout << std::endl << "\nUN SORTED\n";
//	book->print_contacts_sorted(" ");
//
//
//	std::cout<<"\nTOTAL NUMBER OF CONTACTS: "<<book->total_contacts();
//	std::cout << "\n\nEnter Number Of Contacts:", std::cin >> contactSize;
//
//	book->addContact = contactSize;
//	std::cin >> book;
//	std::cout << "\nTOTAL NUMBER OF CONTACTS: " << book->total_contacts();
//
//	book->merge_duplicates();
//	std::cout << "\n\nAFTER MERGING\n\n";
//
//	book->print_contacts_sorted("email_address");
//	book->CreateGroup("Fatima Tahir");
//	book->AddContactToGroup(book->GetContactList()->GetArr()[0],"Fatima Tahir");
//
//	book->searchContact("Waled");
//	book->save_to_file("C://Users//walee//Desktop//saving.txt");
//
//	delete book;
//	system("pause>8");
//}