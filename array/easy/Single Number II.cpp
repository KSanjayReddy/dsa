Given an integer array nums where every element appears three times except for one, which appears exactly once. 
ind the single element and return it.



Since every number (except one) appears three times, 
what happens if we look at a single bit position (for example, the $0^{th}$ bit) across all numbers?
The "Multiple of 3"  
the array is {2, 2, 3, 2}. 
Let's look at their binary forms:

10
10
11
10

If the unique number didn't exist, 
the count of 1s at every single bit position would be exactly $3, 6, 9...$ (a multiple of 3)