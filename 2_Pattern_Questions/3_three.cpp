#include <iostream>
using namespace std;

    // 1
    // 12
    // 123
    // 1234
    // 12345

int main(){
    int input;

    cout << "Enter the number of rows: ";
    cin >> input;

    for(int i = 0; i < input; i++){
        for(int j = 0; j <= i; j++){
            cout << j + 1 ;
        }
        cout << endl;
    }

    //output

    // Enter the number of rows: 5
    // 1
    // 12
    // 123
    // 1234
    // 12345

    return 0;
}