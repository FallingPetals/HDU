/*
这道题其实原理也在于递推，即找出f(n)的方程，也就是如同f(n)=f(n-1)...这样的递推关系式
我们可以根据长度为n-1时的最后一位字母是E、F还是O进行分类，因为n-1位的这两种情况会影响n位的种类
1、若n-1位是E或者F，则此时n位可以是E、O、F三种，所以这种情况下f(n)=3*s(n-1)，其中s(n-1)表示n-1位是E、F的种类
2、若n-1位是O，则此时n位只能是E、F两种，所以f(n)=2*t(n-1)，其中t(n-1)表示 n-1位是O的种类
综上所述，f(n)=3*s(n-1)+2*t(n-1)
因为f(n-1)=s(n-1)+t(n-1)
所以f(n)=2f(n-1)+s(n-1)
而s(n-1)又可以是f(n-2)*2，因为n-1位是E或F时，n-2位可以是任意字母
所以f(n)=2*f(n-1)+2*f(n-2) 
*/

using namespace std;
#include<iostream>

int main()
{
	long long f[40];
	f[1]=3;
	f[2]=8;
	for(int i=3;i<40;i++)
	{
		f[i]=(f[i-1]+f[i-2])*2;
	}
	int n;
	while(cin>>n)
	{
		cout<<f[n]<<endl;
	}
	return 0;
}
