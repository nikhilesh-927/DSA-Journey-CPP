#include <iostream>
using namespace std;

int main()
{
    // some important things about pointer

    // * is dereference operator
    // we use * to access the value at the memory address pointed to by a pointer
    // & is Address-of Operator
    // we use & to get the memory address of a variable

    int var = 5;
    int *pointer = &var;
    cout << " " << pointer << " " << *pointer << " " << &pointer;
    cout << endl;
    int **pointerToPointer = &pointer;
    cout << pointerToPointer << " " << *pointerToPointer << " " << &pointerToPointer << " " << **pointerToPointer << endl;

    // output
    // 0x5ffd6c 5 0x5ffd60
    // 0x5ffd60 0x5ffd6c 0x5ffd58 5

    int var1 = 7;
    int &var2 = var1;

    cout << "Value of var1: " << var1 << endl;
    cout << "Value of var2: " << var2 << endl;

    //modifying the value of var2

    var2 = 10; // // Modify var2, which affects var1 because var2 is a reference to var1

    cout << "Value of var1 after modifying var2: " << var1 << endl;
    cout << "Value of var2 after modifying var2: " << var2 << endl;

    // output 
    // Value of var1: 7
    // Value of var2: 7
    // Value of var1 after modifying var2: 10
    // Value of var2 after modifying var2: 10


}