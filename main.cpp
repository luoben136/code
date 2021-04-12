#include<iostream>
using namespace std;

int main()
{
	char i;

	for(i=0;i!='Y' && i!='N';i++)
	{
		cout<< "现在正在下雨吗？ 请输入Y或N" << endl;
		cin>> i;

		if(i=='Y')
		{
			cout<< "现在正在下雨" << endl;
			break;
		}
		else if(i=='N')
		{
			cout<< "现在没有下雨" << endl;
			break;
		}
		else
		{
			cout<< "输入错误，请重新输入。" << endl;
		}

	}
	system("pause");
	return 0;
}