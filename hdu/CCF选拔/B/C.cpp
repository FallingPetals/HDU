using namespace std;
#include<iostream>

int main()
{
	int t;
	while(cin>>t)
	{
		int m;
		int a1 = 1500 * 0.97;
 	    int a2 = a1 + 3000 * 0.9;
    	int a3 = a2 + 4500 * 0.8;
   	 	int a4 = a3 + 26000 * 0.75;
   	 	int a5 = a4 + 20000 * 0.7;
   		int a6 = a5 + 25000 * 0.65;

		if(t>61005)
		{
			m=80000.0+3500.0+((t-a6-3500)*1.0)/0.55;
			cout<<m<<endl;
		}
		else if(t>44755&&t<=61005)
		{
			m=55000.0+3500.0+((t-a5-3500)*1.0)/0.65;
			cout<<m<<endl;
		}
		else if(t>30755&&t<=44755)
		{
			m=35000.0+3500.0+((t-a4-3500)*1.0)/0.7;
			cout<<m<<endl;
		}
		else if(t>11255&&t<=30755)
		{
			m=9000.0+3500.0+((t-a3-3500)*1.0)/0.75;
			cout<<m<<endl;
		}
		else if(t>7655&&t<=11255)
		{
			m=4500.0+3500.0+((t-a2-3500)*1.0)/0.8;
			cout<<m<<endl;
		}
		else if(t>4955&&t<=7655)
		{
			m=1500.0+3500.0+((t-a1-3500)*1.0)/0.9;
			cout<<m<<endl;
		}
		else if(t>3500&&t<=4955)
		{
			m=3500+((t-3500)*1.0)/0.97;
			cout<<m<<endl;
		}
		else
		{
			cout<<t<<endl;
		}
		
	}
	return 0;
}
