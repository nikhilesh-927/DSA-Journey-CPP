/* 
    Problem: Find special index

    Problem Description : You are given an array of integers, and you need to determine
    the special indices in that array. A special index is defined as an index i that, 
    when the element at that index is removed, the sum of the elements at the remaining 
    even indices equals the sum of the elements at the remaining odd indices.

    Time-Complexity : O(n^2)
    Space-Complexity : O(1)
    
    Algo Used : Brute-Force Algo

 */

#include <bits/stdc++.h>
using namespace std;

void findSpecialIndex(vector<int> &arr){
    int n = arr.size();

    int count = 0, s_even, s_odd;

    for(int i = 0; i < n; i++){
        s_even = 0;
        s_odd = 0;
        for(int j = 0; j < i; j++){
            if(j % 2 == 0){
                s_even += arr[j];
            }
            else{
                s_odd += arr[j];
            }
        }

        for(int j = i + 1; j < n; j++){
            //the index which is even will be treated as odd when the element before is removed
            //like 4 3 2 7 6 -2 --> indexes --> 0 1 2 3 4 5
            //after removal of 4 from array:

            //3 2 7 6 -2 --> indexes --> 0 1 2 3 4
            //3 --> index before removal = 1, after removal = 0

            //so we should check if (j - 1) % 2 == 0 for finding even index after removal

            if((j - 1) % 2 == 0){
                s_even += arr[j];
            }
            else{
                s_odd += arr[j];
            }
        }

        if(s_even == s_odd){
            count++;
            cout << "Special index found at index : " << i << endl;
        }
    }
    cout << "Total " << count << " special indexes found" << endl;
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

    cout << "Original array : ";

    printArray(arr);

    cout << "Below are the details about special indexes: " << endl;

    findSpecialIndex(arr);

    return 0;
}