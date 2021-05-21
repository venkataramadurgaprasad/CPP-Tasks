#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int num, count=0;
    cin>>num;
    // Throws TLE
    // for(int i=num-1; i>0; i--)
    // {
    //     num = num & i;
    //     if(num == 0)
    //     {
    //         cout<<i;
    //         break;
    //     }
    // }
    while((num>>1))
    {
        count++;
        num = num>>1;
    }
    cout<<((1<<count) -1);
    return 0;
}