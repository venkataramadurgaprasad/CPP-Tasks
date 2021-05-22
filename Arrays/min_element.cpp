#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int maxi=INT_MAX;
    for(int i=0;i<n;i++)
        if(arr[i]<maxi)
            maxi=arr[i];
    cout<<"Minimum element: "<<maxi;
}
