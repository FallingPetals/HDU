using namespace std;
#include<iostream>

void change(int n)
{
	if(n==1)
	{
		cout<<'1';
		return;
	}
	else
	{
		int flag=0;
		if(n%2==1)
		{
			flag=1;
			n=n-1;
		}
		change(n/2);
		if(flag==1)
		{
			cout<<'1';
		}
		else
		{
			cout<<'0';
		}
		return;
	}
}

int main()
{
	int n;
	while(cin>>n)
	{
		change(n);
		cout<<endl;
	}
	return 0;
}
