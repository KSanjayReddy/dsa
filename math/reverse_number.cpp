
/*
    number can be negative
    make sure result is within the limits, if not return 0
*/

    int reverse(int x) {
        int rev=0;
 
        while(x != 0) // for negative numbers too
        {
            int f = x%10;

            //positive overflow
            if(rev > INT_MAX/10 || (rev == INT_MAX/10 && f>7))
            {
                return 0;
            }
            //negative overflow
            else if(rev < INT_MIN/10 || (rev == INT_MIN/10 && f<-8))
            {
                return 0;
            }


            rev = rev*10 + f;
            x = x/10;
        }
        return rev;
    }