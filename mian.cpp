#include<iostream>
using namespace std;

int main()
{
	int i;

	cout<< "Characters with 32-127 ASCII codes�� " << endl;
	for(i=32;i<=127;i++)
	{
		cout<< char(i);			//ǿ��ת��
	}

	getchar();
	return 0;
}