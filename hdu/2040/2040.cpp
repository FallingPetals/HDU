	using namespace std;
	#include<iostream>
	
	int main()
	{
		int m;
		cin>>m;
		for(int i=0;i<m;i++)
		{
			int a,b;
			cin>>a>>b;//ÿ�β����������������������ж����������Ƿ�Ϊ�׺��� 
			int a_count=0;
			for(int j=1;j<=a/2;j++)
			{
				if(a%j==0)
					a_count+=j;
			}
			int b_count=0;
			for(int j=1;j<=b/2;j++)
			{
				if(b%j==0)
					b_count+=j;
			}
			if((a==b_count)&&(b==a_count))
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
		return 0;
	}
