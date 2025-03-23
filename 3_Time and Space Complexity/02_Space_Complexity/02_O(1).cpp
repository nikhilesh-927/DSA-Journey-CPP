#include <iostream>
using namespace std;

int main(){
    int n;

    cin >> n; /* here, n is an integer and we one input, so whatever we take as input; memory will use only 4 bytes */

    if(n%2 == 0){
        cout << n << " is EVEN!";
    }
    else{
        cout << n << " is ODD!";
    }

    return 0;
}

/*
    The input always takes 4 bytes of memory, which is constant. 
    So, the space complexity of this program is O(1).

    Whenever the input takes a constant memory, the space complexity of the program is Big-O(1) or O(1) or Order(1). 
*/