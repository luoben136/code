#include<iostream>
using namespace std;
int main()				//������
{
	int i,sum=0;		//�������

	for(i=1;i<=10;i++)	//ѭ�����,i��1��10ѭ��
	{
		sum+=i;			//sum=sum+i
	}

	cout<< "sum=" << sum << endl;//���sum������ֵ

	getchar();			//�����϶���һ���ַ�����������
	return 0;			//����ֵΪ0������int����
}

/*#include<iostream>
using namespace std;
int main()				//������
{
	int i=1, sum=0;		//�������

	do					//ѭ�����
	{
		sum+=i;			//sum=sum+i
		i++;			//i��1��ʼѭ��
	}while(i<=10);		//i��ѭ������С�ڵ���10

	cout<< "sum=" << sum << endl;//���sum������ֵ

	getchar();			//�����϶���һ���ַ�����������
	return 0;			//����ֵΪ0������int����
}*/