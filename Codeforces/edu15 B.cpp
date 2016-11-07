#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool *inMemory;

int pairSum(int arr[], int n)
{
    int count = 0;

    if(n==0)
        return count;
    for (int i = 0; i < n; ++i)
    {
        int start = 0;
        int end = n-1;
        while(start <= end)
        {
            int mid = start + (end-start)/2;
            if(i == mid)
                break;
            else if((arr[i] + arr[mid]) == k && !inMemory[i] && !inMemory[mid])
            {
                count++;
                inMemory[i] = true;
                inMemory[mid] = true;
            }
            else if(arr[i] + arr[mid] >= k)
            {
                end = mid-1;
            }
            else
                start = mid+1;
        }
    }
    return count;
}


int main()
{
    int n;
    cin>>n;
    int arr[n+1]; // = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for(int i=0; i<n; i++)
        cin>>arr[i];

    inMemory = new bool[n+1];
    for (int i = 0; i < 10; ++i)
    {
        inMemory[i] = false;
    }
    cout << pairSum(arr, n) << endl;
    return 0;
}
