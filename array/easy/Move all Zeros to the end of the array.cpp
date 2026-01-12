

left = 0

for i from 0 to <n :
    if a[i] != 0
        if left != i
            arr[left++] = arr[i]
        else
            left++

for j from left to <n:
    arr[j] = 0