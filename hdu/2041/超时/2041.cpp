using namespace std;
#include<iostream>

void go(int start,int end,int &count)
{
	if(start==end)
	{
		count++;
		return;
	}
	else if(start>end)
	{
		return;
	}
	else
	{
		go(start+1,end,count);
		go(start+2,end,count);
	}
}

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int start=1;
		int end;
		cin>>end;
		int count=0;
		go(start,end,count);
		cout<<count<<endl;
	}
}
