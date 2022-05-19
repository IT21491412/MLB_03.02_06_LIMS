#include<iostream>
#include"Manager.h"
using namespace std;
int main()
{
	Manager* M1 = new Manager;

	M1 = new Manager(1000, "Minosha Deheragoda", "minosha2000@gmail.com");

	M1->DisplayDetails();

	cout << endl;

	delete M1;



}