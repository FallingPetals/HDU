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
		int flag=0;
		int p=0;
		int q=0;
		int j;
		for(i=0;i<n;i++)
		{
			p=0;
			q=0;
			for(j=0;j<n;j++)
			{
				if(a[i]>a[j])
				{
					p++;
				}
				else if(a[i]<a[j])
				{
					q++;
				}
			}
			if(q==p)
			{
				cout<<a[i]<<endl;
				flag=1;
				break;
			}
			
		 } 
		 if(flag==0)
		 {
		 	cout<<-1<<endl;
		 }
	} 
	return 0;
}
