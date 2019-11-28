// t1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

using namespace std;
int main()
{
	int arr[5] = { 1,2,3,4,50 };
	int sum=0;
	ofstream fout;
	fout.open("t1.txt");
	if (fout)
	{
		for (int x = 0; x < 5; x++)
		{
			fout << arr[x] << " ";
		}
		for (int x = 0; x < 5; x++)
		{
			sum = sum + arr[x];
		}
		fout<< "sum is:" << sum << endl;
		fout.close();
		ifstream fin;
		fin.open("t1.txt");
		if (fin)
		{
			cout << "sum is appeneded";
			fin >> sum;
			fin.close();
		}


		

	}




