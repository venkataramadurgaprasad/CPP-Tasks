#include<bits/stdc++.h>
using namespace std;
bool is_possible(vector<int> books, int barrier, int students)
{
    int count = 1, sumofelem = 0, n = books.size();
    for(int i=0; i<n; i++)
    {
        if(sumofelem+books[i] > barrier)
        {
            count++;
            sumofelem = books[i];
            if(sumofelem > barrier)
                return false;
        }
        else
            sumofelem += books[i];
    }
    if(count > students)
        return false;
    return true;
}
int min_allocate(vector<int> books, int students)
{
    int low = *(min(books.begin(), books.end()));
    int high = 0;
    for(auto it: books)
        high += it;
    int res = -1;
    while(low <= high)
    {
        int mid = (low+high) >> 1;
        if(is_possible(books, mid, students))
        {
            res = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return res;
}
int main()
{
    int n, students;
    vector<int> books;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        books.push_back(x);
    }
    cin>>students;
    cout<<min_allocate(books, students);
    return 0;
}
