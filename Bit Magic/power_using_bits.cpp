#include<Bits/stdc++.h>
using namespace std;
int main()
{
    int base, exp, res=1;
    cin>>base>>exp;
    while(exp)
    {
        if(exp&1)
            res *= base;
        exp = exp>>1;
        base *= base;
    }
    cout<<res;
    return 0;
}