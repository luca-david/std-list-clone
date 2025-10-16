#include <iostream>

int* merge(int* array1, int* array2, int* pSize)
{
	//dynamically allocate a new array that can store all values
	int* finalArray = new int[*pSize * 2];
	int iterator = 0;

	//5, 9, 1, 3, 3
	//7, 2, 3, 4, 4

	for (int i = 0; i < *pSize; i++)
	{
		finalArray[i] = array1[i];
	}

	for (int i = *pSize; i < *pSize * 2; i++)
	{
		finalArray[i] = array2[iterator];
		iterator++;
	}
	
	*pSize = *pSize * 2;

	return finalArray;
}