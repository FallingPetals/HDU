using namespace std;
#include<iostream>

int straight(int m)
{
	int ans,in,out;//in表示被直线包围的区域数目，out表示没有被直线包围的 
	in=0;
	out=0;
	for(int i=0;i<=m-2;i++)
	{
		in+=i;
	}
	out=2*m;
	ans=in+out;
	return ans;
} 

int main()
{
	int C;
	cin>>C;
	while(C--)
	{
		int n;
		cin>>n;//n为折线数量 
		cout<<straight(2*n)-2*n<<endl;//前一个2*n是直线数量，后一个是根据直线转折线规律得到的要减去的数目 
	} 
	return 0;
}
