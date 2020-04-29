# Brute Force Approach
Before solving this problem using Brute Force approach, the **array should be sorted in increasing order**.

The algorithm:
```cpp
for(int i=0; i<n-1; i++)
    for(int j=i+1; j<n; j++)
        if(arr[i] + arr[j] == look)
            return true

return false
```
Time complexity: 
* $O(n^2)$  

Space complexity: 
* Depending on the sorting algorithms

# Hashing Approach

The algorithm:
```cpp
unordered_set<int> visited_numbers;
int temp;
for(int i=0; i<arr_size; i++) {
    diff = sum - arr[i];

    if(visited_numbers.find(diff) != visited_numbers.end()) return true;

    visited_numbers.insert(arr[i]);
}
```
Time complexity: 
* $O(n)$
* The array is only traversed once  
  
Space complexity: 
* $O(n)$
* Only a hash map used