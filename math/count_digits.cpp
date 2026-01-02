/*

Given an integer N, return the number of digits in N.

*/


    int countDigits(int n) {
        // code here
        int count = 0;
        
        while(n>0)
        {
            n = n/10;
            count++;
        }
        return count;
    }

    //Efficient O(1)
    int countDigits(int n) {
        // code here
        
        int count = int(log10(n)) + 1;
        
        return count;
    }

