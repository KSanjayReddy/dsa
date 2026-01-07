/*
Select the smallest elenment and swap with first position,
Select the second smallest element and swap with second position, and so on

Property,Value / Status,Notes
Time Complexity (Best),O(N2),Still performs all comparisons even if sorted.
Time Complexity (Avg),O(N2),Standard nested loop behavior.
Time Complexity (Worst),O(N2),Occurs regardless of initial order.
Space Complexity,O(1),In-place; uses no extra memory.
Stability,Unstable,Can swap equal elements out of relative order.
Swaps,O(N),Max N−1 swaps; very efficient for memory writes.
Adaptive,No,Does not speed up on nearly sorted data.
Online,No,Requires the full list to find the minimum.
Core Idea,Selection,Repeatedly selects the minimum from the unsorted part.


*/


#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    for(int i=0; i< n-1; i++)
    {
        int pos = i;
        int small =  arr[i];
        for(int j=i+1; j<n; j++)
        {
            if(arr[j] < small)
            {
                small = arr[j];
                pos = j;
            }
        }
        if(pos != i)
        {
            int tmp = arr[i];
            arr[i] = arr[pos];
            arr[pos] = tmp;
        }
    }
}

 int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n =  sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, n);

    for(int it:arr)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    
    return 0;

}

