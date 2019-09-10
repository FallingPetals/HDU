using namespace std;
#include<iostream>

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		char a;
		int a2;
		int b;
		cin>>a>>b;
		for(int i=97;i<=122;i++)
		{
			if(a==i)
			{
				a2=-(i-96);
			}
		}
		for(int i=65;i<=90;i++)
		{
			if(a==i)
			{
				a2=i-64;
			}
		}
		cout<<a2+b<<endl;
	}
	return 0;
}
