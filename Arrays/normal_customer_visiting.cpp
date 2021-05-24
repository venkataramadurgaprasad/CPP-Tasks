#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    int *max = max_element(arr, arr+n);
    int frq_arr[*max+1] = {0};
    for(int i=0; i<n; i++)
        frq_arr[arr[i]]++;
    int idx, maxim=0;
    for(int i=1; i<=*max; i++)
        if(frq_arr[i] > maxim)
        {
            idx = i;
            maxim = frq_arr[i];
        }
    cout<<"Customer  with id: "<<idx<<" arrived most frequently";
    return 0;
}