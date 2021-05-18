#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num, set_bits=0;
    cin>>num;
    while(num)
    {
        if(num&1)
            set_bits++;
        num = num>>1;
    }
    cout<<set_bits;
}