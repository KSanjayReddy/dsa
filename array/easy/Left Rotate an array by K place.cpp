
Left rotate arr by k places

k = k % n    // Corrected from & to %
if (k == 0) return arr

// 1. Copy first k elements to temp
tmp = new Array(k)
for l from 0 to <k: 
    tmp[l] = arr[l]  // Corrected index to 'l'

// 2. Shift the remaining elements to the left
for i from 0 to <n-k:
    arr[i] = arr[i+k]

// 3. Move temp elements to the end
int j = n-k
int q = 0
while(j < n):
    arr[j++] = tmp[q++]


-------------------------------------------------------------
For above time complexity is O(N) but needs additional O(k) space

For O(1) space, best is to use triple reverse method for any shifting questions

--------------------------------------------------------


    void reverseArr(vector<int> &arr, int start, int end)
    {
        while(start <= end)
        {
            int tmp = arr[start];
            arr[start] = arr[end];
            arr[end] = tmp;
            
            start ++;
            end--;
        }
    }

    void rotateArr(vector<int>& arr, int d) {
        
        // code here
        int n = arr.size();
        d = d%n;
        
        reverseArr(arr, 0, d-1);
        reverseArr(arr, d, n-1);
        reverseArr(arr, 0, n-1);
        
    }






















