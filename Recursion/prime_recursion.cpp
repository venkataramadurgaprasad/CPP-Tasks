#include<bits/stdc++.h>
using namespace std;
bool is_prime(int num, int i)
{
    if(num == 1)
        return false;
    if(i*i <= num)
    {
        if(num%i == 0)
            return false;
        return is_prime(num, ++i);
    }
    return true;
}
int main()
{
    int num;
    cin>>num;
    if(is_prime(num, 2))
        cout<<"Prime"<<endl;
    else
        cout<<"Not Prime"<<endl;
}