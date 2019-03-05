//https://www.luogu.org/problemnew/show/
int sub1,sub2,sub3;
#include<bits/stdc++.h>
using namespace std;
bool f;//f用来判断是否有符合条件的数
int main()
{
    int k,a1;
    cin>>k;
    for(int i=10000;i<=30000;i++)
    {
      if(i/100%k==0)//判断1到3位
          if((i/10-i/10000*1000)%k==0)//判断2到4位
            if((i-i/1000*1000)%k==0) cout<<i<<endl,f=1;//判断2到5位，若都符合，输出该数，f为真，继续搜索
    }
    if(!f) cout<<"No";
    return 0;
}
//============================================以下为字符串的错误示范===================================
//单引号代表单个字符，具有ascii码，但是只限一位0-9，c++通过ascii组合进行表达，不能大数加减如100+‘0’不是100的ascii码。
//双引号代表字符串，严禁相加减（加减代表字符串相连），在一个程序中数值唯一确定，大概表示内存地址什么的
// void num(char x)
// {
//     sub1=sub2=sub3=0;
    
//     char temp=x+'0';
//     for(int i=0;i<3;i++)
//     {
//         sub3=(temp[i]-'0')*pow(10,i);
//     }
//     for(int i=0;i<3;i++)
//     {
//         sub2=(temp[i+1]-'0')*pow(10,i);
//     }
//     for(int i=0;i<3;i++)
//     {
//         sub1=(temp[i+2]-'0')*pow(10,i);
//     }
// }
// int main()
// {
//     int x;
//     //cin>>x;

//     num(15000);
//     cout<<temp<<endl;
//     printf("%d;%d;%d",sub1,sub2,sub3);
    
//     // for(int i=10000;i<30000;i++)
//     // {
//     //     num(i);
//     //     if(sub1%x==0&&sub2%x==0&&sub3%x==0)
//     //     {
//     //         printf("%d",i);
//     //     }
    
//     // }
// }
