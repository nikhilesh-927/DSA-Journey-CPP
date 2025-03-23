#include <iostream>
using namespace std;

int main(){

    int n, result = 0;

    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            result = result + i; /* here the no. of operations depend on the input. So if input = 5 the loop will execute 5x5 = 25 times*/
        }
    }

    cout << result; /* this is not a time complexity, it will always execute once */

    return 0;
}

/*

    In this program the total no. of operations is n^2. Here no. of operations is depend on the input.

    So, the time complexity of this program will be Big-O(n^2) or O(n^2) or Order(n^2)

    For two nested loops time complexity is O(n^2)

    Same way for three nested loops time complexity is O(n^3)

*/