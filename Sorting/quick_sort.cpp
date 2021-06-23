#include<bits/stdc++.h>
using namespace std;

int partition(int low, int high, int arr[])
{
    int pivot = arr[low], i=low;
    while(low < high)
    {
        while(arr[low] <= pivot)
            low++;
        while(arr[high] > pivot)
            high--;
        if(low < high)
            swap(arr[low], arr[high]);
    }
    arr[i] = arr[high]; // i is the saved location of pivot(low)
    arr[high] = pivot;
    return high;
}

// The recursive call for quick sort function
void quick_sort(int low, int high, int arr[])
{
    if(low < high)
    {
        int loc = partition(low, high, arr); // Location of pivot element at sorted position
        quick_sort(low, loc-1, arr);
        quick_sort(loc+1, high, arr);
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
    quick_sort(0, n-1, arr);
    cout<<"After Sorted: ";
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
}