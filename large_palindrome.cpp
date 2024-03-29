// large_palindrome.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int length(int arg);
int main()
{
	int growing_number = 0;
	for (int i = 100; i <= 999; i++) {
		for (int j = 100; j <= 999; j++) {
			int number = i * j;
			if (length(number) == 6) {
				int first_digit = floor(number / 100000);
				int second_digit = floor(number / 10000 % 10);
				int third_digit = floor(number / 1000 % 10);
				int fourth_digit = floor(number / 100 % 10);
				int fifth_digit = floor(number / 10 % 10);
				int sixth_digit = floor(number % 10);
				if (first_digit == sixth_digit && second_digit == fifth_digit && third_digit == fourth_digit && number > growing_number) {
					growing_number = number;
				}
			}
		}
	}
	cout << growing_number;
	cin.ignore();
	
	return 0;
}

int length(int arg) {
	string str = to_string(arg);
	return str.length();
}