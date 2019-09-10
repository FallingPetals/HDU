using namespace std;
#include<iostream>
#include<algorithm>

int main()
{
	int n;
	while(cin>>n)
	{
		//int *a=new int[n];
		int a[1000];
		
		int i;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		if(n==1)
		{
			cout<<a[0]<<endl;
			continue;
		}
		else if(n==2)
		{
			if(a[0]==a[1])
			{
				cout<<a[0]<<endl;
				continue;
			}
			else
			{
				cout<<-1<<endl;
				continue;
			}
		}
		/*
		for(i=0;i<n;i++)
		{
			cout<<a[i];
		}
		*/
		int same=0;
		int pre=-1;
		int after=n;
		int flag=0;
		for(i=0;i<n;i++)
		{
			pre++;
			after--;
			while(i!=0&&i+1<n&&a[i]==a[i+1])
			{
				i++;
				after--;
				
			}
			if(pre==after||(pre==0&&after==n-1))
			{
				flag=1;
				break;
			}
		} 
		if(flag==1)
		{
			cout<<a[i]<<endl;
		}
		else
		{
			cout<<-1<<endl;
		}
	}
	return 0;
}
