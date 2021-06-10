#include<bits/stdc++.h>
using namespace std;
int maxim = 0;
int printCombinationArray(int idx, int num, vector<int> res, int a[], int a_len)
{
    if(idx == a_len)
    {
        if(num == 0)
        {
            for(auto it:res)
                cout<<it<<" ";
            cout<<endl;
        }
        if(maxim < res.size())
            maxim = res.size();
    }
    else
    {
        // pick
        if(a[idx] <= num)
        {
            res.push_back(a[idx]);
            printCombinationArray(idx, num-a[idx], res, a, a_len);
            res.pop_back();
        }
        // non pick
        printCombinationArray(idx+1, num, res, a, a_len);
    }
    return maxim;
}
int main()
{
    int n, num;
    vector<int> res;
    cin>>num>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    cout<<printCombinationArray(0, num, res, a, n);
    return 0;
}