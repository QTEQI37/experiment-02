#include<iostream>
#include<stdlib.h>
#include"array2.h"
using namespace std;

int array2::size = 3;

array2::array2()
{
	a = new array1[size];
}
array2::~array2()
{
	delete[] a;
}
array1& array2::operator[](int index)
{
	if (!operator()(index))
	{
		cout << "对不起，行下标越界" << endl;
		exit(-1);
	}
	else
	{
		return a[index];
	}
}
bool array2::operator()(int index)//检查函数是否下标越界
{
	return (index >= 0 && index < size) ? true : false;
}
ostream& operator<<(ostream& out, array2& arr2)
{
	int i = 0;
	for (i; i < arr2.size; i++)
		out << arr2.a[i];
	return out;
}
