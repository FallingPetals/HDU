using namespace std;
#include<iostream>

int color[6]={2,3,4,5,6,7};

int main()
{
	
	int n;
	cin>>n;
	while(n--)
	{
		int num,score1,score2;
		cin>>num>>score1>>score2;
		if(num>6)
		{
			score1+=27+(7+1)*(num-6);
		}
		else
		{
			for(int i=5;i>=6-num;i--)
			{
				score1+=color[i];
			}
		}
		if(score1>=score2)
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
		
	}
	return 0;
}
