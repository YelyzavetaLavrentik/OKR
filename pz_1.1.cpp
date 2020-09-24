//1.Напишите программу, которая принимает у пользователя три числа и выводит их среднее значение.
#include <iostream>
using namespace std;
int main() {

	double firstNumber;
	double secondNumber;
	double thirdNumber13;
	cout << "Let's cout average! \nEnter first number: ";
	cin >> firstNumber;
	cout << "Enter second number: ";
	cin >> secondNumber;
	cout << "Enter third number: ";
	cin >> thirdNumber13;

	double average = double(firstNumber + secondNumber + thirdNumber13) / 3.0;
	cout << "Average is " << average;

}
