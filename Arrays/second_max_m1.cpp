#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    int l1=a[0], l2=INT_MIN;
    for(int i=1; i<n; i++)
        if(a[i] > l1)
            l1 = a[i];
    for(int i=0; i<n; i++)
        if(a[i] > l2 && a[i] !=l1)
            l2 = a[i];
    if(l2 == INT_MIN)
        cout<<"Not posiible";
    else
        cout<<l2;
    return 0;
}