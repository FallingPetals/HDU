/*
��������Ǵ���ģ���Ϊ����������Ե�һ������������1����վ����2����վ���ͼ����ˣ������˵�2����վ֮�����ͣ����پ��뻹����
��ô��ʱ����д������������š��������һС�μ��ٻᱻ��0������������
Ҫ�ο�new�ķ��� 
*/


using namespace std;
#include<iostream>

double min(double a,double b)
{
	return a<b?a:b;
}

int main()
{
	int l;//��·�� 
	while(cin>>l)
	{
		int n;//��ʾ���վ�ĸ�����
		double c,t;//�ֱ�綯���������Ժ�����ʻ�ľ����Լ�ÿ�γ������Ҫ��ʱ��
		cin>>n>>c>>t;
		double vr,vt1,vt2;//�ֱ��ʾ�����ܲ����ٶȣ��ڹ꿪�綯�����ٶȣ��ڹ�ŵŵ綯�����ٶ�
		cin>>vr>>vt1>>vt2;
		double p[101];//�ֱ��ʾ�������վ���ܵ����ľ��룬����0<p1<p2<...<pn<L
		int i;
		for(i=1;i<=n;i++)
		{
			cin>>p[i];
		}
		p[i]=l;//���յ�Ҳд��ȥ 
		double f[101];
		if(c>p[1])
			f[0]=p[1]/vt1;
		else
			f[0]=c/vt1+(p[1]-c)/vt2;
		//f[0]=l/vt2;
		for(int i=1;i<=n;i++)//i��ʾĿǰ�����˵ڼ������վ
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
