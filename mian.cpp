#include<iostream>
using namespace std;

int main()
{
	int i;

	cout<< "Characters with 32-127 ASCII codes£º " << endl;
	for(i=32;i<=127;i++)
	{
		cout<< char(i);			//Ç¿ÖÆ×ª»»
	}

	getchar();
	return 0;
}