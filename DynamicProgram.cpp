#include<iostream>
#include<vector>
#include <bitset>  
using namespace std;
int static num = 0;
int _core(const unsigned int n)
{
	vector<vector<int>> a(n, vector<int>(n, 1));
	for (size_t i = 1; i < n; i++)
	{
		for (size_t j = 1; j < n; j++)
		{
			a[i][j] = a[i - 1][j] + a[i][j - 1];
		}
	}
	cout << a[n-1][n-1] << endl;
	return a[n - 1][n - 1];
}

void test_intInitFloat()
{
	float fval1 = 0x800001;
	float fval2 = 0x40000000;
	cout << fval1 << " " << fval2;
}

struct a{
	char x1;
	struct MyStruct
	{
		char x2;
		int x3;
	} b;
	short x4;
	char x5;
};

class base{
	virtual void fun1(){}
};
int main()
{
	cout << sizeof(a) << endl;
	cout << sizeof(base) << endl;
	return 0;
}