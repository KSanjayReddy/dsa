Given an array nums of size n and an integer k, find the length of the longest sub-array that sums to k. 
If no such sub-array exists, return 0.


Example 1:
Input:
 arr = [10, 5, 2, 7, 1, 9], k = 15  
Output:
 4  
Explanation:
The longest sub-array with a sum equal to 15 is [5, 2, 7, 1], which has a length of 4. 
This sub-array starts at index 1 and ends at index 4, and the sum of its elements (5 + 2 + 7 + 1) equals 15. 
Therefore, the length of this sub-array is 4.


SLIDING WINDOW TECHNIQUE

i = 0
j = 0
sum = 0
largest = 0

while (j< n)
{
    sum = sum + arr[j];

    while( sum > k) // shrink from left till sum comes below k
    {
        sum = sum - arr[i];
        i++;
    }
    
    if( sum == k)
    {
        int curr = j-i+1;
        if(curr>largest)
            largest = curr
    }

    j++; // expand from right
}






























i = 0
j = 0
sum  = arr[0]
int largest = 0

if (sum  == k)
    largest = 1

while (i <= j)
{
    if(sum < k)
    {
        j++;
        sum = sum + arr[j];
    }
    else if(sum > k)
    {
        sum = sum - arr[i];
        i++;
    }
    else if(sum == k)
    {
        int curr = j - i + 1;
        if (curr > largest)
        {
            largest = curr;
        }
    }
}

return curr;