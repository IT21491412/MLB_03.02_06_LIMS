#include<iostream>
#include"User.h"
using namespace std;
int main()
{
	Registered_User * R1 = new Registered_User();

	R1 = new Registered_User(0001, "Shehan Gunasekara", "No 97, New Road, Kiribathgoda", "shehan2000@gmail.com", 21);

	R1 -> DisplayDetails();

	cout << endl;

	delete R1;

}