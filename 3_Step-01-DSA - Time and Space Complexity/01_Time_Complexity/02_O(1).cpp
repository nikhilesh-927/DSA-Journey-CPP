#include <iostream>
using namespace std;

int main(){

    int m, n, result;

    m = 5;  /* first assignment operation */
    n = 10; /* second assignment operation */

    result = m + n; /* third assignment operation and a mathematical operation which is sum of (m + n)*/

    cout << result;

    return 0;
}

/*
    In the above program total no. of operations = 4, and it will always be 4. 
    Because here no. of operations are not dependent on the input.

    Input is constant. So time complexity of this program is O(1) --> constant. 

    Time complexity of a program will always be Big-O(1), or O(1) or Order(1), when the number of operations are not 
    dependent on the input of the program.
*/