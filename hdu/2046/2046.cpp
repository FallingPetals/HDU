using namespace std;
#include<iostream>

int main()
{
	long long f[51];
	f[1]=1;
	f[2]=2;
	f[3]=3;
	for(int i=4;i<=50;i++)
	{
		f[i]=f[i-1]+f[i-2];
	}
	int n;
	while(cin>>n)
	{
		cout<<f[n]<<endl;
	}
	return 0;
}
