// 1312636.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <stdio.h>
#include "CustomArray.cpp"
using namespace std;

int main()
{
	int defaultVal = 5;
	int N = 3;
	CustomArray<int> myArray(N, defaultVal);
	CustomArray<int> yourArray = myArray;
	myArray.setDefaultValue(10);
	yourArray.printArr();
	myArray.printArr();
	std::cout << myArray[1] << std::endl;
	return 0;
}

