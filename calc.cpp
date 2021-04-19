//Calculator program in cpp
#include<iostream>
using namespace std;
int main(){
	int num1,num2;
	char op;
	cout << "Enter num 1: ";
	cin >> num1;
	cout << "Enter num 2: ";
	cin >> num2;
	cout << "Enter the operator: (+ , - , * , /): ";
	cin >> op;
	switch(op){
		case '+': cout << num1 << " + " << num2 << " = " << num1+num2 << endl;
		break;
		
		case '-': cout << num1 << " - " << num2 << " = " << num1-num2 << endl;
		break;
		
		case '/': cout << num1 << " / " << num2 << " = " << num1/num2 << endl;
		break;
		
		case '*': cout << num1 << " * " << num2 << " = " << num1*num2 << endl;
		break;
		
		default: cout << "Wrong Input\n";
	}
}
