#include<iostream>
#include"array1.h"
using namespace std;

int array1::size = 4;
int array1::count = 0;

array1::array1()
{
	a = new int[size];
	for (int i = 0; i < size; i++)
	{
		a[i] = ++count;
	}
}
array1::~array1()
{
	delete[] a;
	count--;
}
int& array1::operator[](int index)
{
	if (!operator()(index))
	{
		cout << "对不起，列下标越界" << endl;
		exit(-1);
	}
	else
	{
		return a[index];
	}
}
bool array1::operator()(int index)//检查函数是否下标越界
{
	return (index >= 0 && index < size) ? true : false;
}
/*void array1::print()
{

	int i = 0;
	for (i; i < size - 1; i++)	
		cout << a[i] << ",";	
	cout << a[i] << endl;
}*/
ostream& operator<<(ostream&out, array1&arr1)
{
	int i = 0;
	for (i; i < arr1.size - 1; i++)
		out << arr1.a[i] << ",";
	out << arr1.a[i] << endl;
	return out;
}
