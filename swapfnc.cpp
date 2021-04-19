//swapping using function
#include<iostream>
using namespace std;
int swap(int,int);
int main(){
	int num1,num2;
	cout << "Enter Num 1: ";
	cin >> num1;
	cout << "Enter Num 2: ";
	cin >> num2;
	swap(num1,num2);
}

int swap(int x, int y){
	int swap;
	cout << "\nBefore Swapping\n";
	cout << "Num 1: " << x <<"\nNum 2: " << y;
	swap=x;
	x=y;
	y=swap;
	cout << "\n\nAfter Swapping\n";
	cout << "Num 1: " << x <<"\nNum 2: " << y;
}

