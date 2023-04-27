#include<iostream>
using namespace std;

class array1
{
public:
	array1();
	~array1();
	int& operator[](int);
	bool operator()(int);
	//void print();
	friend ostream& operator<<(ostream&out, array1&arr1);
private:
	int* a;
	static int size;
	static int count;
};