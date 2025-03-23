Below are the categorized DSA problems on arrays along with suggested approaches to solve each of them:

### Easy

1. **Reverse Array**
   - **Approach**: Use two pointers, one starting from the beginning and the other from the end. Swap elements and move towards the center.

2. **Shift Negatives**
   - **Approach**: Use the two-pointer technique to rearrange the array in a single pass, moving negatives to the beginning.

3. **Segregate 0s and 1s**
   - **Approach**: Use a two-pointer technique, maintaining one pointer for placing 0s and another for traversing.

4. **Remove Duplicates**
   - **Approach**: Use a set to track seen elements or sort the array and remove duplicates while traversing.

5. **Move Zeros to End of The Array**
   - **Approach**: Use a two-pointer technique to retain the order of non-zero elements while filling tears of the array with zeros.

6. **Index of Smallest element of Array**
   - **Approach**: Traverse the array and keep track of the smallest element found along with its index.

7. **Find special index**
   - **Approach**: Traverse and compute the sum of elements on both sides for each index to find the balance point.

8. **Occurrence of one in sorted array**
   - **Approach**: Use binary search to find the first and last occurrence of 1.

9. **Largest and smallest number in an array**
   - **Approach**: Traverse the array once to maintain two variables for the minimum and the maximum.

### Medium

1. **Counting Inversions**
   - **Approach**: Use a modified merge sort algorithm that counts inversions while sorting the array.

2. **Dutch Flag Algorithm**
   - **Approach**: Use three pointers to partition the array into distinct segments based on given values.

3. **Left Rotation**
   - **Approach**: Use the slicing technique or rotate using additional space (temp array) or in place using reversal.

4. **Max Subarray Sum** (Kadane's Algorithm variant)
   - **Approach**: Use dynamic programming where you maintain a current max sum and update global max accordingly.

5. **Quick Selection**
   - **Approach**: Use the QuickSort partitioning logic to find the kth largest or smallest element without full sorting.

6. **Search insert position**
   - **Approach**: Use binary search to find the position at which an element should be inserted to maintain order.

7. **Matrix Multiplication**
   - **Approach**: Use a triple nested loop to compute the product of two matrices, ensuring to follow proper indexing.

8. **Leaders In The Array**
   - **Approach**: Traverse the array from the end to the beginning, keeping track of the maximum found so far.

9. **All unique triplet that sum up to given value**
   - **Approach**: Sort the array and use a two-pointer approach to find pairs that meet the required sum condition.

10. **Next permutation**
    - **Approach**: Find the rightmost ascent, swap and reverse the tail segment to get the next lexicographical permutation.

11. **All unique triplet that sum up to given value** (duplicate in list)
    - **Approach**: Same as above; ensure to avoid duplicates by skipping over value duplicates in array.

### Hard

1. **Fractional Knapsack**
   - **Approach**: Calculate the value-to-weight ratio, sort items, and use a greedy approach to fill the knapsack.

2. **Sparse Matrix**
   - **Approach**: Represent matrices using dictionaries or lists of lists to store only non-zero entries for efficient operations.

3. **Maximum Difference**
   - **Approach**: Use a single pass to maintain the minimum element seen so far, calculate differences as you go to find the maximum.

4. **Kadane's Algorithm**
   - **Approach**: Maintain a current maximum subarray sum and update it with maximum of current element alone or adding to the existing.

5. **Maximum Minimum Average of numbers**
   - **Approach**: Use a reduction approach, maintain running total and count for averages; handle elements in chunks for larger sets.

6. **Sorted-Rotated Search Array**
   - **Approach**: Modify binary search to first locate the pivot point then search in the appropriate half.

7. **Merge two sorted array without using extra space**
   - **Approach**: Use a two-pointer technique to compare and place elements from the two arrays, maintaining their sorted order.

8. **Balanced Parenthesis**
   - **Approach**: Use a stack to track open parentheses, check for matching closing parentheses.

9. **Smallest Sum Possible**
   - **Approach**: Sort the array and use combinations/subsets to calculate minimal possible sums, or apply a greedy approach if applicable.

10. **Smallest Possible Sum**
    - **Approach**: Similar to the above; may involve dynamic programming or greedy algorithms based on problem specifics.

11. **Elements appear thrice In The Array**
    - **Approach**: Use a counting approach or bit manipulation to identify elements that appear exactly thrice.

### Conclusion
Each approach outlines a potential method for solving the problem effectively. Practicing these techniques enhances understanding and provides readiness for similar challenges in programming interviews or competitive programming.