using namespace std;
#include<iostream>
#include<cmath>

int main()
{
	int n,m;
	while(cin>>n>>m)
	{
		if(n==0&&m==0)
		{
			return 0;
		}
		else
		{
			/*
			for(int i=1;i<=m;i++)
			{
				int sum;
				sum=0;			
				for(int j=i;j<=m;j++)
				{
					sum+=j;
					if(sum==m)
					{
						cout<<'['<<i<<','<<j<<']'<<endl;
					}
				}
			}
			*/
			for(int d=sqrt(2*m);d>=1;d--)
			{
				int temp=m-(1+d)*d/2;
				if(temp%d==0)
					cout<<'['<<(temp/d)+1<<','<<(temp/d)+d<<']'<<endl;
			}
			cout<<endl;
		}
	}
	return 0;
}
