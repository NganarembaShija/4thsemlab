// CPP program to check if an entered number lies between 100 and 200
#include<iostream>
using namespace std;
int main(){
	int num;
	cout << "Enter any number: ";
	cin >> num;
	if(num>100 && num<200){
		cout << num << " lies between 100 and 200";
	}
	else{
		cout << num << " does NOT lies between 100 and 200";
	}
}
