using namespace std;
#include<iostream>

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		int sum=3;
		for(int j=0;j<a;j++)
		{
			sum=(sum-1)*2;
		}
		cout<<sum<<endl;
	}
} 
