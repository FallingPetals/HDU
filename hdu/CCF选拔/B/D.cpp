using namespace std;
#include<iostream>
#include<cstring>

struct Privilege//权限 
{
	string name;
	int level;
};

struct Role//角色 
{
	string name;
	int priNum;
	struct Privilege privilege[11];
};

struct User
{
	string name;
	int roleNum;
	struct Role userRole[11];
};

struct User user[101];
struct Role role[101];
struct Privilege pri[101];

struct Privilege getPrivilege(string temp)
{
	struct Privilege pri2;
	if(temp.find(":",0)!=string::npos)
	{
		int num=temp.find(":",0);
		pri2.name=temp.substr(0,num);
		pri2.level=temp[temp.length()-1]-'0';
	}
	else
	{
		pri2.name=temp;
		pri2.level=-1;
	}
}

int findRole(string temp)
{
	int i;
	for(i=0;i<100;i++)
	{
		if(role[i].name==temp)
		{
			return i;
		}
	}
	return -1;
}

int findUser(string temp)
{
	int i;
	for(i=0;i<100;i++)
	{
		if(temp==user[i].name)
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	int p;
	while(cin>>p)
	{
		int i,j,k,r,u,q;
		for(i=0;i<p;i++)
		{
			string pri_temp;
			cin>>pri_temp;
			pri[i]=getPrivilege(pri_temp);
		}
		cin>>r;
		for(i=0;i<r;i++)
		{
			cin>>role[i].name;
			cin>>role[i].priNum;
			for(j=0;j<role[i].priNum;j++)
			{
				string pri_temp;
				cin>>pri_temp;
				role[i].privilege[j]=getPrivilege(pri_temp);
			}
		}
		cin>>u;
		for(i=0;i<u;i++)
		{
			cin>>user[i].name;
			cin>>user[i].roleNum;
			for(j=0;j<user[i].roleNum;j++)
			{
				string role_temp;
				cin>>role_temp;
				user[i].userRole[j]=role[findRole(role_temp)];
			}
		}
		cin>>q;
		for(i=0;i<q;i++)
		{
			string name_temp;
			string pri_temp;
			cin>>name_temp>>pri_temp;
			int level=-1;
			int flag=0;
			if(findUser(name_temp)!=-1)
			{
				User u=user[findUser(name_temp)];//待测用户
				for(j=0;j<u.roleNum;j++)
				{
					for(k=0;k<u.userRole[j].priNum;k++)
					{
						struct Privilege temp;
						temp=getPrivilege(pri_temp);
						if(temp.name==u.userRole[j].privilege[k].name)
						{
							if(temp.level==-1&&u.userRole[j].privilege[k].level==-1)
							{
								flag=1;
							}
							else if(temp.level==-1&&u.userRole[j].privilege[k].level!=-1)
							{
								flag=1;
								level=u.userRole[j].privilege[k].level;
							}
							else if(temp.level!=-1&&u.userRole[j].privilege[k].level!=-1)
							{
								if(temp.level<=u.userRole[j].privilege[k].level)
								{
									flag=1;
								}
							}
						}
					}
				 } 
			}
			if(flag==1&&level!=-1)
			{
				cout<<level<<endl;
			}
			else if(flag==1&&level==-1)
			{
				cout<<"true"<<endl;
			}
			else if(flag==0)
			{
				cout<<"false"<<endl;
			}
		}
	}
	return 0;
}
