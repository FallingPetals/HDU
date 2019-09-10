using namespace std;
#include<iostream>
int main()
{
	int n;
	while(cin>>n)
	{
		int i;
		for(i=0;i<n;i++)
		{
		cin.clear();
		int A1,A2,A3,B1,B2,B3;
		cin>>A1>>A2>>A3>>B1>>B2>>B3;
		int C1=0;
		int C2=0;
		int C3=0;
		C1=A1+B1;
		C2=A2+B2;
		C3=A3+B3;
		if(C2>=60)
		{
			C2=C2%60;
			C1++;
		}
		if(C3>=60)
		{
			C3=C3%60;
			C2++;
		}
		cout<<C1<<" "<<C2<<" "<<C3<<endl;;
		}
	}
	return 0;
}
