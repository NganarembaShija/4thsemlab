// CPP program to check if you are a robot or not
#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char check[30];
	int i;
	cout << "Are you a robot: Yes/No: ";
	cin >> check;
	i=strcmp(check,"Yes");
	if(i==0){
		cout << "Human";
	}
	else{
		cout << "Robot";
	}
	return 0;
}
