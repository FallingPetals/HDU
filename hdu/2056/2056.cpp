using namespace std;
#include<iostream>
#include<iomanip>

void change(double *x1,double *y1,double *x2,double *y2)
{
    double t;
    if(*x1 > *x2)
    {
        t=*x1;
        *x1=*x2;
        *x2=t;
    }
    if(*y1 > *y2)
    {
        t=*y1;
        *y1=*y2;
        *y2=t;
    }
}

int main()
{
	double x1,y1,x2,y2,x3,y3,x4,y4;
	while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4)
	{
		/*double a1,a2,a3,a4,b1,b2,b3,b4;
		if(x1<x2)//以下的if-else把不一定标准的对角线转化为标准对角线（即左下到右上这种 
		{
			a1=x1;
			a2=x2;
		}
		else
		{
			a1=x2;
			a2=x1;
		}
		if(y1<y2)
		{
			b1=y1;
			b2=y2;
		}
		else
		{
			b1=y2;
			b2=y1;
		}
		
		if(x3<x4)
		{
			a3=x3;
			a4=x4;
		}
		else
		{
			a3=x4;
			a4=x3;
		}
		if(y3<y4)
		{
			b3=y3;
			b4=y4;
		}
		else
		{
			b3=y4;
			b4=y3;
		}
		*/
		change(&x1,&y1,&x2,&y2);
		change(&x3,&y3,&x4,&y4);
		
		double a1,b1,a2,b2;
		a1=x1>x3?x1:x3;
		b1=y1>y3?y1:y3;
		a2=x2<x4?x2:x4;
		b2=y2<y4?y2:y4;
		
		if((a2-a1)<0||(b2-b1)<0)
			cout<<fixed<<setprecision(2)<<0.00<<endl;
			//printf("0.00\n");
		else
			cout<<fixed<<setprecision(2)<<(a2-a1)*(b2-b1)<<endl;
			//printf("%.2lf\n",(a2-a1)*(b2-b1));
		
		/*
		if((a2-a1)<0 || (b2-b1)<0)
            printf("0.00\n");
        else
            printf("%.2lf\n",(a2-a1)*(b2-b1));
        */
	}
	return 0;
}
