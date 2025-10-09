#include "push.h"
#include <iostream>

using std::cout;

int main()
{
	int size = 3;
	int* pSize = &size;
	//create an array for testing
	int* array = new int[size];	
	//initialize the array
	for (int i = 0; i < size; i++)
	{
		array[i] = 100 + i;
	}

	cout << "Before push_back: ";
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}

	//push_back function is called
	array = push_back(array, pSize, 67);

	cout << "\nAfter push_back: ";
	for (int i = 0; i < *pSize; i++)
	{
		cout << array[i] << " ";
	}

	cout << "\n\n----------------------------------\n\n";
	cout << "Before push_front: ";
	for (int i = 0; i < *pSize; i++)
	{
		cout << array[i] << " ";
	}

	//push_front function is called
	array = push_front(array, pSize, 57);

	cout << "\nAfter push_front: ";
	for (int i = 0; i < *pSize; i++)
	{
		cout << array[i] << " ";
	}
	
	cout << "\n";
	return 0;
}
