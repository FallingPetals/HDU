/*
这个做法是错误的，因为这样做会忽略掉一种情况：假设第1加油站到第2加油站加油加速了，但到了第2加油站之后还有油，加速距离还多了
那么此时在我写的这个方法种着、这溢出的一小段加速会被清0，所以有问题
要参考new的方法 
*/


using namespace std;
#include<iostream>

double min(double a,double b)
{
	return a<b?a:b;
}

int main()
{
	int l;//总路程 
	while(cin>>l)
	{
		int n;//表示充电站的个数，
		double c,t;//分别电动车冲满电以后能行驶的距离以及每次充电所需要的时间
		cin>>n>>c>>t;
		double vr,vt1,vt2;//分别表示兔子跑步的速度，乌龟开电动车的速度，乌龟脚蹬电动车的速度
		cin>>vr>>vt1>>vt2;
		double p[101];//分别表示各个充电站离跑道起点的距离，其中0<p1<p2<...<pn<L
		int i;
		for(i=1;i<=n;i++)
		{
			cin>>p[i];
		}
		p[i]=l;//把终点也写进去 
		double f[101];
		if(c>p[1])
			f[0]=p[1]/vt1;
		else
			f[0]=c/vt1+(p[1]-c)/vt2;
		//f[0]=l/vt2;
		for(int i=1;i<=n;i++)//i表示目前经过了第几个充电站
		{
			double not_charge=f[i-1]+(p[i+1]-p[i])/vt2;
			double charge;
			if(c>(p[i+1]-p[i]))
				charge=f[i-1]+(p[i+1]-p[i])/vt1+t;
			else
				charge=f[i-1]+c/vt1+(p[i+1]-p[i]-c)/vt2+t;
			f[i]=min(not_charge,charge);
		} 
		
		double tr=l/vr;
		if(f[n]<tr)
			cout<<"What a pity rabbit!"<<endl;
		else
			cout<<"Good job,rabbit!"<<endl;
	}
	return 0;
}
