


largest = INT_MIN
second_largest = INT_MIN


Loop 0 to n-1    
    if a[i] > largest
        second_largest = largest
        largest = a[i]
    else if a[i] > second_largest && a[i] != largest
        second_largest = a[i]
    
return second_largest