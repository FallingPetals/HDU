/*
这道题是非全错排问题，是n个中有m个错排，但是可以通过转化，把这个问题转化为同2048这样的全错排问题
至于转化，就是先选出m个中有哪n个是错排的，也就是用Cmn这样的排列组合来算出组合种类，然后再在m个错排中计算错排种类（此时只关心
m个错排，因此可以看作全错排） 
*/

using namespace std;
#include<iostream>

int main()
{
	long long f[21]; 
	f[1]=0;
	f[2]=1;
	for(int i=3;i<=20;i++)//这个是全错排的计算 
	{
		f[i]=(i-1)*(f[i-1]+f[i-2]);
	}
	long long c[21];
	c[0]=1;
	c[1]=1;
	for(int i=2;i<=20;i++)//计算累乘，用于计算排列组合 
	{
		c[i]=c[i-1]*i;
	}
	int C;
	cin>>C;
	while(C--)
	{
		int n,m;
		cin>>n>>m;
		int num;
		num=c[n]/(c[m]*c[n-m]);//这是Cnm，也就是从n对新人种选出m对是错排 
		cout<<num*f[m]<<endl; 
	}
	return 0;
}
