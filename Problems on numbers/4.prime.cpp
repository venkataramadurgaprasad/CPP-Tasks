#include<bits/stdc++.h>
using namespace std;

bool is_prime(int n)
{
    for(int i=2; i<sqrt((double)n)+1; i++)
        if(n % i == 0)
            return false;
    return true;
}

int main()
{
    int num;
    cin>>num;
    if(is_prime(num))
        cout<<"Prime";
    else
        cout<<"Not Prime";
}