#include <iostream>

using namespace std;

int main(){

    //**1. BASIC DATATYPES ----> int, float, double, char, bool, string

    //Integer (whole number)

    int num = 5; //Typically 4 bytes in size

    //Float (decimal number with single precision means 1 decimal place)

    float num2 = 5.5; //Typically 4 bytes in size 

    //Double (decimal number with double precision means 2 decimal places)

    double num3 = 5.55; //Typically 8 bytes in size 

    //Character (single characters or text)

    char letter = 'A'; //Typically 1 byte in size 

    //Boolean (true or false)

    bool isStudent = true; // Typically 1 byte in size

    //String (collection of characters)

    string name = "John"; //Typically 2 bytes in size




    //**2. OPERATORS ----> +, -, *, /, %, ++, --, ==, !=, >, <, >=, <=, &&, ||, !

    //Arithmetic Operators

    int a = 10;
    int b = 5;

    int sum = a + b; // Addition : 15
    int difference = a - b; // Subtraction : 5
    int product = a * b; // Multiplication : 50
    int quotient = a / b; // Division : 2
    int remainder = a % b; // Modulus : 0
    a++; // Increment : a = a + 1 = 11
    b--; // Decrement : b = b - 1 = 4

    //Relational Operators

    bool isEqual = (a == b); // Equal to : false
    bool isNotEqual = (a != b); // Not equal to : true
    bool isGreaterThan = (a > b); // Greater than : true
    bool isLessThan = (a < b); // Less than : false
    bool isGreaterThanOrEqual = (a >= b); // Greater than or equal to : true
    bool isLessThanOrEqual = (a <= b); // Less than or equal to : false

    //Logical Operators

    bool isTrue = true;
    bool isFalse = false;

    bool andResult = isTrue && isFalse; // Logical AND : false
    bool orResult = isTrue || isFalse; // Logical OR : true
    bool notResult = !isTrue; // Logical NOT : false


    //OUTPUT EXAMPLES

    cout << "Integer: " << num << endl;
    cout << "Float: " << num2 << endl;
    cout << "Double: " << num3 << endl;
    cout << "Character: " << letter << endl;
    cout << "Boolean: " << isStudent << endl;
    cout << "String: " << name << endl;
    cout << "Sum: " << sum << endl;
    cout << "Greater than: " << isGreaterThan << endl;
    cout << "AND result: " << andResult << endl;


    //output

    // Integer: 5
    // Float: 5.5
    // Double: 5.55
    // Character: A
    // Boolean: 1
    // String: John
    // Sum: 15
    // Greater than: 1
    // AND result: 0

    return 0;
}