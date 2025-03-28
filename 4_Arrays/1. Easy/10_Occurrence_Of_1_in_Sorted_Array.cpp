/* 
    Problem : Occurrence of first 1 in sorted array

    Problem Description : Given a sorted array arr consisting of 0s and 1s. 
    The task is to find the index (0-based indexing) of the first 1 in the given array.

    NOTE: If one is not present then, return -1.

    Time-Complexity : O(log n)
    Space-Complexity : O(1)

    Algo-Used : Binary Search
 */


#include <bits/stdc++.h>
using namespace std;

int findFirstOne(vector<int> &arr){
    int n = arr.size();

    int low = 0;
    int high = n - 1;

    while(low <= high){
        int mid = low + (high - low)/2;
        if(arr[mid] == 1 && arr[mid - 1] == 0){
            return mid;
        }
        else if(arr[mid] != 1){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    return -1;
}

void printArray(vector<int> &arr){
    for(const int &x: arr) cout << x << " ";
    cout << endl;
}

int main(){

    int size;

    cout << "Enter the size of the array: ";

    cin >> size;

    int item;

    vector<int> arr;

    while(size--){
        cin >> item;
        arr.push_back(item);
    }

    cout << "Original Array is : ";

    printArray(arr);

    cout << "Occurrence of first 1 in the given sorted array is at index: ";

    int ans = findFirstOne(arr);

    cout << ans << endl;

    return 0;
}