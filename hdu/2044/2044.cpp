using namespace std;
#include<iostream>

int main()
{
	long long fn[50];//���������int�ʹ��� ����Ϊfn(49)��7778742049��������int�ķ�Χ��- 2^31 ~ 2^31-1,����2^31-1��fn(49)С�� 
	fn[1]=1;
	fn[2]=1;
	fn[3]=2;
	for(int i=4;i<50;i++)
	{
		fn[i]=fn[i-1]+fn[i-2];
	}
	//cout<<fn[49]<<endl; 
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a,b;
		cin>>a>>b;
		int num=b-a+1;
		cout<<fn[num]<<endl;
	}
	return 0;
}
