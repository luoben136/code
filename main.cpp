#include<iostream>
using namespace std;
int main()				//主函数
{
	int i,sum=0;		//定义变量

	for(i=1;i<=10;i++)	//循环语句,i从1到10循环
	{
		sum+=i;			//sum=sum+i
	}

	cout<< "sum=" << sum << endl;//输出sum的最终值

	getchar();			//键盘上读入一个字符，并带回显
	return 0;			//返回值为0，对于int类型
}

/*#include<iostream>
using namespace std;
int main()				//主函数
{
	int i=1, sum=0;		//定义变量

	do					//循环语句
	{
		sum+=i;			//sum=sum+i
		i++;			//i从1开始循环
	}while(i<=10);		//i的循环条件小于等于10

	cout<< "sum=" << sum << endl;//输出sum的最终值

	getchar();			//键盘上读入一个字符，并带回显
	return 0;			//返回值为0，对于int类型
}*/