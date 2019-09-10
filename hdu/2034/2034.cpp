using namespace std;
#include<iostream>

void QuickSort(int A[],int low,int high)
{
	int lowOrigin=low;
	int highOrigin=high;
	int mid;
	if(low<high)
	{
		int compare=A[lowOrigin];
		while(low<high)
		{
			while(low<high&&A[high]>compare)
			{
				high--;
			}
			A[low]=A[high];
			while(low<high&&A[low]<compare)
			{
				low++;
			}
			A[high]=A[low];
		}
		mid=low;
		A[mid]=compare;
		QuickSort(A,lowOrigin,mid);
		QuickSort(A,mid+1,highOrigin);
	}
	return;
}

int main()
{
	cin.clear();
	int n,m;
	while(cin>>n>>m)
	{
		cin.clear();
		if(m==n&&m==0)
		{
			return 0;
		}
		int a[101];
		int b[101];
		int i=1;
		for(i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		i=1;
		for(i=1;i<=m;i++)
		{
			cin>>b[i];
		}
		QuickSort(a,1,n);
		QuickSort(b,1,m);
		int p=1;
		int q=1;
		int r=1;
		int c[101];
		if(a[1]>b[1])
		{
			for(i=1;i<=n;i++)
			{
				c[i]=a[i];
			}
		}
		else
		{

		while(p<=n&&q<=m)
		{
			if(a[p]<b[q])
			{
				c[r]=a[p];
				r++;
				p++;
			}
			else if(a[p]==b[q])
			{
				p++;
				q++;
			}
			else//a[p]>b[q]
			{
				while(q<=m&&b[q]<a[p])
				{
					q++;
				}
				if(b[q]==a[p])
				{
					p++;
					q++;
				}
				else//b[q]>a[p]
				{
					c[r]=a[p];
					r++;
					p++;
				}
			}
		}
		while(p<=n)
		{
			c[r]=a[p];
			r++;
			p++;
		}
		
		}
		if(r==1)
		{
			cout<<"NULL";
		}
		else
		{		
		for(i=1;i<r;i++)
		{
			cout<<c[i]<<" ";
		}
		}
		cout<<endl;
		
	}
	return 0;
}
