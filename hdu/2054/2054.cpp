using namespace std;
#include<iostream>
#include<cstring>

void transform(string &n)
{
	int len=n.length();
	if(n.find('.')!=string::npos)//如果找到小数点则把后面无效的0都去掉 
	{
		for(int i=len-1;n[i]=='0';i--)
		{
			len--;//如果找到一个小数点后的0就让长度减一，用来去掉这个小数点后的0 
		}
		n=n.substr(0,len) ;
		if(n[len-1]=='.')//如果0去掉了以后只剩下小数点那么也要把小数点去掉 
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
