using namespace std;
#include<iostream>

int main()
{
	int n;
	while(cin>>n)
	{
		int count=0;
		for(int i=1;i<=n;i++)
		{
			if(n%i==0)
			{
				count++;
			}
		}
		if(count%2==0)
		{
			cout<<0<<endl;
		}
		else
		{
			cout<<1<<endl;
		}
	}
	return 0;
}
