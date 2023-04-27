#include<iostream>
#include"array2.h"
using namespace std;

int main()
{
	array2 obj;
	obj[1][2] = 123;
	cout << obj[1][2] << endl;
	cout << obj;
	return 0;
	system("pause");
}