#include <iostream>
// the above line is a preprocessor directive that tell the compiler to include the iostream header file
// Header file ----> a file that contains declarations of functions, variables and classes
// iostream ----> this header file contains declarations for input/output operations

using namespace std;
//the above directive allow us to avoid prefixing the standard library components with std::
//for example, instead of std::cout we can write cout only

//main function ----> it is the place where the program execution starts
//it returns an integer value to the operating system
int main(){

    //cout ----> console output object
    //<< ----> output operator that sends data to the console
    // "Hello World!" ----> the text to be printed
    // endl ----> end of line character, it adds a new line and clears the buffer
    // buffer ----> a temporary storage area where data is stored before it is sent to the console

    cout << "Hello World!" << endl;
    
    //output
    //Hello World!

    //return ----> returns an integer value 0 to the operating system indicating successful execution of the program
    return 0;
}