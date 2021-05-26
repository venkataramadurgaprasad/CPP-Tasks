#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cap, n, pos, elem;
    cin>>cap;
    int arr[cap];
    cin>>n;
    if(cap < n)
        cout<<"Capacity is less than elements to be inserted";
    else
    {
        for(int i=0; i<n; i++)
            cin>>arr[i];
        if(n == cap)
            cout<<"You have inserted all the elements"<<endl;
        else
        {
            cin>>pos;
            cin>>elem;
            for(int i=n; i>=0; i--)
            {
                if(i == pos-1)
                {
                    arr[i] = elem;
                    break;
                }
                arr[i] = arr[i-1];
            }
            n++;
        }
        for(int i=0; i<n; i++)
            cout<<arr[i]<<" ";
    }
}
