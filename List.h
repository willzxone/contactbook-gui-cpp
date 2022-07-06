#pragma once
#include"resize.h"
template<class  arr>
class list
{

	arr** temp;
	int size = 0;
	int count = 0;
public:
	list(int size_of_list) {
		temp = new arr * [size_of_list];
		for (int i = 0; i < size_of_list; i++) {
			temp[i] = new arr;
		}
		size = size_of_list;
	}

	arr** GetArr() {
		return temp;
	}
	void SetArr(arr** temp) {
		this->temp = temp;
	}

	void AddItem(arr& contact) {
		ResizeArr();
		if (temp[count] == nullptr) {
			temp[count] = new arr;
		}
		*(temp[count]) = contact;
		count++;
	}

	void ResizeArr() {
		if (full()) {
			temp = resize_list<arr>(temp, size);
		}
		else { return; }
	}

	bool full() {
		if (size == count)
			return true;
		else
			return false;
	}

	void RemoveItem(int index) {
		swapEmpty(index);
		delete temp[count - 1];
		temp[count - 1] = nullptr;
		count--;
	}
	void swapEmpty(int index) {
		arr* trash = new arr;
		for (int i = index; i < count; i++)
		{
			if (i != count - 1) {
				*trash = *temp[i];
				*temp[i] = *temp[i + 1];
				*temp[i + 1] = *trash;
			}
		}
		delete trash;
	}

	int& GetSize() {
		return size;
	}

	~list() {
		for (int i = 0; i < size; i++)
		{
			delete temp[i];
		}
		delete[] temp;
	}

	void SetSize(int size) { this->size = size; }

	void SetCount(int count) { this->count = count; }

	int GetCount() { return count; }

	void SetArr(arr* temp) { this->temp = temp; }

};
