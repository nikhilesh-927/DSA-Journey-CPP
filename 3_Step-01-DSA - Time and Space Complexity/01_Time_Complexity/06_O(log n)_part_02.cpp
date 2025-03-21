#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);        /* this size of the array is the key. It will be our n - input size */

    /* We calculate the time complexity based on the input size - n */

    int target = 6;

    int left = 0;
    int right = size - 1;

    // Binary search
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) { 
            cout << "Found at index: " << mid;
            return 0;
        }
        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }


    /* 
        We will look for the worst case and that will be ----> element is not even present in the array.
        
        As of now we have an array with input size n = 10.
        So, in worst case the no. of operations (loop executions) will be 10/2 --> 5/2 --> 2/2 --> 1 --> the loop execution is stopped 
        when the search size becomes 1 and no operations are performed, so total 4 loop executions.

        When we have an array with input size = 20. 
        So, in worst case the no. of operations (loop executions) will be 20/2 --> 10/2 --> 5/2 --> 2/2 --> 1 --> total 5 loop executions
    */


    cout << "Not found"; // Element not found
    return 0;
}


/*

    In this program the loop executions depends on the size of input.

    For n = 10 (size of array) the total no. of loop executions = 4 which is nearly equal to log2(10) = 3.32 which means the loop will execute 4 times
    For n = 20 (size of array) the total no. of loop executions = 5 which is nearly equal to log2(20) = 4.32 which means the loop will execute 5 times
    For n = 100 (size of array) the total no. of loop executions = 7 which is nearly equal to log2(100) = 6.64 which means the loop will execute 7 times

    Hence we can say the no. of operations are proportional to the logarithm of input size. 

    So, the time complexity of this program will be O(log2(n))

    Time complexity of a program will always be Big-O(log2(n)) or O(log2(n)) or Order(log2(n))
    when the no. of operations (loop executions) is proportional to the logarithm of input size. 

*/