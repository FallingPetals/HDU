#include <stdio.h>
#include<iostream>
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
    double A[8],x1,y1,x2,y2;
    while(~scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&A[0],
                &A[1],&A[2],&A[3],&A[4],&A[5],&A[6],&A[7]))
    {
        change(&A[0],&A[1],&A[2],&A[3]);
        change(&A[4],&A[5],&A[6],&A[7]);
        x1= A[0] > A[4] ? A[0] : A[4];//x1��x3���Ƚϣ�ȡmax
        y1= A[1] > A[5] ? A[1] : A[5];//y1��y3���Ƚϣ�ȡmax
        x2= A[2] < A[6] ? A[2] : A[6];//x2��x4���Ƚϣ�ȡmin
        y2= A[3] < A[7] ? A[3] : A[7];//y2��y4���Ƚϣ�ȡmin
        if((x2-x1)<0 || (y2-y1)<0)
            printf("0.00\n");
        else
            printf("%.2lf\n",(x2-x1)*(y2-y1));
    }
    return 0;
}
