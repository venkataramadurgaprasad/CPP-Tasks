#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin>>n;
    map<int, int> freq;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        freq[x]++;
    }
    int idx, maxim=0;
    for(auto it:freq)
    {
        if(it.second > maxim)
        {
            maxim = it.second;
            idx = it.first;
        }
    }
    cout<<"Customed with id: "<<idx<<" arrived more frequently";
    return 0;
}