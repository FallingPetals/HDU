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
		int n;//��ʾ���վ�ĸ�����
		double c,t;//�ֱ�綯���������Ժ�����ʻ�ľ����Լ�ÿ�γ������Ҫ��ʱ��
		cin>>n>>c>>t;
		double vr,vt1,vt2;//�ֱ��ʾ�����ܲ����ٶȣ��ڹ꿪�綯�����ٶȣ��ڹ�ŵŵ綯�����ٶ�
		cin>>vr>>vt1>>vt2;
		double p[102];//�ֱ��ʾ�������վ���ܵ����ľ��룬����0<p1<p2<...<pn<L
		int i;
		for(i=1;i<=n;i++)
		{
			cin>>p[i];
		}
		p[0]=0;//����㵱����һ������վ 
		p[n+1]=l;//���յ㵱�����һ������վ
		double dp[102];//dp[j]��ʾ����j������վΪֹ���ٻ����˶���ʱ�� 
		for(i=0;i<102;i++)
		{
			dp[i]=999999999;
		}
		dp[0]=0;
		
		for(i=1;i<=n+1;i++)//��ʾ��ʱ�Ѿ����˵�i������վ 
		{
			int j;
			double time;
			//double MIN=99999999;
			for(j=0;j<i;j++)//��ʾ�ڵ�j������վ���٣�j֮ǰ��û�м���j�Լ����ܣ���Ϊ֮ǰ���Ѿ����dp�� 
			{
				int x,y;//xΪ����·�̣�yΪ�ŵ�·��
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
				if(j==0)//���j==0��������0��ʼ�����ü��ϼ���ʱ�䣬��Ϊ��ʱ�������ڱ�����ʼǰ�ӵģ������Ǳ�����ʼ�� 
					time=dp[j]+x*1.0/vt1+y*1.0/vt2;
				else
					time=dp[j]+x*1.0/vt1+y*1.0/vt2+t;
				if(time<MIN)
					MIN=time;
				*/ 
				if(j==0)//���j==0��������0��ʼ�����ü��ϼ���ʱ�䣬��Ϊ��ʱ�������ڱ�����ʼǰ�ӵģ������Ǳ�����ʼ�� 
					dp[i]=min(dp[i],dp[j]+x*1.0/vt1+y*1.0/vt2);//����ڵ�j������վ���ٻ���ʱ��Ҫ�Ȳ����ٶ࣬��dp���䣬��δdp[i] 
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
