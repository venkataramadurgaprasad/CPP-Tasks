#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, swaps;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout<<"Before Sorted: ";
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    for(int i=0; i<n-1; i++) // checks from 0 to n-1 elements
    {
        swaps = 0;
        // it checks until the numbers not upto sorted, for each iteration each element from last will be sorted equal to i
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j] > arr[j+1]) // check if greater or not
            {
                swaps++; // counts swaps
                swap(arr[j], arr[j+1]); //swaps elements
            }
        }
        if(!swaps) // breaks if no swap done as it will be sorted
            break;
    }
    cout<<"After Sorted: ";
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
}