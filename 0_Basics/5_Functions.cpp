#include <iostream>
using namespace std;

//Functions ----> a function is a block of code that performs a specific task

//Types of functions:

//void functions ----> these functions do not return any value
//For example: 
//void(){ cout << "Hello, I am void function"; }
//This is void function we can not use return statement so it can not return anything

//non-void functions ----> these functions return a value
//For example: 
//int addition(int num1, int num2){ return num1 + num 2; }
//This is non-void function and it returns an integer


//Parameters and Arguments

//Parameters ----> Parameters are variables which are declared at the time of function definition
//For example :
//int multiply(int num1, int num2) ---> num1 and num2 are parameters
//{ 
//return num1 * num2; 
//}

//Arguments ----> Arguments are the actual values passed to the function during function call
//For example:
//int result = multiply(5, 10); ----> 5 and 10 are arguments



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



//Explation of default arguments
//Default arguments ----> arguments that are assigned a default value if not provided during function call
//We can define default values for parameters in the function declaration or definition using the equal sign '=' symbol
void displayDefault(int x = 0, int y = 0); //default arguments x = 0 and y = 0


//Pass by value ----> the function receives a copy of the argument value

//Pass by reference ----> the function receives a reference to the argument value 
//which allows the function to modify the original value

int incrementPassByValue(int);
int incrementPassByReference(int &);


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

    //Function call with default arguments

    displayDefault(); // x = 0, y = 0 (by default)

    displayDefault(5, 10); // x = 5, y = 10 (passing values)

    //Pass by value

    int passByValue = 5;
    cout << "passByValue before: " << passByValue << endl;

    int resultPassByValue =incrementPassByValue(passByValue);

    cout << "passByValue after: " << passByValue << endl;

    cout << "Result of incrementPassByValue: " << resultPassByValue << endl;


    //Pass by reference

    int passByReference = 8;

    cout << "passByReference before: " << passByReference << endl;

    int resultPassByReference = incrementPassByReference(passByReference);

    cout << "passByReference after: " << passByReference << endl;

    cout << "Result of incrementPassByReference: " << resultPassByReference << endl;

    //output

    // Sum of 5 and 10: 15
    // Hello, Welcome to the amazing world of coding
    // Hello, John!
    // Product of 5.5 and 8.8: 48.4
    // Factorial of 5: 120
    // Square of 6: 36
    // x: 0, y: 0
    // x: 5, y: 10
    // passByValue before: 5
    // passByValue after: 5
    // Result of incrementPassByValue: 6
    // passByReference before: 8
    // passByReference after: 9
    // Result of incrementPassByReference: 9

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


void displayDefault(int x, int y){
    cout << "x: " << x << ", y: " << y << endl;
}

int incrementPassByValue(int x){
    x++;
    return x;
}

int incrementPassByReference(int &x){
    x++; 
    return x;
}