
Given an array and a sum k, we need to print the length of the longest subarray that sums to k.

Example 2:
Input Format: N = 3, k = 1, array[] = {-1, 1, 1}
Result: 3
Explanation: The longest subarray with sum 1 is {-1, 1, 1}. And its length is 3.



    int longestSubarray(vector<int>& arr, int k) {
        // code here
        
        unordered_map<int, int> m;
        m[0] = -1;
        long int sum = 0;
        long int max = 0;
        
        for(int i=0; i< arr.size(); i++)
        {
            sum = sum + arr[i];
            
            if(m.find(sum) == m.end())
            {
                 m[sum] = i;
            }
               
            int ele = sum - k;
            
            if(m.find(sum-k) != m.end())
            {
                long int curr = i - m[sum-k];
                if(curr>max)
                {
                    max = curr;
                }
            }
        }
        
        return max;
    }



















