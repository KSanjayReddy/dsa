/*
Find a pivot and put it into its correct position
while doing so, put all small elements into left of pivot all large elements to right of pivot


quickSort(arr, low, high)
{
    partion =  doQuick(arr, low, high)   // pivot is taken as low
    quickSort(arr, low, partition -1)
    quickSort(arr, partition+1, high)
}

doQuick(arr, low, high)
{
    pivot = arr[low]
    i = low
    j = high

    while(i<j)
    {
        while( arr[i]<= pivot && i<=high)
            i++
        
        while( arr[j] > pivot && j>=low)
            j--
        
        if(i<j)
            swap arr[i], arr[j]

    }
    
    swap arr[j] and arr[low]  // putting the pivot at right place

    return j
}


Property,Value / Status,Notes
Time Complexity (Best),O(NlogN),Happens when the pivot consistently splits the array into two equal halves.
Time Complexity (Avg),O(NlogN),Very fast in practice; often faster than Merge Sort due to low overhead.
Time Complexity (Worst),O(N2),"Occurs if the pivot is always the smallest or largest element (e.g., sorting an already sorted array)."
Space Complexity,O(1),"In-place (sorts the original array), but uses stack space for recursion."
Stability,Unstable,Long-distance swaps can move equal elements out of their relative order.
Core Idea,Partitioning,Rearranges the array so the pivot finds its final home.

*/


#include <iostream>
#include <vector>
using namespace std;

int doQuick(vector<int> &arr, int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i<j)
    {
        while(i<=high && arr[i] <= pivot)
        {
            i++;
        }
        while( j >= 0 && arr[j] > pivot)
        {
            j--;
        }

        if(i<j)
        {
            int tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
        }
    }

    // swap pivot and element at j
    arr[low] = arr[j];
    arr[j] = pivot;

    return j;
}


void quickSort(vector<int> &arr, int low, int high)
{
    if(low < high)
    {
        int partion = doQuick(arr, low, high);

        quickSort(arr, low, partion-1);
        quickSort(arr, partion+1, high);
    }
}

 int main()
{
    vector<int> arr = {13, 46, 24, 52, 20, 9};
    int n =  arr.size();

    quickSort(arr, 0, n-1);

    for(int it:arr)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    
    return 0;

}

