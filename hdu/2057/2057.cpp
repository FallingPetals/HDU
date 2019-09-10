using namespace std;
#include<iostream>
#include<cmath>

long long Hex(char a)
{
	switch(a)
	{
		case '0':return 0;break;
		case '1':return 1;break;
		case '2':return 2;break;
		case '3':return 3;break;
		case '4':return 4;break;
		case '5':return 5;break;
		case '6':return 6;break;
		case '7':return 7;break;
		case '8':return 8;break;
		case '9':return 9;break;
		case 'A':return 10;break;
		case 'B':return 11;break;
		case 'C':return 12;break;
		case 'D':return 13;break;
		case 'E':return 14;break;
		case 'F':return 15;break;
	}
}

char Hex2(long long a)
{
	switch(a)
	{
		case 0:return '0';break;
		case 1:return '1';break;
		case 2:return '2';break;
		case 3:return '3';break;
		case 4:return '4';break;
		case 5:return '5';break;
		case 6:return '6';break;
		case 7:return '7';break;
		case 8:return '8';break;
		case 9:return '9';break;
		case 10:return 'A';break;
		case 11:return 'B';break;
		case 12:return 'C';break;
		case 13:return 'D';break;
		case 14:return 'E';break;
		case 15:return 'F';break;
	}
}

long long HexToDec(string n)//十六进制转化为十进制（有符号） 
{
	//cout<<"HexToDex's a:"<<n<<endl;
	long long sum=0;
	int flag=0;//1表示正，-1表示负，0表示默认的正（即未输入符号 
	for(int i=0;i<n.length();i++)
	{
		if(n[i]=='-')
		{
			flag=-1;
		}
		else if(n[i]=='+')
		{
			flag=1;
		}
		else
		{
			int len=n.length();
			long long temp=Hex(n[i]);
			for(int j=0;j<len-i-1;j++)
			{
				temp*=16;
			}
			sum+=temp;
		}
	}
	if(flag==-1)
		sum=-sum;
	return sum;
}

void OutputHex(long long n)
{
	if(n>=1&&n<=15)
	{
		cout<<Hex2(n);
		return;
	}
	else
	{
		long long temp=n%16;
		OutputHex(n/16);
		cout<<Hex2(temp);
		return;
	}
}

void DecToHex(long long n)//十进制转十六进制 
{
	//int flag=0;//0表示正，-1表示负
	if(n<0)
	{
		cout<<'-';
		n=-n;
	} 
	else if(n==0)
	{
		cout<<0<<endl;
		return;
	}
	OutputHex(n);
	cout<<endl;
}

int main()
{
	string a,b;
	while(cin>>a>>b)
	{
		//cout<<"main's a:"<<a<<endl;
		//cout<<HexToDec(a)<<endl;
		long long sum=HexToDec(a)+HexToDec(b);
		DecToHex(sum);
	}
	return 0;
}
