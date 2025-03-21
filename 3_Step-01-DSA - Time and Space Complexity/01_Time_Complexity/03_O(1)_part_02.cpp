#include <iostream>
using namespace std;

int main(){
    int n, result;

    cin >> n;

    result = n * (n + 12) / 2; /* here three mathematical operations (*, +, /) and one assignment operation (=) occur*/

    cout << result; /* this is not a complexity as it will execute once*/

    return 0;
}

/*

    In this program total number of operations occur is 4 and it will always be 4. 
    Because here the number of operations are not dependent on the input. 

    Input is not constant, it can vary. But for any input no. of operations will be 4.
    So, the time complexity of this program is O(1). 

    Time complexity of a program will always be Big-O(1), or O(1) or Order(1),
    when the number of operations are not dependent on the input of the program. 

*/