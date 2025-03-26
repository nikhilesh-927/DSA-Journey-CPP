## Equillibrium Point Solution :     
```
int findEquilibrium(vector<int> &arr) {
        // code here
    int n = arr.size();
    int total_sum = 0, left_sum = 0;
    for(int i = 0; i < n; i++){
        total_sum += arr[i];
    }
    for(int i = 0; i < n; i++){
        if(total_sum - left_sum - arr[i] == left_sum){
            return i;
        }
        left_sum += arr[i];
    }
    return -1;
}

```


The provided function `findEquilibrium` finds the equilibrium index of an array. An equilibrium index is defined as an index `i` such that the sum of the elements to the left of `i` equals the sum of the elements to the right of `i`. 

### Function Breakdown

1. **Initialization**: 
   - Calculate the total sum of the array. 
   - Initialize `left_sum` to 0.

2. **Finding Equilibrium**:
   - Iterate through the array.
   - For each index `i`, check if the sum of the elements on the right (`total_sum - left_sum - arr[i]`) equals the `left_sum`.
   - If they are equal, return the index `i`.
   - If not, update the `left_sum` to include the current element `arr[i]`.

3. **Return -1** if no equilibrium index is found.

### Example Walkthrough

Let's illustrate the function with an example:

**Input Array:**  
\[1, 3, 5, 2, 2\]

#### Step 1: Calculate the Total Sum

- Initialize `total_sum = 0`.
- Iterate through the array to compute the total sum.

```
Iteration 1: total_sum = 1
Iteration 2: total_sum = 4 (1 + 3)
Iteration 3: total_sum = 9 (1 + 3 + 5)
Iteration 4: total_sum = 11 (1 + 3 + 5 + 2)
Iteration 5: total_sum = 13 (1 + 3 + 5 + 2 + 2)
```
- Final `total_sum = 13`.

#### Step 2: Find Equilibrium Index

Now we need to find the index such that the left sum equals the right sum.

- Initialize `left_sum = 0`.

**Iterate through the array:**

```
i = 0
  left_sum = 0
  right_sum = total_sum - left_sum - arr[i] = 13 - 0 - 1 = 12
  left_sum (0) != right_sum (12) → Not an equilibrium index

Update left_sum: left_sum = left_sum + arr[i] = 0 + 1 = 1

i = 1
  left_sum = 1
  right_sum = total_sum - left_sum - arr[i] = 13 - 1 - 3 = 9
  left_sum (1) != right_sum (9) → Not an equilibrium index

Update left_sum: left_sum = left_sum + arr[i] = 1 + 3 = 4

i = 2
  left_sum = 4
  right_sum = total_sum - left_sum - arr[i] = 13 - 4 - 5 = 4
  left_sum (4) == right_sum (4) → Equilibrium found at index 2!

Return index 2.
```

### Conclusion

The equilibrium index found is `2`. This means that at this index, the sum of elements to the left \(1 + 3 = 4\) equals the sum of elements on the right \(2 + 2 = 4\).

### Final Visualization of Steps

1. **Total Sum Calculation**:

   | Index (i) | arr[i] | Running Total |
   |-----------|--------|---------------|
   | 0         | 1      | 1             |
   | 1         | 3      | 4             |
   | 2         | 5      | 9             |
   | 3         | 2      | 11            |
   | 4         | 2      | 13            |

   - Total Sum = 13

2. **Equilibrium Check**:

   | Index (i) | left_sum | arr[i] | right_sum | Equilibrium Found |
   |-----------|----------|--------|-----------|-------------------|
   | 0         | 0        | 1      | 12        | No                |
   | 1         | 1        | 3      | 9         | No                |
   | 2         | 4        | 5      | 4         | Yes               |
   | 3         | 9        | 2      | 2         | No                |
   | 4         | 11       | 2      | 0         | No                |

### Summary

The function efficiently calculates the equilibrium index in linear time \(O(n)\) with a constant space \(O(1)\) (besides the input array) using the concept of prefix sums. This algorithm is highly efficient compared to a naive approach that would require \(O(n^2)\) time.