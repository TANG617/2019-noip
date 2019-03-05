//perfect gcd
#include<iostream>
using namespace std;
int gcd(int x,int y)
{
	if (x<y) {
		int temp;
		temp=x;
		x=y;
		y=temp;
	}
	
	if(x%y==0) return y;
	else
	{
		return gcd(x,x%y);
	}
	
}
int main()
{
	int x , y ;
	//cin>>x>>y;
	scanf("%d%d",&x,&y);
	printf("%d",gcd(x,y));
}
