/*

    Challenge : Move all negatives to the end

    Challenge Description : The task is to place all negative elements at the end of the array
    without changing the order of positive elements and negative elements.

    Time Complexity : O(n)
    Space Complexity : O(n)

    Algo used : Two Pass Algorithm

*/


#include <bits/stdc++.h>
using namespace std;

void segregateElements(vector<int> &arr){
    int povit = 0;

    vector<int> res;

    for(const int &x : arr){
        if(x >= 0){
            res.push_back(x);
        }
    }

    for(const int & y : arr){
        if(y < 0){
            res.push_back(y);
        }
    }

    arr = res;
}

void printArray(vector<int> &arr){
    for(const int &x : arr) cout << x << " ";
    cout << endl;
}

int main(){

    int size;

    cout << "Enter the size of the array: ";

    cin >> size;

    vector<int> arr;

    int item;

    while(size--){
        cin >> item;

        arr.push_back(item);

    }

    cout << "Original Array: ";

    printArray(arr);

    segregateElements(arr);

    cout << "Move negative elements to end: ";

    printArray(arr);

    return 0;
}