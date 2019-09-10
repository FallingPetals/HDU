using namespace std;
#include<iostream>

int pow_mod(int a,int b,int c)//a是底数，b是指数，c是模 
{
	int answer=1;
	int base=a%c;
	while(b)
	{
		if(b&1)
		{
			answer=(answer*base)%c;
		}
		base=(base*base)%c;
		b=b>>1;
	}
	return answer; 
}

int main()
{
	int a,b;
	while(cin>>a>>b)
	{
		cin.clear();
		if(a==0&&b==0)
		{
			return 0;
		}
		else
		{
			cout<<pow_mod(a,b,1000)<<endl;
		}
	}
}
