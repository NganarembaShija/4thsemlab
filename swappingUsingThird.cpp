// Swapping using 3rd variable
#include<iostream>
using namespace std;
int main(){
	int num1, num2, swap;
	cout << "Enter any two number: ";
	cin >> num1 >> num2;
	cout << "Before swapping\n";
	cout << "Num 1: "<< num1 << "\nNum 2: " << num2;
	//swapping
	swap=num1;
	num1=num2;
	num2=swap;
	cout << "\nAfter swapping\n";
	cout << "Num 1: "<< num1 << "\nNum 2: " << num2;
}
