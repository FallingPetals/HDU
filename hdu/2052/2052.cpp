using namespace std;
#include<iostream>

int main()
{
	int a,b;//�ֱ�Ϊx��y��Ŀ�� 
	while(cin>>a>>b)
	{
		cout<<'+';
		for(int i=0;i<a;i++)
		{
			cout<<'-';
		}
		cout<<'+'<<endl;
		for(int i=0;i<b;i++)
		{
			cout<<'|';
			for(int j=0;j<a;j++)
			{
				cout<<' ';
			}
			cout<<'|'<<endl;
		}
		cout<<'+';
		for(int i=0;i<a;i++)
		{
			cout<<'-';
		}
		cout<<'+'<<endl<<endl;
	}
	return 0;
}
