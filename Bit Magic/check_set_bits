#include<bits/stdc++.h>
using namespace std;
int isBitSet(int N)
{
    if(!N)
        return 0;
    while(N)
        if(N&1)
            N = N>>1;
        else
            return 0;
    return 1;
}
int main()
{
    int num;
    cin>>num;
    cout<<isBitSet(num);
}
