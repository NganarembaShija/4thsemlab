//Swapping of two numbers
#include<iostream>
using namespace std;
int main(){
	int num1, num2;
	cout << "Enter the two numbers: ";
	cin >> num1 >> num2;
	cout << "Before swapping\n";
	cout << "Num 1: "<< num1 << "\nNum 2: " << num2;
	//swapping
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;
	cout << "\nAfter swapping\n";
	cout << "Num 1: "<< num1 << "\nNum 2: " << num2;
}
