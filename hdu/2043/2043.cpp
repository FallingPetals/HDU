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
		if(key.length()>=8&&key.length()<=16)//�жϳ����Ƿ����Ҫ�� 
		{
			int count1=0;//���� 
			int count2=0;//��д��ĸ 
			int count3=0;//Сд��ĸ 
			int count4=0;//�����ַ� 
			for(int j=0;j<key.length();j++)//�ж�ÿһλ������ 
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
