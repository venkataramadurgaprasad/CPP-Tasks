#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[], int len)
{
    for(int i=0; i<len-1; i++) // checks from 0 to n-1 elements
    {
        int swaps = 0;
        // it checks until the numbers not upto sorted, for each iteration each element from last will be sorted equal to i
        for(int j=0; j<len-i-1; j++)
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
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout<<"Before Sort: ";
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    bubble_sort(arr, n);
    cout<<"After Sort: ";
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
}
