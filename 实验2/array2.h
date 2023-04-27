#include<iostream>
#include"array1.h"
using namespace std;

class array2//¶şÎ¬
{
public:
	array2();
	~array2();
	array1& operator[](int);
	bool operator()(int);
	//void print();
	friend ostream& operator<<(ostream& out, array2& arr2);
private:
	array1 *a;
	static int size;
	static int count;
};
