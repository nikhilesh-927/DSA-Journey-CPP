#include <iostream>

using namespace std;

// *****
// *   *
// *   *
// *   *
// *****

int main(){

    int input;
    cout << "Enter the number of rows: ";
    cin >> input;

    for(int i = 1; i <= input; i++){
        if(i == 1 || i == input){
            for(int j = 0; j < input; j++){
                cout << "*";
            }
            cout << endl;
        }
        else{
            for(int k = 0; k < input; k++){
                if(k == 0 || k == input - 1){
                    cout << "*";
                }
                else{
                    cout << " ";
                }
            }
            cout << endl;
        }
    }

    return 0;
}

//output

// Enter the number of rows: 5
// *****
// *   *
// *   *
// *   *
// *****