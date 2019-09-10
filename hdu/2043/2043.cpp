using namespace std;
#include<iostream>
#include<cstring>

int strange(char a)
{
	if(a=='~'||a=='!'||a=='@'||a=='#'||a=='$'||a=='%'||a=='^')
		return 1;
	else
		return 0;
}

int main()
{
	int m;
	cin>>m;
	for(int i=0;i<m;i++)
	{
		string key;
		cin>>key;
		if(key.length()>=8&&key.length()<=16)//判断长度是否符合要求 
		{
			int count1=0;//数字 
			int count2=0;//大写字母 
			int count3=0;//小写字母 
			int count4=0;//特殊字符 
			for(int j=0;j<key.length();j++)//判断每一位的密码 
			{
				if(key[j]>=48&&key[j]<=57)
					count1=1;
				else if(key[j]>=65&&key[j]<=90)
					count2=1;
				else if(key[j]>=97&&key[j]<=122)
					count3=1;
				else if(strange(key[j]))
					count4=1;
			}
			if(count1+count2+count3+count4>=3)
			{
				cout<<"YES"<<endl;
			}
			else
				cout<<"NO"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
}
