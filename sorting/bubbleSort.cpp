/*
In each iteration, check all adjacent elements and swap
so after eachiteration, the largest element will settle at the bottom

Property,Value / Status,Notes
Time Complexity (Best),O(N),Possible only with the optimized version (using a swap flag).
Time Complexity (Avg),O(N2),The typical performance for most cases.
Time Complexity (Worst),O(N2),Occurs when the array is in reverse order.
Space Complexity,O(1),In-place; it only uses a few temporary variables.
Stability,Stable,"Does not swap equal elements, keeping their relative order."
Adaptive,Yes,"If optimized, it can stop early when the array is sorted."
Online,No,Requires the full list to bubble elements to the end.
Core Idea,Adjacent Swaps,Repeatedly swaps neighboring elements to move the max to the end.
*/


#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}

 int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n =  sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    for(int it:arr)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    
    return 0;

}

