#include<bits/stdc++.h>
using namespace std;

int is_happy_number(int num)
{
    int res = 0, r;
    if(num == 1 || num == 7)
        return 1;
    while(num >= 10)
    {
        while(num)
        {
            r = num % 10;
            res += r*r;
            num /= 10;
        }
        num = res;
        res = 0;
    }
    if(num == 1)
        return 1;
    else
        return 0;
}

int main()
{
    int num;
    cin>>num;
    if(is_happy_number(num))
        cout<<"Happy Number";
    else
        cout<<"Not a happy number";
}
