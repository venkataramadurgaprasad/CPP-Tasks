#include<bits/stdc++.h>
using namespace std;

// Merge function used to merge the divided arrays
void merg(int low, int mid, int high, int arr[])
{
    // First subarray is from low to mid
    // Second subarray is from mid+1 to high
    int left = low, right = mid+1;
    vector<int> temp;
    while(left <= mid && right <= high)
    {
        if(arr[left] < arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    // if left crossed mid push remaining right elements
    while(left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    // if right crossed high push remaining left elements
    while(right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    // change the elements in arr based on vector
    /*  // This also can be taken
    int i = low;
    for(auto it:temp)
    {
        arr[i] = it;
        i++;
    }*/
    for(int i=low; i<=high; i++)
        arr[i] = temp[i-low];
}

// The recursive call for merge sort function
void merge_sort(int low, int high, int arr[])
{
    if(low == high)
        return;
    int mid = (low + high) / 2;
    merge_sort(low, mid, arr); // first half
    merge_sort(mid+1, high, arr); // second half
    merg(low, mid, high, arr);
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
    merge_sort(0, n-1, arr);
    cout<<"After Sorted: ";
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
}