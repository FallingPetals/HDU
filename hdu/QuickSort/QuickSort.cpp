using namespace std;
#include<iostream>

void QuickSort(int A[],int low,int high)
{
	int lowOrigin=low;
	int highOrigin=high;
	int mid;
	if(low<high)
	{
		int compare=A[lowOrigin];
		while(low<high)
		{
			
		while(low<high&&A[high]>compare)
		{
			high--;
		}
		A[low]=A[high];
		while(low<high&&A[low]<compare)
		{
			low++;
		}
		A[high]=A[low];
		
		}
		mid=low;
		A[mid]=compare;
		QuickSort(A,lowOrigin,mid);
		QuickSort(A,mid+1,highOrigin);
	}
	return;
}

int main()
{
	int A[11]={0,10,9,8,7,6,5,4,3,2,1};
	QuickSort(A,1,10);
	for(int i=1;i<=10;i++)
	{
		cout<<A[i]<<" ";
	}
	return 0;
}
