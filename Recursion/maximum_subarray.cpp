#include<bits/stdc++.h>
using namespace std;
int maximum_subarray(vector<int> &v)
{
    if(v.size() < 1)
        return INT_MIN;
    else if(v.size() == 1)
        return v[0];
    int max = INT_MIN;
    int sum = 0;
    for(auto it:v)
    {
        sum += it;
        if(sum > max)
            max = sum;
    }
    for(int i=1; i<v.size(); i++)
    {
        vector<int> ve = v;
        ve.erase(ve.begin(), ve.begin()+i);
        int x = maximum_subarray(ve);
        if(x > max)
            max = x;
    }
    return max;
}
int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<maximum_subarray(v);
    return 0;
}