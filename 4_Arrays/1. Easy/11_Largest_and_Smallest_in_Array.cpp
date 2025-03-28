/* 
    Problem : Find the largest and smallest number in the array

    Problem Description : Given an array, we need to find the largest and smallest element in the array

    Time-Complexity : O(n)

    Space-Complexity : O(1)

    Algo-Used = Two-pass linear search
 */

#include <bits/stdc++.h>
using namespace std;

vector<int> largestAndSmallest(vector<int> &arr){
    int largest = INT_MIN;
    int smallest = INT_MAX;

    for(const int &x : arr){
        if(x > largest){
            largest = x;
        }
    }

    for(const int &x : arr){
        if(x < smallest){
            smallest = x;
        }
    }

    if(largest == INT_MIN) largest = -1;
    if(smallest == INT_MAX) smallest = -1;

    return {largest, smallest};
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

    cout << "Original array : ";

    printArray(arr);

    vector<int> ans = largestAndSmallest(arr);

    cout << "Largest and Smallest Elements are : ";

    for(const int &x : ans) cout << x << " ";

    cout << endl;

    return 0;
}