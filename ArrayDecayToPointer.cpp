#include<iostream>
using namespace std;
template<typename T, size_t N>
size_t arraySize(T(&)[N]){
	return N;
}

int main()
{
	int a[] = { 1, 3, 4 };
	cout << arraySize(a)<<endl;
	return 0;
}