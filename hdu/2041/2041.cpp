/* 
֮ǰ��ʱ����Ϊ����ÿ���𰸶�Ҫ��һ��ݹ麯�������m���˾ͻỨ�Ѻܶ�ʱ����ɳ�ʱ
���ҵ�����֮�󣨼�f(n)=f(n-1)+f(n-2)쳲��������У�������ֱ����ǰ��ã���Ϊ�Ѿ��涨��m�ķ�Χ����m<40����
ÿ������ֻ�ô���õ�������ȡ�𰸼��ɣ���������ֻ�ü���һ�Σ����Բ��ᳬʱ 
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
