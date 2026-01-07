/*
Divide and merge technique
divide the array into two parts and merge them recursively

mergeSort(arr, low, high)
{
    mid = (low + high) / 2    
    mergeSort(arr, low, mid)
    mergeSort(arr, mid+1, high)

    merge(arr, low, mid, high)
}


Property,Value / Status,Notes
Time Complexity (Best),O(NlogN),"Even if sorted, it still divides and merges."
Time Complexity (Avg),O(NlogN),Highly consistent performance.
Time Complexity (Worst),O(NlogN),Guaranteed upper bound.
Space Complexity,O(N),Not in-place; requires extra memory for the tmp vector.
Stability,Stable,Preserves the relative order of equal elements.
Adaptive,No,Does not change its behavior based on input order.
Online,No,Needs the full dataset to begin the divide process.
Core Idea,Divide & Conquer,Breaks the problem into tiny pieces and merges them back.


*/


#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high)
{
    int left = low;
    int right = mid+1;
    vector<int> tmp;

    while(left <= mid && right <= high)
    {
        if(arr[left]<arr[right])
        {
            tmp.push_back(arr[left]);
            left++;
        }
        else
        {
            tmp.push_back(arr[right]);
            right++;
        }
    }

    while(left<=mid)
    {
        tmp.push_back(arr[left]);
        left++;
    }
    while(right<=high)
    {
        tmp.push_back(arr[right]);
        right++;
    }

    int k=0;
    for(int i=low; i<=high; i++)
    {
        arr[i] = tmp[k++];
    }
}

void mergeSort(vector<int> &arr, int low, int high)
{
    //cout<<"MergeSort called for arr "<<low<<" "<<high<<endl;
    if(low >= high)
    {
        return;
    }

    int mid = (low + high)/2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);

    merge(arr, low, mid, high);
}

 int main()
{
    vector<int> arr = {13, 46, 24, 52, 20, 9};
    int n =  arr.size();

    mergeSort(arr, 0, n-1);

    for(int it:arr)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    
    return 0;

}

