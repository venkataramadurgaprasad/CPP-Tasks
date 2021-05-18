#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num, pos;
    cin>>num>>pos;
    if(num&(1<<(pos-1)))
        cout<<"Set-bit";
    else
        cout<<"Unset-bit";
    return 0;
}