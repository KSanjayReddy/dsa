/*
Find the HCF of two number

1. normal brute force
2. eucledian
*/




int findGcd(int a, int b) {
    // Continue loop as long as both
    // a and b are greater than 0
    while(a > 0 && b > 0) {
        // If a is greater than b,
        // subtract b from a and update a
        if(a > b) {
             // Update a to the remainder
             // of a divided by b
            a = a % b;
        }
        // If b is greater than or equal
        // to a, subtract a from b and update b
        else {
            // Update b to the remainder
            // of b divided by a
            b = b % a; 
        }
    }