#include "pop.h"
#include <iostream>

int* pop_back(int* array, int* pSize)
{
	//make an array that is smaller by one element
	int* smallerArray = new int[*pSize - 1];

	//go through the array and replace every element with the one in front(overwrites last element)
	for (int i = *pSize - 1; i > 0; i--)
	{
		array[i] = array[i - 1];
	}
	//go through the array and remove the first element
	for (int i = 0; i < *pSize; i++)
	{
		array[i] = array[i + 1];
	}

	//reduce size of array
	*pSize = *pSize - 1;

	//store the values in the smaller array
	for (int i = 0; i < *pSize; i++)
	{
		smallerArray[i] = array[i];
	}

	//delete the old(bigger) array
	delete[] array;

	//point to the smaller array
	array = smallerArray;

	return array;
}

int* pop_front(int* array, int* pSize)
{
	//make an array that is smaller by one element
	int* smallerArray = new int[*pSize - 1];

	//decrease size by one(such that we don't access unintialised memory)
	*pSize = *pSize - 1;

	//remove the first element
	for (int i = 0; i < *pSize; i++)
	{
		array[i] = array[i + 1]; 
	}

	//copy elements from old array to the smaller array
	for (int i = 0; i < *pSize; i++)
	{
		smallerArray[i] = array[i];
	}

	//modify values
	delete[] array;
	array = smallerArray;

	return array;
}
