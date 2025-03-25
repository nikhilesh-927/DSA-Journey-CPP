/*
    Challenge : Remove duplicates in array
    Challenge Description : Given an array arr consisting of positive integer numbers, remove all duplicate numbers.

    Time Complexity : O(n)
    Space Complexity : O(n)

    Algo used : Hashing-Based Algo

*/

#include <bits/stdc++.h>
using namespace std;

void removeDuplicates(vector<int> &arr){
    unordered_set<int> uniqueElements;
    vector<int> res;

    for(const int &x : arr){
        if(uniqueElements.find(x) == uniqueElements.end()){
            uniqueElements.insert(x);
            res.push_back(x);
        }
    }

    arr = res;
}

void printArray(vector<int> &arr){
    for(const int &x: arr){
        cout << x << " ";
    }
    cout << endl;
}

int main(){

    int size;

    cout << "Enter the size of the array : ";

    cin >> size;

    int item;

    vector<int> arr;
    
    while(size--){
        cin >> item;
        arr.push_back(item);
    }

    cout << "Original array: ";

    printArray(arr);

    removeDuplicates(arr);

    cout << "Array after removing duplicates: ";

    printArray(arr);

    return 0;
}
