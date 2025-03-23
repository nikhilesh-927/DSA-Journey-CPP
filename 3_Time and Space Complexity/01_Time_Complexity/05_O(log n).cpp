#include <iostream>
using namespace std;

int main(){

    int n, count = 0;

    cin >> n; /* n is our input, which can vary */

    //Count digits

    while(n > 0){
        n = n / 10;         /* two operations are occuring here, division (/) and assignment (=) */
        count = count + 1; /* two operations here also, addition (+) and assignment (=) */
    }

    /* if the input is let say 5 the loop will execute 1 time and the no. of operations = 4 */
    /* and if the input is 10 the loop will execute 2 times and the no. of operations = 8 */
    /* again if the input is 12345 the loop will execute 5 times and the no. of operations = 20 */

    /* Very Important Note ---->  the no. of operations are dependent on the loop execution, and the loop is dependent on the input
     so if loop is anyhow proportional to the input, no. of operations should also be proportional to the input*/


    cout << count; /* this is not the time complexity, it will execute once */

    return 0;
}

/*

    In this program no. of operations are dependent of the loop execution and 
    also the loop is dependent on the input (but not linearly, means not O(n)). 

    For input n = 1, max loop iterations = 1 which is approximately equals to log10(1) + 1 = 1       // as log10(1) = 0, if we add 1 in it, it will become 1 = no. of loop executions
    For input n = 100, max loop iterations = 3 which is approximately equals to log10(100) + 1 = 3   // as log10(100) = 2, if we add 1 in it, it will become 3 = no. of loop executions
    For input n = 10000, max loop iterations = 5 which is approximately equals to log10(10000) + 1 = 5  // as log10(10000) = 4, if we add 1 in it, it will become 5 = no. of loop executions
    
    Thus we got a pattern that no. of loop executions are proportional to logarithm of input ----> log10(n)

    As no. of operations are dependent on the loop executions.

    So we can say that no. of operations are also proportional to logarithm of input ----> log10(n)

    Time complexity of a program will always be Big-O(log n) or O(log n) or Order(n), when the no. of operations
    are dependent on a loop executions and the loop is proportional to logarithm of input ----> log n

*/