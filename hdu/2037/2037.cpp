using namespace std;
#include<iostream>
#include<algorithm>

#define MAX 100

struct node
{
	int start;
	int end;
}TV[MAX];

bool cmp(node a,node b)//这个cmp函数是sort函数需要的，表示sort的排序规则 
{
	if(a.end!=b.end)
		return a.end<b.end;//若结束时间不同则根据结束时间排序，先结束的在前 
	else
		return a.start<b.start;//若结束时间相同则根据开始时间排序，后开始的在前 
}

int main()
{
	int n;
	while(cin>>n)
	{
		if(n==0)
			break;
		else
		{
			for(int i=0;i<n;i++)//从数组TV的0位开始储存数据 
			{
				cin>>TV[i].start>>TV[i].end;
			}
			sort(TV,TV+n,cmp);//按结束时间从小到大排序 ，该函数的实现由头文件algorithm提供 
			int count=0;
			int lastend=-1;
			for(int i=0;i<n;i++)
			{
				if(TV[i].start>=lastend)//若当前节目的开始时间在上一个节目的结束之后 
				{
					count++;
					lastend=TV[i].end;
				}
			} 
			cout<<count<<endl;
		}
	}
	return 0;
}
