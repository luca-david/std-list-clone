#include "merge.h"
#include <iostream>

using std::cout;

int main()
{	
	int size = 5;
	int* pSize = &size;
	int* array1 = new int[size]{5, 9, 1, 3, 3};
	int* array2 = new int[size]{7, 2, 3, 4, 4};
	int* mergedArray = new int[size * 2];		

	cout << "array 1: ";
	for (int i = 0; i < *pSize; i++)
	{
		cout << array1[i] << " ";
	}

	cout << "\narray 2: ";
	for (int i = 0; i < *pSize; i++)
	{
		cout << array2[i] << " ";
	}

	cout << "\nmerge() is called";

	mergedArray = merge(array1, array2, pSize);

	cout << "\nmerged array: ";
	for (int i = 0; i < *pSize; i++)
	{
		cout << mergedArray[i] << " ";
	}

	cout << "\n";
	return 0;
}