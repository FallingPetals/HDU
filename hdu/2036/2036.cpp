using namespace std;
#include<iostream>
#include<iomanip>
int main()
{
	int n;
	while(cin>>n)
	{
		if(n==0)
		{
			return 0;
		}
		else
		{
			double answer=0; 
			struct Point
			{
				int x,y;
			}p[101];
			int i;
			for(i=1;i<=n;i++)//输入各点的x，y坐标 
			{
				cin>>p[i].x>>p[i].y;
			}
			for(i=2;i<=n;i++)
			{
				answer+=(double)(p[i].x*p[i-1].y-p[i].y*p[i-1].x)*0.5;
			}
			answer+=double(p[1].x*p[n].y-p[1].y*p[n].x)*0.5;
			if(answer<0)
			{
				answer=-answer;
			}
			cout<<fixed<<setprecision(1)<<answer<<endl;
		}
	}
}
