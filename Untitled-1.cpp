//https://www.luogu.org/problemnew/show/P1151
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
string sub1,sub2,sub3;
void num(int x)
{
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
    int sub1=0,sub2=0,sub3=0;
    
    for(int 1=0;i<3000;i++)
    {
        sub3=
    }
}