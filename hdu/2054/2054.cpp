using namespace std;
#include<iostream>
#include<cstring>

void transform(string &n)
{
	int len=n.length();
	if(n.find('.')!=string::npos)//����ҵ�С������Ѻ�����Ч��0��ȥ�� 
	{
		for(int i=len-1;n[i]=='0';i--)
		{
			len--;//����ҵ�һ��С������0���ó��ȼ�һ������ȥ�����С������0 
		}
		n=n.substr(0,len) ;
		if(n[len-1]=='.')//���0ȥ�����Ժ�ֻʣ��С������ôҲҪ��С����ȥ�� 
		{
			n=n.substr(0,len-1);
		}
	}
}

int main()
{
	string a,b;
	while(cin>>a>>b)
	{
		transform(a);
		transform(b);
		if(a==b)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
} 
