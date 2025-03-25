/*

    Problem : Segregate 0s and 1s

    Problem Description : Modify the array in-place to 
    segregate 0s onto the left side and 1s onto the right side of the array.

    Time Complexity : O(n)

    Spce Complexity : O(1)

*/


#include <bits/stdc++.h>
using namespace std;

void segregate0s1s(vector<int> &arr){
    int n = arr.size();

    int i = 0, j = 0;

    while(i < n){
        if(arr[i] == 0 && arr[j] != 0){
            swap(arr[i], arr[j]);
            i++;
            j++;
        }
        else if(arr[j] != 0){
            i++;
        }
        else{
            i++;
            j++;
        }
    }
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

    segregate0s1s(arr);

    cout << "Array with segregated 0s and 1s";

    printArray(arr);

    return 0;
}


/*

    Logic:

    1 1 0 1 0 1 0
    j i
    i++;

    1 1 0 1 0 1 0
    j   i
    swap(arr[i], arr[j]);
    i++;
    j++;

    0 1 1 1 0 1 0
      j   i
    i++;

    0 1 1 1 0 1 0
      j     i
    swap(arr[i], arr[j]);
    j++;
    i++;

    0 0 1 1 1 1 0
        j     i
    i++;

    0 0 1 1 1 1 0
        j       i
    swap(arr[i], arr[j])
    i++;
    j++;

    0 0 0 1 1 1 1
          j        i

    since i > array size loop stops


*/