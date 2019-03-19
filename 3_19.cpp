#include<bits/stdc++.h>
using namespace std;
struct node
{
	int le,ri;	
};
bool mynode(node x,node y)
{
	return (x.le>y.le);//´óÓÚ·ûºÅÖ¸½µĞò 
}


node mknode(int x,int y )
{
	node mk={x,y};
	return mk;
}

vector <node> ss;
int main()
{
	for(int i=0;i<10;i++)
	{
		int x,y;
		cin>>x>>y;
		ss.push_back(mknode(x,y));
	}
	sort(ss.begin(),ss.begin()+10,mynode);
	printf("\n\n\n\n");
	for(int i=0;i<10;i++)
	{
		cout<<ss[i].le<<" ";
	}
	printf("\n");
	for(int i=0;i<10;i++)
	{
		cout<<ss[i].ri<<" ";
	}
}
