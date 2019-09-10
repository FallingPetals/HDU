/*
仍然是递推，也就是找出n与n-1、n-2等的关系式
由于要求出n位时的错排数量，所以看n-1位时是否已经满足错排来分类讨论
设f(n)为n个人时的错排种类数 
1、若n-1位时已经满足错排，则再加入一位时(即加入第n位)，n位手中拿的是自己的字条，只要此时他和剩下的n-1个中的任意以恶个人
	交换字条，则n位总体就满足错排了，因此这种情况下 f(n)=(n-1)*f(n-1)
2、若n-1位时就不满足错排，因为要求n位错排，所以要求这个答案就自带一个条件：n位时一定是满足错排的，所以也就是说，在这种情
	况下，n-1位不满足错排，但是加入了n位后只要对n位的字条和某一个人进行交换就可以恰好满足错排。因此n-1位时，肯定只有一个
	人拿着自己的字条，因为只有这样才能让n位和他交换然后恰好满足错排。因此可得，n-1位不满足错排，但n-2位满足错排 
	所以有n-1种可能让n-1位不满足错排（因为前面推到过这种情况下只有一个人拿着自己的字条） 
	所以f(n)=(n-1)*f(n-2)
综上所述 f(n)= (n-1)*( f(n-1)+f(n-2) )
*/ 

using namespace std;
#include<iostream>
#include<iomanip>

int main()
{
	long long f[21];
	f[1]=0;
	f[2]=1;
	f[3]=2;
	for(int i=4;i<=20;i++)
	{
		f[i]=(i-1)*(f[i-2]+f[i-1]);
	}
	int c;
	cin>>c;
	while(c--)
	{
		int n;
		cin>>n;
		double num=f[n];
		double sum=1;
		for(double j=1;j<=n;j++)
		{
			sum*=j;
		}
		double answer=double(num/sum);
		/*int flag=int((answer*100000))%10;
		if(flag>=5)
		{
			answer+=0.0001;
		}*/
		answer*=100;
		cout<<fixed<<setprecision(2)<<answer<<"%"<<endl;
	}
	return 0;
}
