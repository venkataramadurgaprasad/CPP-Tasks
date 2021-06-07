#include<bits/stdc++.h>
using namespace std;
int dyn[100005];
int fact(int n)
{
    if(dyn[n] != -1)
        return dyn[n];
    else if(n <= 1)
    {
        dyn[n] = 1;
        return dyn[n];
    }
    dyn[n] = n*fact(n-1);
    return dyn[n];
}
int main()
{
    int num, num1;
    cout<<"Enter -1 to stop query.\n";
    cin>>num;
    num1 = num;
    for(int i=0; i<=num; i++)
        dyn[i] = -1;
    while(num>=0)
    {
        cout<<fact(num)<<endl;
        cin>>num;
        if(num > num1)
        {
            for(int i = num1+1; i<=num; i++)
                dyn[i] = -1;
        }
    }
}