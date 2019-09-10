/* 
之前超时是因为计算每个答案都要跑一遍递归函数，如果m大了就会花费很多时间造成超时
而找到规律之后（即f(n)=f(n-1)+f(n-2)斐波那契数列），可以直接提前算好（因为已经规定了m的范围（即m<40））
每次输入只用从算好的数组中取答案即可，所有数据只用计算一次，所以不会超时 
*/ 

using namespace std;
#include<iostream>

int main()
{
	int fn[41];
	fn[1]=0;
	fn[2]=1;
	fn[3]=2;
	for(int i=4;i<=40;i++)
	{
		fn[i]=fn[i-1]+fn[i-2];
	}
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int m;
		cin>>m;
		cout<<fn[m]<<endl;
	}
	return 0;
}
