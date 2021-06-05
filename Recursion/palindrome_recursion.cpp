#include<bits/stdc++.h>
using namespace std;
bool palin(string str, int l, int h)
{
    if(l <= h)
    {
        if( str[l] != str[h])
        {
            return false;
        }
        palin(str, ++l, --h);
    }
    return true;
}
int main()
{
    string str;
    cin>>str;
    if(palin(str, 0, str.length()-1))
        cout<<"Palindrome";
    else
        cout<<"Not Palindrome";
    return 0;
}