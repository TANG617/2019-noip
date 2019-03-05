//https://www.luogu.org/problemnew/show/
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int sub1,sub2,sub3;
void num(int x)
{
    sub1=sub2=sub3=0;
    string temp;
    temp=x+'0';
    for(int i=0;i<3;i++)
    {
        sub3=(temp[i]+'0')*pow(10,i);
    }
    for(int i=0;i<3;i++)
    {
        sub2=(temp[i+2]+'0')*pow(10,i);
    }
    for(int i=0;i<3;i++)
    {
        sub1=(temp[i+5]+'0')*pow(10,i);
    }
}
int main()
{
    int x;
    cin>>x;

    
    
    for(int i=10000;i<30000;i++)
    {
        num(i);
        if(sub1%x==0&&sub2%x==0&&sub3%x==0)
        {
            printf("%d",i);
        }
    
    }
}
