// Write a Cpp Program to find the area and perimeter of a square and rectangle using function

#include<iostream>
using namespace std;
int square();
int rectangle();

int main(){
	int choice;
	cout << "Menu\n1. Square\n2. Rectangle\nEnter choice: ";
	cin >> choice;
	if(choice==1)
		square();
	else if(choice==2)
		rectangle();
}

int square(){
	int side;
	cout << "\n\nEnter the length of the side: ";
	cin >> side;
	cout << "The area of the square of side " << side << " is " << side*side;
	cout << "\nThe perimeter of square of side " << side << " is " << side*4;
}

int rectangle(){
	int length, breadth;
	cout << "\n\nEnter Length: ";
	cin >> length;
	cout << "Enter Breadth: ";
	cin >> breadth;
	cout << "The area of the rectangle of length " << length << " and breadth " << breadth << " is " << length*breadth;
	cout << "\nThe perimeter of the rectangle of length " << length << " and breadth " << breadth << " is " << 2*(length+breadth);
	
}
