/*
    Description: This program reverses an array using two pointer technique. 
    Time Complexity: O(n) where n is the size of the array. 
    Auxiliary Space: O(1).

    Algo used to solve the challenge : Two-pointer Algorithm
*/

#include <bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &arr, int size){
    int left = 0;
    int right = size - 1;

    while(left < right){
        swap(arr[left], arr[right]);
        left++;
        right--;
    }

    cout << "Reversed array: ";

    for(const int &a : arr) cout << a << " ";

    cout << endl;

}

int main(){

    int size;
    cout << "Enter the size of array: " << endl;

    cin >> size;

    int item;
    vector<int> arr;

    while(size--){
        cin >> item;
        arr.push_back(item);
    }

    cout << "Original array: ";

    for(int &x : arr) cout << x << " ";

    cout << endl;

    reverseArray(arr, arr.size());

    return 0;
}

/*
    Two pointer technique : 
    Two pointer technique is a method used to solve DSA problems involving arrays and list problems efficiently. 

    Procedure: 

    1. Recongnize the problem - Check if the problem can be solved using two pointers. 
        Common Scenarios: Reversing arrays, searching for pairs, merging sorted arrays, etc.

    2. Define the two pointers:
        a. left pointer: typically points to the first element of the array.
        b. right pointer: typically points to the last element of the array.

        Note: Depending on the problem, the start and end positions of the two pointers might vary. 

    3. Establish a loop: 
        There is often a loop that continues until the two pointers cross each other.
        It can be a "while" loop or "for" loop depending on the logic. 

    4. Evaluate the condition: 
        Check the current values of the two pointers to determine if the loop should continue. 
        Determine a target condition like "left < right" or "left <= right".

    5. Move the pointers:
        Move the pointers in the direction that will satisfy the condition. 
        If the condition is "left < right", move left to the right and right to the left. 

    6. Perform the operations: 
        Perform any necessary operations on the elements at the current positions of the two pointers. 
        like swapping, adding, subtracting, etc. 
    
    7. End condition:
        The loop ends when the two pointers cross each other. 
        This is often represented by a condition like "left >= right" or "left > right".

*/
