#include <iostream>
using namespace std;

int main(){

    /* Constraints : 0 <= n <= 100 */

    int i; 
    int j;
    int n; 

    cin >> n;

    /* Create a 2D array of size nxn */

    int matrix[100][100]; /* Assuming input n will not exceed 100 for simplicity */

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            matrix[i][j] = i + j;
        }
    }

    /*
        For an input n, the program will create a 2D matrix of size n x n. 
        The number of elements in the matrix will be n^2.

        If n = 10, it would use 10^2 =  100 units of memory approximately equal to 100 * 4 bytes = 400 bytes.
        and If n = 20, it would use 20^2 = 400 units of memory approximately equal to 400 * 4 bytes = 1600 bytes. 

        So we are observing that the memory used is proportional to the square of the input n. 
        So the space complexity = O(n^2).
    */



    /* print the 2D array*/

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

/*

    The space complexity of the above program will be O(n^2). 

*/