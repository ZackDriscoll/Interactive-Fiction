//Interactive Fiction: Intro to Functions in C++
//Author: Zack Driscoll

#include <iostream>
#include <string>

using namespace std;

//prototype functions
int AddTwoNumbers(int firstNumber, int secondNumber);

int main()
{
	cout << "\n\n\t\t *** Welcome to my calculator. ***\n\n";

	//We need a variable to catch the sum which is the return value
	int catchTheSum;
	
	//Calling the function
	catchTheSum = AddTwoNumbers(4, 10);

	//Display the answer to the screen
	cout << "\nMy calculations say the sum is " << catchTheSum << endl;
	
	return 0;
}

int AddTwoNumbers(int firstNumber, int secondNumber)
{
	//Print what the function does
	cout << "\nI am calculating two numbers...\n";
	
	//Create variable to hold the sum and add the two numbers together
	int sum = firstNumber + secondNumber;

	//Return the sum fo the numbers from the function
	return sum;
}