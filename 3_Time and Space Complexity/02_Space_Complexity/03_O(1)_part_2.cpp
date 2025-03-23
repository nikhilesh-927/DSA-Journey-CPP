#include <iostream>
using namespace std;

int main(){
    /* Constraints : 0 <= n <= 100 */

    int i; /* this is a loop control variable which takes constant space of 4 bytes. Space complexity is O(1) */
    int n; /* this is a variable to store the user input which also takes 4 bytes. Space complexity is O(1) */
    int nums[101]; /* this is an array which can contain at most 101 elements (which is constant). 
    The memory space used by the array is 101 * 4 = 404 bytes which does not depend on the input. Space complexity is O(1)
    */

    cin >> n;

    for(i = 0; i < 101; i++){
        nums[i] = 0;
    }

    for(i = 0; i < 101; i = i + 2){
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

    Since no auxiliary space is used and input space is constant, so the space complexity of this program is O(1). 

*/