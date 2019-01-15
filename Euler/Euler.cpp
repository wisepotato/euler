// Euler.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <math.h>

using namespace std;

int getTriangleNumber(int iterations) {
	int total = 0;
	for (int index = 1; index <= iterations; index++) {
		total += index;
	}
	return total;
}

int getDivisors(int number) {
	int limit = (int) floor(number);
	int numDivisors = 0;
	for (int i = 1; i <= limit; i++) {
		numDivisors += (fmod((double)number / (double)i,1.0) == 0.0 ? 1 : 0);
	}
	return numDivisors;
}

int main()
{
    cout << "Hello World!\n"; 
	int start = 500;
	for (int i = 1; i <= 16; i++) {
		int triangleNumber = getTriangleNumber(i);
		int numDivisors = getDivisors(triangleNumber);
		cout << triangleNumber << " - " << numDivisors << endl;
	}
	string wut = "";
	cin >> wut;
}

