using namespace std;
#include<iostream>
#include<iomanip>

int main()
{
	double n=0.3456;
	cout<<n<<endl<<fixed<<setprecision(2)<<n;
	return 0;
}

/*
根据测试可知，setprecision自带四舍五入的功能，不用再人工判断和进位 
*/
