using namespace std;
#include<iostream>
#include<algorithm>

bool cmp(double a,double b)
{
	return a<b;
}

int main()
{
	int m;
	cin>>m;
	for(int i=0;i<m;i++)
	{
		double len[3];
		cin>>len[0]>>len[1]>>len[2];
		sort(len,len+3,cmp);
		//cout<<len[0]<<" "<<len[1]<<" "<<len[2]<<endl;
		if(len[0]+len[1]>len[2])
		{
			cout<<"YES"<<endl;
		}
		else
			cout<<"NO"<<endl;
	}
	return 0;
} 
