using namespace std;
#include<iostream>
#include<cstring>

 
struct Privilege
{
	string name;
	int level;	
};
struct Role
{
	string name;
	struct Privilege privilege[11];
	int priviNum;
};
struct User
{
	string name;
	struct Role uRole[11];
	int roleNum; 
}; 
struct User user[101];
struct Role role[101];
struct Privilege pri[101]; 
 
int findRole(string name)
{
	int i;
	for(i = 0; i < 100; i++)
	{
		if(role[i].name == name)
		{
			return i;
		}
	}
	return -1;
}
int findUser(string name)
{
	int i;
	for(i = 0; i < 100; i++)
	{
		if(name == user[i].name)
		{
			return i;
		}
	}
	return -1;
}
struct Privilege getPrivilege(string quanxian)
{
	struct Privilege p;
	if(quanxian.find(":",0) != string::npos)
	{
		int pos =  quanxian.find(":",0);
		p.name = quanxian.substr(0,pos);
		p.level = quanxian.at(quanxian.length()-1)-'0';
	}else
	{
		p.name = quanxian;
		p.level = -1; 
	}
	return p;	
}
int findPrivilege(string name)
{
	int i;
	for(i = 0; i < 100; i++)
	{
		if(pri[i].name == name)
		{
			return i;
		}
	}
	return -1;
} 
int main()
{
	int p,u,r,i,j,q,k;
	string quanxian;
	while(cin>>p)
	{
	for(i = 0; i < p; i++)
	{
		cin>>quanxian;
		pri[i] = getPrivilege(quanxian);	
	}
	cin>>r;
	for(i = 0; i < r; i++)
	{
		string username;
		cin>>role[i].name;
		cin>>role[i].priviNum;
		for(j = 0; j < role[i].priviNum; j++) 
		{
			string quanxian;
			cin>>quanxian;
			role[i].privilege[j] = getPrivilege(quanxian);
		}
	} 
	cin>>u;

	for(i = 0; i < u; i++)
	{
		cin>>user[i].name;
		cin>>user[i].roleNum;
		for(j = 0; j < user[i].roleNum; j++)
		{
			string rolename;
			cin>>rolename;
			user[i].uRole[j] = role[findRole(rolename)];
		}
	}
	cin>>q;

	for(i = 0; i < q; i++)
	{
		string name;
		string quanxian;
		cin>>name>>quanxian;
		int priviFlag = 0;
		int maxLevel = -1;
		if(findUser(name) != -1) 
		{
			User u = user[findUser(name)];
			for(j = 0; j < u.roleNum; j++) 
			{
				for(k = 0; k < u.uRole[j].priviNum; k++)  
				{
					struct Privilege p;
					p = getPrivilege(quanxian);
					if (p.name == u.uRole[j].privilege[k].name)  
					{
						 if(p.level == -1 && u.uRole[j].privilege[k].level == -1) 
						 {
						 	priviFlag = 1;
						 }else if(p.level == -1 && u.uRole[j].privilege[k].level != -1) 
						 {
						 	if(maxLevel < u.uRole[j].privilege[k].level)
							 {
							 	priviFlag = 1;
							 	maxLevel = u.uRole[j].privilege[k].level;
							 } 
						 }else if(p.level != -1 && u.uRole[j].privilege[k].level != -1)
						 {
						 	if(p.level <= u.uRole[j].privilege[k].level)
							{
							 	priviFlag = 1;
							}
						 } 
					}
				}
			}
		}
		if(priviFlag == 1 && maxLevel != -1)
		{
			cout<<maxLevel<<endl;
		}else if(priviFlag == 1 && maxLevel == -1)
		{
			cout<<"true"<<endl;
		}else if(priviFlag == 0)
		{
			cout<<"false"<<endl;
		}	
	}
	}
	return 0;
}
