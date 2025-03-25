Let's explain hashing-based algorithms using the example of removing duplicates from an array with a step-by-step visualization. We'll use the algorithm you provided, which utilizes an `unordered_set`, and visualize how elements are processed.

### Example: Removing Duplicates from an Array

**Input Array:** 
```plaintext
arr = [4, 5, 6, 4, 7, 5, 8]
```

**Goal:** Remove duplicates while maintaining the order of the first occurrences.

### Step-by-Step Explanation

1. **Initialization:**
   - Create an empty `unordered_set` to keep track of unique elements.
   - Create an empty vector `res` to store the result.

   ```plaintext
   uniqueElements = {}
   res = []
   ```

2. **First Iteration (Element: 4)**
   - Check if `4` is in `uniqueElements` (it’s not).
   - Insert `4` into the set and append it to `res`.

   ```plaintext
   uniqueElements = {4}
   res = [4]
   ```

3. **Second Iteration (Element: 5)**
   - Check if `5` is in `uniqueElements` (it’s not).
   - Insert `5` into the set and append it to `res`.

   ```plaintext
   uniqueElements = {4, 5}
   res = [4, 5]
   ```

4. **Third Iteration (Element: 6)**
   - Check if `6` is in `uniqueElements` (it’s not).
   - Insert `6` into the set and append it to `res`.

   ```plaintext
   uniqueElements = {4, 5, 6}
   res = [4, 5, 6]
   ```

5. **Fourth Iteration (Element: 4)**
   - Check if `4` is in `uniqueElements` (it is).
   - Since it's a duplicate, skip this element. `res` remains unchanged.

   ```plaintext
   uniqueElements = {4, 5, 6}
   res = [4, 5, 6]
   ```

6. **Fifth Iteration (Element: 7)**
   - Check if `7` is in `uniqueElements` (it’s not).
   - Insert `7` into the set and append it to `res`.

   ```plaintext
   uniqueElements = {4, 5, 6, 7}
   res = [4, 5, 6, 7]
   ```

7. **Sixth Iteration (Element: 5)**
   - Check if `5` is in `uniqueElements` (it is).
   - Skip this element. `res` remains unchanged.

   ```plaintext
   uniqueElements = {4, 5, 6, 7}
   res = [4, 5, 6, 7]
   ```

8. **Seventh Iteration (Element: 8)**
   - Check if `8` is in `uniqueElements` (it’s not).
   - Insert `8` into the set and append it to `res`.

   ```plaintext
   uniqueElements = {4, 5, 6, 7, 8}
   res = [4, 5, 6, 7, 8]
   ```

### Final Result

At the end of the iterations, the contents of `res` contain only the unique elements, preserving their first occurrence in the original array.

**Output Array:**
```plaintext
arr = [4, 5, 6, 7, 8]
```

### Visualization Summary of Each Step

You can visualize the process with a table of iterations:

| **Iteration** | **Element** | **Found in Set?** | **Unique Elements Set** | **Result Vector**  |
|---------------|-------------|--------------------|-------------------------|---------------------|
| 1             | 4           | No                 | {4}                     | [4]                 |
| 2             | 5           | No                 | {4, 5}                  | [4, 5]              |
| 3             | 6           | No                 | {4, 5, 6}               | [4, 5, 6]           |
| 4             | 4           | Yes                | {4, 5, 6}               | [4, 5, 6]           |
| 5             | 7           | No                 | {4, 5, 6, 7}            | [4, 5, 6, 7]        |
| 6             | 5           | Yes                | {4, 5, 6, 7}            | [4, 5, 6, 7]        |
| 7             | 8           | No                 | {4, 5, 6, 7, 8}         | [4, 5, 6, 7, 8]     |

### Conclusion

This example clearly demonstrates how hashing can be effectively used to manage and track unique elements while processing a list. The use of an `unordered_set` allows for efficient checking and insertion, which makes the approach suitable for problems involving duplicate removal or uniqueness checks.