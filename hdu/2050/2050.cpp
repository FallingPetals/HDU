using namespace std;
#include<iostream>

int straight(int m)
{
	int ans,in,out;//in��ʾ��ֱ�߰�Χ��������Ŀ��out��ʾû�б�ֱ�߰�Χ�� 
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
		cin>>n;//nΪ�������� 
		cout<<straight(2*n)-2*n<<endl;//ǰһ��2*n��ֱ����������һ���Ǹ���ֱ��ת���߹��ɵõ���Ҫ��ȥ����Ŀ 
	} 
	return 0;
}
