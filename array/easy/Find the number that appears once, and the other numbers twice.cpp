
Given a non-empty array of integers arr, every element appears twice except for one. Find that single one.

Example 2:
Input Format: arr[] = {4,1,2,1,2}
Result: 4
Explanation: In this array, only element 4 appear once and the other elements appear twice. So, 4 is the answer.



    int singleNumber(vector<int>& nums) {
        
        int res=0;
        for(int ele: nums)
        {
            res = res ^ ele;
        }
        return res;
    }