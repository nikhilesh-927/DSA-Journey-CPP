/*
    Challenge : First and Second Smallests

    Challenge Description : Given an array, arr of integers, your task is to return
    the smallest and second smallest element in the array.
    If the smallest and second smallest do not exist, return -1.

    Time Complexity : O(n)
    Space Complexity : O(1)

    Algo used to solve : Single-Pass Algorithm

*/

#include <bits/stdc++.h>
using namespace std;

vector<int> returnFirstSecondSmallest(vector<int> &arr){
    int firstSmallest = INT_MAX;
    int secondSmallest = INT_MAX;

    for(const int &x : arr){
        if(x < firstSmallest){
            secondSmallest = firstSmallest;
            firstSmallest = x;
        }
        else if(x > firstSmallest && x < secondSmallest){
            secondSmallest = x;
        }
    }

    if(secondSmallest == INT_MAX){
        return {-1};
    }
    else{
        return {firstSmallest, secondSmallest};
    }
}

void printArray(vector<int> &arr){
    for(const int &x : arr) cout << x << " ";
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

    cout << "Original Array: ";

    printArray(arr);

    vector<int> ans = returnFirstSecondSmallest(arr);

    cout << "The first two smallest elements are: ";

    printArray(ans);

    return 0;
}