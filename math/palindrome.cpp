/*
check number is palindrome
norway is reverse and compare, but reverse might go out of range
so better is reverse half and compare with the remaining number
negative number are never palindrome
*/



bool isPalindrome(int x) {
        int rev_half = 0;

        if(x<0)
        {
            return false;
        }
        if(x%10 == 0 && x!=0)
        {
            return false;
        }
        
        while( x > rev_half)
        {
            rev_half = rev_half*10 + x%10;
            x = x/10;
        }

        if( rev_half == x || rev_half/10 == x)
            return true;
        else
            return false;
    }