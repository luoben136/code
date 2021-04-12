#include<iostream>
using namespace std;

int main()
{
	cout<< "int    占的字节数是：" << sizeof(int) << "个字节" << endl;
	cout<< "short  占的字节是：" << sizeof(short) << "个字节" << endl;
	cout<< "long   占的字节是：" << sizeof(long) << "个字节" << endl;
	cout<< "char   占的字节是：" << sizeof(char) << "个字节" << endl;
	cout<< "float  占的字节是：" << sizeof(float) << "个字节" << endl;
	cout<< "double 占的字节是：" << sizeof(double) << "个字节" << endl;

	getchar();
	return 0;
}