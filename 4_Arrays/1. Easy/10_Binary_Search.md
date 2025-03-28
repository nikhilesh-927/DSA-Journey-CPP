Let's go through the binary search algorithm step by step using an example.

### What is Binary Search?

Binary search is an efficient algorithm for finding a target value in a **sorted** array. It works by repeatedly dividing the search interval in half. If the target value is less than the item in the midpoint of the interval, the search continues in the lower half; otherwise, it continues in the upper half.

### Steps of Binary Search:

1. **Initialize Pointers**: Start with two pointers, typically called `low` and `high`, which represent the indexes of the array.
2. **Calculate Midpoint**: Calculate the middle index.
3. **Compare**: Check if the middle element is equal to the target:
   - If it is, you've found the target.
   - If the target is less than the middle element, adjust the `high` pointer to `mid - 1` (search in the left half).
   - If the target is greater than the middle element, adjust the `low` pointer to `mid + 1` (search in the right half).
4. **Repeat**: Repeat the process until the target is found or the search space is exhausted (`low` exceeds `high`).

### Example:

Let's use the sorted array:

```
arr = [2, 5, 8, 12, 16, 20, 25, 30, 35, 40]
```

Now, let's assume we want to find the target value `16`.

#### Step-by-Step Procedure

1. **Initial Setup**:
   - `low = 0` (pointing to 2)
   - `high = 9` (pointing to 40)

2. **First Iteration**:
   - **Calculate Midpoint**: 
     \[
     mid = \text{low} + \frac{\text{high} - \text{low}}{2} = 0 + \frac{9 - 0}{2} = 4
     \]
   - **Check Middle Element**:
     \[
     arr[4] = 16
     \]
   - Since `arr[4]` is equal to the target `16`, we have found our target at index `4`.
   - **Output**: "Target found at index 4"

#### If the Target was Not Found

Let’s say we want to find the target value `10`, which is not in the array.

1. **Initial Setup**:
   - `low = 0`
   - `high = 9`

2. **First Iteration**:
   - **Calculate Midpoint**: 
     \[
     mid = 0 + \frac{9 - 0}{2} = 4
     \]
   - **Check Middle Element**:
     \[
     arr[4] = 16
     \]
   - Since `10 < 16`, we adjust `high`:
   - `high = mid - 1 = 4 - 1 = 3`

3. **Second Iteration**:
   - **New Setup**: 
     - `low = 0`, `high = 3`
   - **Calculate Midpoint**:
     \[
     mid = 0 + \frac{3 - 0}{2} = 1
     \]
   - **Check Middle Element**:
     \[
     arr[1] = 5
     \]
   - Since `10 > 5`, we adjust `low`:
   - `low = mid + 1 = 1 + 1 = 2`

4. **Third Iteration**:
   - **New Setup**: 
     - `low = 2`, `high = 3`
   - **Calculate Midpoint**:
     \[
     mid = 2 + \frac{3 - 2}{2} = 2
     \]
   - **Check Middle Element**:
     \[
     arr[2] = 8
     \]
   - Since `10 > 8`, we adjust `low`:
   - `low = mid + 1 = 2 + 1 = 3`

5. **Fourth Iteration**:
   - **New Setup**: 
     - `low = 3`, `high = 3`
   - **Calculate Midpoint**:
     \[
     mid = 3 + \frac{3 - 3}{2} = 3
     \]
   - **Check Middle Element**:
     \[
     arr[3] = 12
     \]
   - Since `10 < 12`, we adjust `high`:
   - `high = mid - 1 = 3 - 1 = 2`

#### Final Check

Now, `low (3)` has exceeded `high (2)`. This means that the target value `10` is not present in the array. 

### Conclusion

In summary:
- **Time Complexity**: \( O(\log n) \), where \( n \) is the number of elements in the array.
- **Space Complexity**: \( O(1) \) for the iterative version (constant space).

Binary search is efficient for sorted arrays and is a fundamental algorithm in computer science used in various applications, such as searching, sorting, and data manipulation.

## Why mid is initialized as mid = left + (right - left)/2

In binary search, the way we calculate the midpoint is crucial for correctly dividing the search space while avoiding potential issues, especially with large values. Let's analyze both approaches you mentioned and see why the recommended method is used.

### The Two Approaches:

1. **Common Method**:
   \[
   \text{mid} = \text{left} + \frac{\text{right}}{2}
   \]
   
2. **Preferred Method**:
   \[
   \text{mid} = \text{left} + \frac{\text{right} - \text{left}}{2}
   \]

### Why Not Use `left + right/2`?

The statement `left + right/2` miscalculates the midpoint because it does not properly account for the position of `left` within the array. Here's a breakdown of why it can lead to problems:

1. **Misinterpretation of Indices**: Using `left + right / 2` performs integer division on `right` without considering the `left` offset. This may yield incorrect results, especially in contexts where `left` is significantly far from `0`:

   - For example, if `left = 4` and `right = 10`, `mid` would be calculated as:
     \[
     \text{mid} = 4 + \left(\frac{10}{2}\right) = 4 + 5 = 9
     \]
     But the correct midpoint should rather be:
     \[
     \text{mid} = \frac{4 + 10}{2} = 7
     \]

2. **Integer Overflow Risk**: The expression `left + right` can lead to integer overflow if both `left` and `right` are large integers. This is especially a concern in languages with fixed-sized integer types, such as C++ or Java, where exceeding the maximum integer value can lead to wrapping around to negative values, thus corrupting calculations.

   - For example, if `left` = 2,000,000,000 and `right` = 2,000,000,000, this would yield:
     \[
     \text{mid} = 2,000,000,000 + 2,000,000,000 = 4,000,000,000 \\
     \text{(which is out of the bounds of a signed 32-bit integer)}
     \]

3. **Correctness and Clarity**: The preferred method, `left + (right - left) / 2`, directly computes the distance from `left` to `right`. This way, it avoids both overflow and boundary issues while ensuring that it always computes the index that correctly separates the search space.

### Conclusion:
Using `mid = left + (right - left) / 2` is the preferred approach in binary search for correctly calculating the midpoint while preventing integer overflow and maintaining clarity in how indices are managed. It guarantees that you're always correctly calculating the midpoint of the current search range without unexpected errors.