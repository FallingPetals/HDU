
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
	int L, N, C, T, VR, VT1, VT2, p[105];
	double tr, time;
	double dp[1005];
	while (cin >> L)       //L��ʾ�ܵ��ĳ��ȣ�
	{
		memset(p, 0, sizeof(p));
		cin >> N >> C >> T;    //N��ʾ���վ�ĸ�����C��ʾ�綯�������������ʻ�ľ��룬T��ʾÿ�γ������Ҫ��ʱ��
		cin >> VR >> VT1 >> VT2;//�ֱ��ʾ���ӵ��ܲ��ٶȣ��ڹ꿪�糵���ٶȣ��ڹ�ŵŵ綯�����ٶȣ�
		for (int i = 1; i <= N; i++)
		{
			cin >> p[i];          //��ʾ����վ�����ܵ�ľ��룻
		}
		p[N + 1] = L;
		dp[0] = 0;
		tr = L*1.0 / VR;
		for (int i = 1; i <= N+1; i++)
		{
			double Min = 99999999;
			for (int j = 0; j < i; j++)
			{
				int x = p[i] - p[j];
				if (C >= x)
				{
					time = x*1.0 / VT1;
				}
				else
				{
					time = C*1.0 / VT1 + (x - C)*1.0 / VT2;
				}
				if (j )time += T;
				if (Min> dp[j] + time)
				{
					Min = dp[j] + time;
				}
			}
			dp[i] = Min;
		}
		if (dp[N+1]>tr)
			cout << "Good job,rabbit!" << endl;
		else 
			cout << "What a pity rabbit!" << endl;
	}
	return 0;
}
