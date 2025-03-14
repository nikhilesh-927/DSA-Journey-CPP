#include <iostream>
using namespace std;

    // * * * * * * * * 
    // * * * * * * * * 
    // * * * * * * * * 
    // * * * * * * * * 
    // * * * * * * * * 
    // * * * * * * * * 
    // * * * * * * * * 
    // * * * * * * * * 


int main(){

    int input;
    cout << "Enter the number of rows: ";
    cin >> input;
    
    for(int i = 0; i < input; i++){
        for(int j = 0; j < input; j++){
            cout << "* ";
        }
        cout << endl;
    }

    //output

    // Enter the number of rows: 8
    // * * * * * * * * 
    // * * * * * * * * 
    // * * * * * * * * 
    // * * * * * * * * 
    // * * * * * * * * 
    // * * * * * * * * 
    // * * * * * * * * 
    // * * * * * * * * 


    return 0;
}