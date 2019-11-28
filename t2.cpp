// t2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
	int age;
	string line;
	ofstream fout;
	fout.open("t2.txt");
	if (fout)
	{
		cout << "Writing to the file" << endl;
		cout << "Enter Your Name: ";
		getline(cin, line);
		fout << "Enter Your Name: ";
		fout << line;
		fout << "Enter Your Age:";
		cout << "Enter Your Age: ";
		cin >> age;
		fout << age;

		
	}
	else
		cout << "file not created";
	fout.close();
	ifstream fin;
	fin.open("t1.txt");
	if (fin)
	{
		cout << "reading from the file" << endl;
		while (getline(fin, line))
		{
			cout << line << endl;
			
		}
		
		fin.close();
	}
	else
		cout << "file not readable";


}

