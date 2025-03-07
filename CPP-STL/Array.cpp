#include <iostream>
#include <array>
using namespace std;

// The array in STL
//default initialization of global array in STL
array<int, 3> aGlobal; // this array is initialized as ---> {0, 0, 0}

int main(){

    // The basic array
    int arr[3] = {1, 2, 3};
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    cout << "\n";

    // The array in STL
    //default initialization
    array<int ,3> aLocal1;// The array is default initialized as ---> {?, ?, ?}

    array<int, 3> aLocal11 = {};

    // user initialized array
    array<int, 3> aLocal2 = {10, 20}; // initialized as ---> {10, 20, 0}

    array<int, 3> aLocal3 = {10, 20, 30}; // initialized as ---> {10, 20, 30}

    // copy the one array into another

    array<int, 3> aLocal4 = aLocal3; // copy aLocal3 = {10, 20, 30}

    // Output of all STL arrays created
    cout << "aGolbal:";
    for(auto x: aGlobal) cout << " " << x;

    cout << "\n";

    cout << "aLocal1:";
    for(auto x: aLocal1) cout << " " << x;

    cout << "\n";

    cout << "aLocal11:";
    for(auto x: aLocal11) cout << " " << x;

    cout << "\n";

    cout << "aLocal2:";
    for(auto x: aLocal2) cout << " " << x;

    cout << "\n";

    cout << "aLocal3:";
    for(auto x: aLocal3) cout << " " << x;

    cout << "\n";

    cout << "aLocal4:";
    for(auto x: aLocal4) cout << " " << x;
    
    cout << "\n";

    // return 0;

    // output of above segment of codes

    //     1 2 3 
    // aGolbal: 0 0 0
    // aLocal1: 0 0 0
    // aLocal11: 0 0 0
    // aLocal2: 10 20 0
    // aLocal3: 10 20 30
    // aLocal4: 10 20 30

    //Member functions
    // array "at"
    array<int, 10> arrayAt;

    for(int i = 0; i < arrayAt.size(); i++) arrayAt.at(i) = i + 1; // assigns each index with value more than 1 like arrayAt[0] = 1
    cout << "arrayAt:";
    for(int i = 0; i < arrayAt.size(); i++) cout << " " << arrayAt.at(i);
    cout << "\n";

    // output
    // arrayAt: 1 2 3 4 5 6 7 8 9 10

    //array "back and front" member functions

    array<int, 3> arrayBackFront = {5, 16, 77};

    //print original array
    cout << "Original arrayBackFront: ";
    for(auto x: arrayBackFront) cout << " " << x;
    cout << "\n";

    cout << "Front is: " << arrayBackFront.front() << endl;
    cout << "Back is: " << arrayBackFront.back() << endl;

    // update front and back values

    arrayBackFront.front() = 2;
    arrayBackFront.back() = 8;

    //print updated array
    cout << "Updated arrayBackFront: ";
    for(auto x: arrayBackFront) cout << " " << x;
    cout << "\n";

    //output
    // Original arrayBackFront:  5 16 77
    // Front is: 5
    // Back is: 77
    // Updated arrayBackFront:  2 16 8

    // array "begin and end" member function
    array <int, 5> arrayBegEnd = {4, 12, 16, 9, 90};

    cout << "Original arrayBegEnd: ";
    for(auto it = arrayBegEnd.begin(); it != arrayBegEnd.end(); ++it) cout << " " << *it;
    cout << "\n";
    for(auto it = arrayBegEnd.begin(); it != arrayBegEnd.end(); ++it) *it = *it + 1;
    cout << "Updated arrayBegEnd: ";
    for(auto it = arrayBegEnd.begin(); it != arrayBegEnd.end(); ++it) cout << " " << *it;
    cout << "\n";

    //output
    // Original arrayBegEnd:  4 12 16 9 90
    // Updated arrayBegEnd:  5 13 17 10 91

    // array "cbegin and cend" member function
    array <int, 5> arraycBegcEnd = {5, 2, 60, 15, 80};

    cout << "arraycBegcEnd: ";
    for(auto it = arraycBegcEnd.cbegin(); it != arraycBegcEnd.cend(); ++it) cout << " " << *it; // Here we can't modify *it like in .begin() and .end()
    // the above type of iterator is called constant iterator
    cout << "\n";

    //output
    // arraycBegcEnd:  5 2 60 15 80

    // array "rbegin and rend" member function
    array <int, 5> arrayrBegrEnd = {7, 13, 65, 34, 30};

    cout << "arrayrBegrEnd: ";
    for(auto it = arrayrBegrEnd.rbegin(); it != arrayrBegrEnd.rend(); ++it) cout << " " << *it; 
    // the above code will print the array in reverse order
    cout << "\n";

    //output
    // arrayrBegrEnd:  30 34 65 13 7

    // array "crbegin and crend" member function
    array <int, 5> arraycrBegcrEnd = {8, 14, 23, 90, 65};

    cout << "arraycrBegcrEnd: ";
    for(auto it = arraycrBegcrEnd.rbegin(); it != arraycrBegcrEnd.rend(); ++it) cout << " " << *it; 
    // the above code will print the array in reverse order
    // but in this case we can not modify *it
    cout << "\n";

    //output
    // arraycrBegcrEnd:  65 90 23 14 8

    // array "data" member function

    const char* cstr = "Test string";
    array<char, 12> charray;

    memcpy(charray.data(), cstr, 12);

    cout << "charray: " <<  charray.data() << "\n";

    //output
    //charray: Test string

    // array "empty" member function
    array<int, 0> first;
    array<int, 1> second;
    array<int, 5> third;

    cout << "first is " << (first.empty() ? "empty" : "not empty") << endl;
    cout << "second is " << (second.empty() ? "empty" : "not empty") << endl;
    cout << "third is "  << (third.empty() ? "empty" : "not empty") << endl;

    //output
    // first is empty
    // second is not empty
    // third is not empty

}