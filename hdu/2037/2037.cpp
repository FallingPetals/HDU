using namespace std;
#include<iostream>
#include<algorithm>

#define MAX 100

struct node
{
	int start;
	int end;
}TV[MAX];

bool cmp(node a,node b)//���cmp������sort������Ҫ�ģ���ʾsort��������� 
{
	if(a.end!=b.end)
		return a.end<b.end;//������ʱ�䲻ͬ����ݽ���ʱ�������Ƚ�������ǰ 
	else
		return a.start<b.start;//������ʱ����ͬ����ݿ�ʼʱ�����򣬺�ʼ����ǰ 
}

int main()
{
	int n;
	while(cin>>n)
	{
		if(n==0)
			break;
		else
		{
			for(int i=0;i<n;i++)//������TV��0λ��ʼ�������� 
			{
				cin>>TV[i].start>>TV[i].end;
			}
			sort(TV,TV+n,cmp);//������ʱ���С�������� ���ú�����ʵ����ͷ�ļ�algorithm�ṩ 
			int count=0;
			int lastend=-1;
			for(int i=0;i<n;i++)
			{
				if(TV[i].start>=lastend)//����ǰ��Ŀ�Ŀ�ʼʱ������һ����Ŀ�Ľ���֮�� 
				{
					count++;
					lastend=TV[i].end;
				}
			} 
			cout<<count<<endl;
		}
	}
	return 0;
}
