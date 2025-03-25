/*

    Challenge : Move All Zeroes To End

    Problem Description: The task is to move all the zeros in the array to the right end 
    while maintaining the relative order of the non-zero elements.

    Time Complexity : O(n)
    Space Complexity : O(1)

    Algo Used : Two Pointer
*/

#include <bits/stdc++.h>
using namespace std;

void pushZeroesToEnd(vector<int> &arr){

    int n = arr.size();
    int i = 0, j = 0;

    while(i < n){
        if(arr[j] != 0){
            i++;
            j++;
        }

        else if(arr[i] > 0 && arr[j] == 0){
            swap(arr[i], arr[j]);
            i++;
            j++;
        }

        else{
            i++;
        }
    }

}

void printArray(vector<int> &arr){
    for(const int &x: arr) cout << x << " ";
    cout << endl;
}

int main(){

    int size;

    cout << "Enter size of the array: ";

    cin >> size;

    vector<int> arr;

    int item;

    while(size--){
        cin >> item;
        arr.push_back(item);
    }

    cout << "Original array: ";

    printArray(arr);

    pushZeroesToEnd(arr);

    cout << "After moving zeroes to the end: ";

    printArray(arr);

    return 0;
}

/*
    Logic Building:
    1 2 0 4 3 0 5 0
          j i
    swap j and i
    j++;
    i++;

    1 2 4 0 3 0 5 0
            j i  
    swap j and i
    j++;
    i++;

    1 2 4 3 0 0 5 0
            j i
    i++;

    1 2 4 3 0 0 5 0
            j   i
    swap j and i
    j++;
    i++;
        
    1 2 4 3 5 0 0 0
              j   i
    since i reached at the end loop stops


    rough code:
    initially i = 0; j = 0;

    if arr[i] > 0 && arr[j] > 0
    i++;
    j++;

    if arr[i] == 0 && arr[j] > 0
    i++;
    j++;

    if arr[i] > 0 && arr[j] == 0
    swap(arr[i], arr[j]);
    i++;
    j++;

    if arr[i] == 0 && arr[j] == 0
    i++;



    In above we can make an improvement:
    Instead of first and second if conditions we can write only if condition like this:
    if(arr[j] != 0)
    i++;
    j++;
*/