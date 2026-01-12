Union of two sorted arrays

Input:n = 10,m = 7,arr1[] = {1,2,3,4,5,6,7,8,9,10}arr2[] = {2,3,4,4,5,11,12}
Output: {1,2,3,4,5,6,7,8,9,10,11,12}


ri = 0, j = 0
res = []

while (i < n && j < m)
    // If arr1 has the smaller or equal element
    if (arr1[i] <= arr2[j])
        if (res.empty() || res.back() != arr1[i])
            res.push_back(arr1[i])
        i++
    // If arr2 has the strictly smaller element
    else
        if (res.empty() || res.back() != arr2[j])
            res.push_back(arr2[j])
        j++

// Add remaining elements from arr1
while (i < n)
    if (res.back() != arr1[i])
        res.push_back(arr1[i])
    i++

// Add remaining elements from arr2
while (j < m)
    if (res.back() != arr2[j])
        res.push_back(arr2[j])
    j++