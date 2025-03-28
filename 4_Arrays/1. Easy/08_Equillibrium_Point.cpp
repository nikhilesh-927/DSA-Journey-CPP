#include <bits/stdc++.h>
using namespace std;

int equillibriumPoint(vector<int> &arr){

    int n = arr.size();
    int total_sum = 0, left_sum = 0;

    for(int i = 0; i < n; i++){
        total_sum += arr[i];
    }

    for(int i = 0; i < n; i++){
        if(total_sum - arr[i] - left_sum == left_sum){
            return i;
        }
        left_sum += arr[i];
    }

    return -1;
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

    cout << "Equillibrium index: ";

    int ans = equillibriumPoint(arr);

    cout << ans << endl;

    return 0;
}