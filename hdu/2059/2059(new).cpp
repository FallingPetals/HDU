using namespace std;
#include<iostream>
#include<algorithm>
#include<cstring>
#define MAX 10000

double min(double a,double b)
{
	if(a<b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int main()
{
	int l;
	while(cin>>l)
	{
		int n;//表示充电站的个数，
		double c,t;//分别电动车冲满电以后能行驶的距离以及每次充电所需要的时间
		cin>>n>>c>>t;
		double vr,vt1,vt2;//分别表示兔子跑步的速度，乌龟开电动车的速度，乌龟脚蹬电动车的速度
		cin>>vr>>vt1>>vt2;
		double p[102];//分别表示各个充电站离跑道起点的距离，其中0<p1<p2<...<pn<L
		int i;
		for(i=1;i<=n;i++)
		{
			cin>>p[i];
		}
		p[0]=0;//把起点当作第一个加油站 
		p[n+1]=l;//把终点当作最后一个加油站
		double dp[102];//dp[j]表示到第j个加油站为止最少花费了多少时间 
		for(i=0;i<102;i++)
		{
			dp[i]=999999999;
		}
		dp[0]=0;
		
		for(i=1;i<=n+1;i++)//表示此时已经到了第i个加油站 
		{
			int j;
			double time;
			//double MIN=99999999;
			for(j=0;j<i;j++)//表示在第j个加油站加速（j之前有没有加速j自己不管，因为之前都已经算进dp了 
			{
				int x,y;//x为加速路程，y为脚蹬路程
				int distance=p[i]-p[j]; 
				if(distance<c)
				{
					x=distance;
					y=0;
				} 
				else
				{
					x=c;
					y=distance-c;
				}
				/* 
				if(j==0)//如果j==0，即起点从0开始，则不用加上加油时间，因为此时的油是在比赛开始前加的，而不是比赛开始后 
					time=dp[j]+x*1.0/vt1+y*1.0/vt2;
				else
					time=dp[j]+x*1.0/vt1+y*1.0/vt2+t;
				if(time<MIN)
					MIN=time;
				*/ 
				if(j==0)//如果j==0，即起点从0开始，则不用加上加油时间，因为此时的油是在比赛开始前加的，而不是比赛开始后 
					dp[i]=min(dp[i],dp[j]+x*1.0/vt1+y*1.0/vt2);//如果在第j个加油站加速花的时间要比不加速多，则dp不变，仍未dp[i] 
				else
					dp[i]=min(dp[i],dp[j]+x*1.0/vt1+y*1.0/vt2+t);
			}
			//dp[i]=MIN;
		}
		
		/*
		for (int i = 1; i <= n+1; i++)
		{
			double Min = 99999999;
			for (int j = 0; j < i; j++)
			{
				double time;
				int x = p[i] - p[j];
				if (c >= x)
				{
					time = x*1.0 / vt1;
				}
				else
				{
					time = c*1.0 / vt1 + (x - c)*1.0 / vt2;
				}
				if (j )time += t;
				
				if (Min> dp[j] + time)
				{
					Min = dp[j] + time;
				}
				
				dp[i]=min(dp[i],dp[j]+time);
			}
			dp[i] = Min;
			
		}
		*/
		double time_rabbit=l*1.0/vr;
		if(dp[n+1]<time_rabbit)
			cout<<"What a pity rabbit!"<<endl;
		else
			cout<<"Good job,rabbit!"<<endl;
	}
	return 0;
}
