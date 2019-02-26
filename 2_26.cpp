#include <bits/stdc++.h>

using namespace std;
char a[501];
char b[501];
char c[510];
vector<int> cc;
int bits_a=0,bits_b=0;
void input()
{
    int i=0;
	scanf("%s",a);
    while(a[i++]){
        bits_a++;
    }
    i=0;
    bits_a--;
    scanf("%s",b);
    while(b[i++]){
        bits_b++;
    }
    bits_b--;
}
int main()
{
    input();
    //printf("answer:%d,,,%d",bits_a,bits_b);
    int temp_0,temp_1,temp;
    while(bits_a>=0&&bits_b>=0)
    {
        temp=a[bits_a--]-'48'+b[bits_b--]-'48';
        if(temp>=10)
        {
            temp_1=1;
            temp_0=temp-10;
        }
        else()
        {
            temp_0=temp;
        }
    cc.push_back(temp_0);
    }
    
    return 0;

}
