#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum;
    bool flag=false;
    cin>>n>>sum;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            int x = 0;
            for(int k=i; k<=j; k++)
                x += arr[k];
            if(x == sum && !flag)
            {
                cout<<"Yes";
                flag = true;
            }
        }
    }
    if(!flag)
        cout<<"No";
}
