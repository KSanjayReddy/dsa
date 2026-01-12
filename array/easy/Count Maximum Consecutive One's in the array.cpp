
Given an array that contains only 1 and 0 return the count of maximum consecutive ones in the array..

Example 1:
Input: arr = {1, 1, 0, 1, 1, 1}
Output: 3
Explanation: There are two consecutive 1’s and three consecutive 1’s in the array out of which maximum is 3.




count = 0
largest = 0;

for each ele in arr :
    if ele == 1
        count ++
        if count > largest
            largest = count
    else
        count = 0

return largest