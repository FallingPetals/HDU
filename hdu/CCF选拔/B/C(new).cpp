using namespace std;
#include<iostream>

int main()
{
	int t;
	while(cin>>t)
	{
		int n = t - 3500;
    int a1 = 1500 * 0.97;
    int a2 = a1 + 3000 * 0.9;
    int a3 = a2 + 4500 * 0.8;
    int a4 = a3 + 26000 * 0.75;
    int a5 = a4 + 20000 * 0.7;
    int a6 = a5 + 25000 * 0.65;
    int s = 0;
    if( n < 0 ){
        s = t;
    }

    /*
    3500
    3500 + 1500
    3500 + 4500
    3500 + 9000
    */
    else if(n <= a1 && n > 0){
        s = (int)(3500+n/0.97);
    }
    else if(n > a1 && n <= a2){
        s = (int)(5000 +(n-a1)/0.9);
    }
    else if(n > a2 && n <= a3){
        s = (int)(8000 +(n-a2)/0.8);    
    }
    else if(n > a3 && n <= a4){
        s = (int)(12500+(n-a3)/0.75);
    }
    else if(n > a4 && n <= a5){
        s = (int)(38500+(n-a4)/0.7);
    }
    else if(n > a5 && n <= a6){
        s = (int)(3500+(n-a5)/0.65);
    }
    else if(n > a6){
        s = (int)(3500+(n-a6)/0.55);
    }
		
		cout<<s<<endl; 
	}
	return 0;
}
