#include <iostream>
using namespace std;

int main(){
    unsigned int a = 5; // Binary ----> 0101
    unsigned int b = 3; // Binary ----> 0011

    unsigned int result;

    //Bitwise AND

    result = a & b; // Bitwise AND ----> 0101 & 0011 = 0001 (1 in decimal)

    cout << "Result of a & b: " << result << endl;

    //output

    //Result of a & b: 1


    //Bitwise OR

    result = a | b; // Bitwise OR ----> 0101 | 0011 = 0111 (7 in decimal)

    cout << "Result of a | b: " << result << endl;

    //output

    //Result of a | b: 7

    
    //Bitwise XOR

    result = a ^ b; // Bitwise XOR ----> 0101 ^ 0011 = 0110 (6 in decimal)

    cout << "Result of a ^ b: " << result << endl;

    //output

    //Result of a ^ b: 6


    //Biwise NOT

    // if we perform bitwise NOT on an unsigned integer, the result will be the one's complement of the integer
    // for example if we perform NOT on 5 ----> 00000000000000000000000000000101 (32-bit represtation),
    // it will result in 111111111111111111111111111111110010 (32-bit representation)
    // which is equivalent to 4294967290 (since we do not use 2's complement
    // so we can't use negative numbers in unsigned integers)

    signed int c = 5; // Binary ----> 00000000000000000000000000000101 (32-bit representation)

    signed int res = ~c; // Bitwise NOT ----> ~00000000000000000000000000000101 = 111111111111111111111111111111111010

    // In c++ signed int is represented using 2's complement representation
    // Before performing 2's complement, we check the most significant bit of the resultant binary number
    // Here 111111111111111111111111111111111010 in this case it is 1 (means the number is negative)
    // we get the sign for the number negative (-)
    // 2's complement of 111111111111111111111111111111111010 = 00000000000000000000000000000101 + 1 = 00000000000000000000000000000110 (6 in decimal)
    // so the final result is -6

    cout << "Result of ~c: " << res << endl;

    //output

    //Result of ~c: -6


    //Left Shift
    //In left shift we shift the bits to the left by a specified number of positions

    result = a << 1; // Bitwise Left Shift ----> 0101 << 1 = 1010 (10 in decimal)

    cout << "Result of a << 1: " << result << endl;

    //output

    //Result of a << 1: 10


    //Right Shift
    //In right shift we shift the bits to the right by a specified number of positions

    result = a >> 1; // Bitwise Right Shift ----> 0101 >> 1 = 0010 (2 in decimal)

    cout << "Result of a >> 1: " << result << endl;

    //output

    //Result of a >> 1: 2

    return 0;
}