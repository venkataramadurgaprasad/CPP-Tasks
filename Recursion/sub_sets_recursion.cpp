#include<bits/stdc++.h>
using namespace std;
void sub_sets(vector<int> &v, vector<int> &pr)
{
    if(v.size() <= 0)
        return;
    if(v.size() == 1)
    {
        if(find(pr.begin(), pr.end(), v[0]) == pr.end())
        {
            cout<<v[0]<<endl;
            pr.push_back(v[0]);
        }
        return;
    }
    for(auto it:v)
        cout<<it<<" ";
    cout<<endl;
    for(int i=0; i<v.size(); i++)
    {
        vector<int> ve = v;
        ve.erase(ve.begin()+i);
        sub_sets(ve, pr);
    }
    return;
}
int main()
{
    int n;
    cin>>n;
    vector<int> ve, pr;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        ve.push_back(x);
    }
    cout<<"NULL SET"<<endl;
    sub_sets(ve, pr);
}