#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[], int len)
{
    for(int i=1; i<len; i++)
    {
        int key = arr[i];
        int j = i-1;
        while(arr[j] > key && j >= 0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
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
    insertion_sort(arr, n);
    cout<<"After Sorted: ";
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
}