#include <iostream>
using namespace std;

int main(){

    int i; /* it is loop control variable which takes constant space of 4 bytes */
    int n; /* it is input which also takes 4 bytes*/

    int* nums = new int[n]; /* this array will be of size n. So it depends on the input
    it allow us to index directly with input n.
    */

    cin >> n;

    for(i = 0; i <= n; i++){
        nums[i] = 0;
    }

    for(i = 0; i <= n; i = i + 2){
        nums[i] = 1;
    }

    if(nums[n]){
        cout << n << " is EVEN!";
    }

    else{
        cout << n << " is ODD!";
    }

    return 0;
}

/*

    In the above program the loop iterator i and input n are using constant space of 4 bytes. 
    But the array is allocated dynamically and depends on the input n. So space complexity of the program is O(n).

*/