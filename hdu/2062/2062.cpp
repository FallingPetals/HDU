using namespace std;
#include<iostream>

int main()
{
	int n,t,i,j;//n表示An的n（输入），t表示在当前的第几组 
	long long c[21];//表示An每组的子序列个数 
	long long m;//m表示第几个子序列（输入） 
	long long s[21];//用于储存每一组的开头，用来读取并输出 
	c[1]=1;
	for(i=2;i<=20;i++)
	{
		c[i]=(i-1)*c[i-1]+1;
	}
	while(cin>>n>>m)
	{
		for(i=1;i<=20;i++)
		{
			s[i]=i;
		}
		while(n>0 && m>0)
		{
			t=m/c[n];//判断第m个子序列在第几组 
			if(m%c[n]!=0)//如果m不能被单组的数字个数整除，说明他不是在上一组的末尾，而是在下一组中，所以还要+1 
			{
				t++;
			}
			if(t>0)
			{
				cout<<s[t];
				for(j=t;j<=n;j++)
				{
					s[j]=s[j+1];//因为s[t]已经输出了，所以把这个数字去掉 
				}
				m-=((t-1)*c[n]+1);//表示去掉前面整组的之后是在第几个序列（如现在在第二组，那么就在m中把第一组的数量去掉，并-1，这个-1表示每组的那个单个数组的子序列，这个子序列在n--之后并不算在从c[n-1]中，所以这里也要-1去掉） 
				if(m!=0)
				{
					cout<<" ";
				} 
				else
				{
					cout<<endl;
				}
				
			}
			n--;
		}
			
	}
	return 0;
}
