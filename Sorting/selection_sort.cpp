#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[], int len)
{
    for(int i=0; i<len-1; i++) // checks from 0 to n-1 elements
    {
        int min_idx = i; //store the index with minimum value considering arr[i] as minimun
        for(int j=i+1; j<len; j++) // checks from i+1 element to last element (Remaining unsorted array)
        {
            if(arr[j] < arr[min_idx]) // check if element less than previous minimum element
            {
                min_idx = j;
            }
        }
        swap(arr[i], arr[min_idx]);
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout<<"Before Sorted: ";
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    selection_sort(arr, n);
    cout<<"After Sorted: ";
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
}