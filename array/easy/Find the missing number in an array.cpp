
Find the missing number in an array

Example 1:
Input Format: N = 5, array[] = {1,2,4,5}
Result: 3
Explanation: In the given array, number 3 is missing. So, 3 is the answer.



ideal_sum = (N * (N+1))/2

sum = 0
for i : arr 
    sum = sum + i

missing  = ideal_sum - sum

The sum method will work but value of sum can go out of range so XOR is better
---------------------------------------------

XOR method

Intuition
Two important properties of XOR are the following:
XOR of two same numbers is always 0 i.e. a ^ a = 0. ←Property 1.
XOR of a number with 0 will result in the number itself i.e. 0 ^ a = a. ←Property 2


XOR the ideal sequence
XOR the actual sequence 

XOR of idead and actual is the result