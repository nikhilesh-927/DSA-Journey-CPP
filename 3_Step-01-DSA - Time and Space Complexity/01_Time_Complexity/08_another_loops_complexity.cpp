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

    for(int i = 0; i < n; i++){
        result = result + 1; /* here the no. of operations depend on the input. So if input = 5 the loop will execute 5 times*/
    }

    cout << result; /* this is not a time complexity, it will always execute once */

    return 0;
}

/*

    In this program the total no. of loops are 2. 
    One is double for loop (which is nested)
    and Another is single for loop

    For first nested loop the time complexity will be O(n^2) and
    for the second single loop the time complexity will be O(n)

    So the time complexity of this program will be Big-O(n^2) or O(n^2) or Order(n^2)
    Because we can not calculate O(n^2 + n) this way, we always take higher power

    We've to remember, if we see multiple complexity in a program, we see which one is worse
    and that will be the answer of complexity. 

    Similarly suppose we have O(n! + n^3 + n^2 + log(n)) complexity in a program,
    then the time complexity of that program will be n!, because n! is the worse case among all of them. 

    How O(n!) is even worse than O(n^3) ?

    As n increases, n! grows extremely quickly. For example :

    1!=1
    2!=2
    3!=6
    4!=24
    5!=120
    6!=720
    7!=5040
    8!=40320
    9!=362880
    10!=3628800


    Whereas if n increases, n^3 also grows but much slower rate compared to n!

    1^3 = 1
    2^3 = 8
    3^3 = 27
    4^3 = 64
    5^3 = 125
    6^3 = 216
    7^3 = 343
    8^3 = 512
    9^3 = 729
    10^3 = 1000


    This is why n! is worst than all of them


*/