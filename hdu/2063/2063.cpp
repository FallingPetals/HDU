using namespace std;
#include<iostream>
#include<cstring>

int m,n;//m代表男生数目，n代表女生数目 

int line[501][501];
int girl[501];
int used[501];

bool find(int x)
{
	int i,j;
	for(j=1;j<=n;j++)
	{
		if(line[x][j]==1&&used[j]==0)
		{
			used[j]=1;
			if(girl[j]==0||find(girl[j]))
			{
				girl[j]=x;
				return true;
			}
		}
	}
	return false;
}

int main()
{
	int k;
	while(cin>>k)
	{
		if(k==0)
		{
			break;
		}
		int num=0;
		int i,j;
		memset(line,0,sizeof(line));
		memset(girl,0,sizeof(girl));
		memset(used,0,sizeof(used));
		cin>>m>>n;
		int line1=-1;
		int line2=-1;
		for(i=1;i<=k;i++)
		{
			cin>>line1>>line2;
			line[line1][line2]=1;//对互有好感的连上线 
		}
		
		int x=0;
		for(x=1;x<=m;x++)
		{
			memset(used,0,sizeof(used));
			if(find(x))
			{
				num++;
			}
		}
		cout<<num<<endl;
	}
	return 0;
}
