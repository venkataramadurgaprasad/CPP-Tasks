#include<bits/stdc++.h>
using namespace std;
void printCombinationSum(int num, vector<int> &res)
{
    // base case when reached zero
    if(num == 0)
    {
        for(auto it:res)
            cout<<it<<" ";
        cout<<endl;
        return;
    }
    // call 1 to N values to get sum
    for(int i=1; i<=num; i++)
    {
        res.push_back(i);
        printCombinationSum(num-i, res);
        res.pop_back(); // remove the recently inserted elements while back-tracking
    }
}
int main()
{
    int num;
    vector<int> res;
    cin>>num;
    printCombinationSum(num, res);
    return 0;
}