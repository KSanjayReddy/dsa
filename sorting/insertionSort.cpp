/*
Pushing each element on the last into a sorted array at left 
and shifting the element till the insertion happens at the right place

Property,Value / Status,Notes
Time Complexity (Best),O(N),Occurs when the array is already sorted.
Time Complexity (Avg),O(N2),Standard performance for random data.
Time Complexity (Worst),O(N2),Occurs when the array is sorted in reverse.
Space Complexity,O(1),In-place; uses a constant amount of extra memory.
Stability,Stable,Does not swap equal elements; preserves relative order.
Adaptive,Yes,Performance improves significantly on nearly sorted data.
Online,Yes,Can sort a list as it receives it piece-by-piece.
Core Idea,Insertion,Picks one element and places it in the sorted portion.

*/


#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    for(int i =1; i<n; i++)
    {
        int curr = arr[i];
        int j = i-1;
        while(j>=0 && curr < arr[j])
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = curr;
    }
}

 int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n =  sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);

    for(int it:arr)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    
    return 0;

}

