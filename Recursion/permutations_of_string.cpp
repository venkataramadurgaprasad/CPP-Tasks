#include<bits/stdc++.h>
using namespace std;
void printPermutations(string str, string ss, int visited[])
{
    if(str.size() == ss.size())
    {
        cout<<ss<<endl;
        return;
    }
    for(int i=0; i<str.size(); i++)
    {
        if(visited[i] == 0)
        {
            visited[i] = 1;
            printPermutations(str, ss+str[i], visited);
            visited[i] = 0;
        }
    }
}
int main()
{
    string str, ss="";
    cin>>str;
    int x = str.size();
    int visited[x] = {0};
    printPermutations(str, ss, visited);
}