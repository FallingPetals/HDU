using namespace std;
#include<iostream>
#include<cstring>
#include<iomanip>

struct Study
{
	string name;
	double credits;
	double score;
};

int main()
{
	Study study[200];
	int N;
	cin>>N;//样例数 
	while(N--)
	{
		int n;//课程数 
		cin>>n;
		int passFlag=0;//是否有不及格的，0为无，1为有 
		for(int i=1;i<=n;i++)//输入 
		{
			cin>>study[i].name>>study[i].credits>>study[i].score;
			if(study[i].score<60)
			{
				passFlag=1;
			}
		}
		if(passFlag==1)
		{
			cout<<"Sorry!"<<endl;
			if(N>0)
				cout<<endl;
		}
		else
		{
			double gpa1=0;
			double gpa2=0;
			for(int i=1;i<=n;i++)
			{
				gpa1+=study[i].credits*study[i].score;
				gpa2+=study[i].credits;
			}
			double gpa=(gpa1*1.0)/(gpa2*1.0);
			cout<<fixed<<setprecision(2)<<gpa<<endl;
			if(N>0)
				cout<<endl;
		}
		
	}
	return 0;
}
