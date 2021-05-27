#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int n, pos, x;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    cin>>x>>pos;
    if(pos>0 && pos<=n+1)
    {
        v.insert(v.begin()+pos-1, x);
    }
    else
    {
        cout<<"position exceeded range\n";
    }
    for(auto it:v)
        cout<<it<<" ";
    return 0;
}
