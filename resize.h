#pragma once

template<class arr>
arr** resize_list(arr** contacts_list, int& initial_count)
{
	arr** new_contacts_list;
	int list_size = (initial_count * 2);
	new_contacts_list = new arr * [list_size];
	for (int i = 0; i < list_size; i++)
	{
		new_contacts_list[i] = new arr;
	}

	for (int i = 0; i < initial_count; i++)
	{
		*(new_contacts_list[i]) = *(contacts_list[i]);
	}


	for (int i = 0; i < initial_count; i++)
	{
		delete contacts_list[i];
	}
	delete[] contacts_list;
	contacts_list = nullptr;

	initial_count = list_size;
	return new_contacts_list;
}
