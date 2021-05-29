#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    bool flag=true;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i] > arr[j])
            {
                flag = false;
                break;
            }
        }
        if(!flag)
        {
            cout<<"Not sorted";
            break;
        }
    }
    if(flag)
    {
        cout<<"Sorted";
    }
    return 0;
}