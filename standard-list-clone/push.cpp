#include "push.h"
#include <iostream>



int* push_back(int* array, int* pSize, int num)
{
	//make the new array bigger by one element
	int* biggerArray = new int[*pSize + 1];
	//copy values from old array
	for (int i = 0; i < *pSize; i++)
	{
		biggerArray[i] = array[i];
	}

	//assign biggerArray to the first one
	array = biggerArray;

	//increase pointer to the size by one
	*pSize = *pSize + 1;

	//put num at the last place in the array
	array[*pSize - 1] = num;

	return array;

}


int* push_front(int* array, int* pSize, int num)
{
	//make the new array bigger by one
	int* biggerArray = new int[*pSize + 1];

	//copy elements from old array to the new one
	for (int i = 0; i < *pSize; i++)
	{
		biggerArray[i] = array[i];
	}

	//increase size by one
	*pSize = *pSize + 1;

	//add the element to the beginning of biggerArray
	for (int i = *pSize - 1; i >= 0; i--)
	{
		biggerArray[i] = biggerArray[i - 1];
		if (i == 0)
		{
			biggerArray[i] = num;
		}
	}

	//assign biggerArray to the old one
	array = biggerArray;

	return array;
}