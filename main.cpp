#include<iostream>
using namespace std;

int main()
{
	char i;

	for(i=0;i!='Y' && i!='N';i++)
	{
		cout<< "�������������� ������Y��N" << endl;
		cin>> i;

		if(i=='Y')
		{
			cout<< "������������" << endl;
			break;
		}
		else if(i=='N')
		{
			cout<< "����û������" << endl;
			break;
		}
		else
		{
			cout<< "����������������롣" << endl;
		}

	}
	system("pause");
	return 0;
}