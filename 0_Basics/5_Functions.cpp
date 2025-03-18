#include <iostream>
using namespace std;

//Function prototype ----> this is the declaration of a function
//Function definition ----> this is the actual implementation of a function

//**1. Function prototype
int add(int, int);
void greet();
void displayMessage(string);
float multiply(float, float);
int factorial(int);
inline int square(int);

//the difference between normal function and inline functions

//normal functions int add(){} --> these types of functions calls do involve overhead due to stack operations (push and pop)
//they also include parameter passing, control transfer, and potential context switching 
//which can lead to performance bottlenecks in some cases


//inline functions inline int square(){} --> these types of functions suggest compiler 
//to replace the function call with the actual function code to reduce overhead

//Main function

int main(){

    //Calling functions

    int sum = add(5, 10);

    cout << "Sum of 5 and 10: " << sum << endl;

    greet();

    displayMessage("John");

    float product = multiply(5.5, 8.8);

    cout << "Product of 5.5 and 8.8: " << product << endl;

    int fact = factorial(5);

    cout << "Factorial of 5: " << fact << endl;

    cout << "Square of 6: " << square(6) << endl;

    //output

    // Sum of 5 and 10: 15
    // Hello, Welcome to the amazing world of coding
    // Hello, John!
    // Product of 5.5 and 8.8: 48.4
    // Factorial of 5: 120
    // Square of 6: 36

    return 0;
}


//**2. Function definition

int add(int num1, int num2){
    return num1 + num2;
}

void greet(){

    cout << "Hello, Welcome to the amazing world of coding" << endl;
}

void displayMessage(string name){

    cout << "Hello, " << name << "!" << endl;
}

float multiply(float num1, float num2){

    return num1 * num2;
}

int factorial(int num){

    if(num == 0 || num == 1){
        return 1;
    }
    return num * factorial(num - 1);
}

inline int square(int num){

    return num * num;
}
