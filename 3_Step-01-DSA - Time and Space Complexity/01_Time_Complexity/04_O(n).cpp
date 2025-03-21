#include <iostream>
using namespace std;

int main(){

    int n, result;

    cin >> n;

    for(int i = 0; i < n; i++){
        result = result + i; /* here no. of operations are dependent on the input, if the input is 5 the loop will execute 5 times*/
        /* two operations addition (+) and assignment (=) occur every time loop executes*/
    }
 
    cout << result; /* this is not a complexity as it will execute once */

    return 0;
}

/*

    In this program total operation number is dependent on the input (which is n).
    If the input is 5 the loop will execute 5 times and since 2 operations are happening every loop execution 
    means 5 * 2 = 10 operations for input 5. 

    If input is 10 the no. of operations = 10 * 2 = 20.

    Input is not constant i.e. variable and the no. of operations are dependent on the input.
    So, the time complexity of the program will be Big-O(n) or O(n) or Order(n) or linear.

    Time complexity of the program will always be Big-O(n) or O(n) or Order(n) or linear,
    when the number of operations are dependent on the input of the program.

*/