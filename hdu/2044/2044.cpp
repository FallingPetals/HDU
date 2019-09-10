using namespace std;
#include<iostream>

int main()
{
	long long fn[50];//如果这里用int就错了 ，因为fn(49)是7778742049，超过了int的范围（- 2^31 ~ 2^31-1,其中2^31-1比fn(49)小） 
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
