#include <iostream>
using namespace std;

// * 
// * *
// * * *
// * * * *
// * * *
// * *
// *

int main()
{
   int input;
   cout << "Enter the number of rows: ";
   cin >> input;

   for(int i = 1; i <= input; i++){
    for(int j = 0; j < i; j++){
        cout << "* ";
    }
    cout << endl;
   }

   for(int l = input - 1; l > 0; l--){
        for(int m = 0; m < l; m++){
            cout << "* ";
        }
        cout << endl;
   }
   return 0;
}

//output


// Enter the number of rows: 4
// * 
// * *
// * * *
// * * * *
// * * *
// * *
// *