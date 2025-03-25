/*
    
    Challenge : Move all negatives to the left and Positives to the right

    Challenge Description: Move all negative elements to the left and positives to the right irrespective of there order

    Time Complexities : Approach 01 - Partition Algo - O(n) , Approach 02 - Two Pointer - O(n)

    Space Complexities : Approach 01 - Partition Algo - O(1) , Approach 02 - Two Pointer - O(1)

    Algo Used : Two algos - Partition and Two Pointer

*/

#include <bits/stdc++.h>
using namespace std;

/* Approach 01 --> Partition algo --> O(n) */

void shiftNegatives_A(vector<int> &arr){
    int n = arr.size();

    int j = -1, pivot = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] < pivot){
            j++;
            swap(arr[i], arr[j]);
        }
    }

}

/* Approach 02 --> Two pointer technique --> O(n) */

void shiftNegatives_B(vector<int> &arr){

    int left = 0, right = arr.size() - 1;

    while(left < right){
        if(arr[left] < 0 && arr[right] < 0){
            left++;
        }
        else if(arr[left] > 0 && arr[right] > 0){
            right--;
        }
        else if(arr[left] > 0 && arr[right] < 0){
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
        else{
            left++;
            right--;
        }
    }
}

void printArray(vector<int> &arr){
    for(const int &x: arr) cout << x << " ";
    cout << endl;
}

int main(){

    int size;

    cout << "Enter size of the array: " << endl;

    cin >> size;
    
    vector<int> arr;

    int item;

    while(size--){

        cin >> item;
        arr.push_back(item);

    }

    cout << "Original array: ";

    printArray(arr);

    // shiftNegatives_A(arr);

    shiftNegatives_B(arr);

    cout << "After shifting negatives to the left: ";

    printArray(arr);

    return 0;
}