#include <iostream>

using namespace std;

//    *
//   ***
//  *****
// *******
// *******
//  *****
//   ***
//    *

void invertedPyramid(int input, int stars){
    int space = 0;

    for(int i = 0; i < input; i++){
        for(int j = 0; j < space; j++){
            cout << " ";
        }
        for(int k = 0; k < stars; k++){
            cout << "*";
        }
        stars = stars - 2;
        space++;
        cout << endl;
    }
}

int main(){
    int input;

    cout << "Enter the number of rows: ";
    cin >> input;

    int space = 1;
    int stars = 1;

    for(int i = 0; i < input; i++){
        for(int j = 0; j < input - space; j++){
            cout << " ";
        }
        for(int k = 0; k < stars; k++){
            cout << "*";
        }
        cout << endl;
        // cout << "the number of spaces printed: " << input - space << endl;
        // cout << "the number of stars printed: " << stars << endl;
        space++;
        stars = stars + 2;
    }

    stars = stars - 2;

    invertedPyramid(input, stars);


    return 0;
}


//output

// Enter the number of rows: 4
//    *
//   ***
//  *****
// *******
// *******
//  *****
//   ***
//    *
