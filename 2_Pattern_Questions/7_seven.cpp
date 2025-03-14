#include <iostream>

using namespace std;

// Enter the number of rows: 5
// 1 2 3 4 5 5 4 3 2 1 
// 1 2 3 4 * * 4 3 2 1 
// 1 2 3 * * * * 3 2 1 
// 1 2 * * * * * * 2 1 
// 1 * * * * * * * * 1 

int main(){

    int input;
    cout << "Enter the number of rows: ";

    cin >> input;

    int stars = 0;

    for(int i = 0; i < input; i++){
        for(int j = 1; j <= input - i; j++){
            cout << j << " ";
        }
        for(int k = 0; k < stars; k++){
            cout << "* ";
        }
        for(int l = input - i; l > 0; l--){
            cout << l << " ";
        }
        cout << endl;
        stars = stars + 2;
    }


    return 0;
}

//output

// Enter the number of rows: 5
// 1 2 3 4 5 5 4 3 2 1 
// 1 2 3 4 * * 4 3 2 1 
// 1 2 3 * * * * 3 2 1 
// 1 2 * * * * * * 2 1 
// 1 * * * * * * * * 1 