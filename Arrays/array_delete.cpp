#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, idx=-1, x;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cin>>x;
    for(int i=0; i<n; i++)
    {
        if(arr[i] == x)
        {
            idx = i;
            break;
        }
    }
    if(idx == -1)
    {
        cout<<"Element not found in the array";
    }
    else
    {
        n--;
        for(int i=idx; i<n; i++)
        {
            arr[i] = arr[i+1];
        }
    }
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    return 0;
}
