#include <iostream>
#include <vector> // For vector container
#include <algorithm> // For STL algorithms

using namespace std;

int main(){

    //Creating a vector of integers

    vector<int> vectorInts;

    //Inserting elements in it

    vectorInts.push_back(8);
    vectorInts.push_back(15);
    vectorInts.push_back(29);
    vectorInts.push_back(36);

    //**1. Binalry Search
    //Check if element 15 exists in the vector
    //Returns true (1) if element is found otherwise false (0)

    cout << "Finding 15 ----> " << binary_search(vectorInts.begin(), vectorInts.end(), 15) << endl;

    //output
    //Finding 15 ----> 1

    //Note ---->  it is necessary for the elements to be in sorted order when using 
    //the std::lower_bound and std::upper_bound functions in C++. 

    //**2. Upper Bound
    // Returns first element that is > 15
    cout << "Upper bound of 15 is : " << *upper_bound(vectorInts.begin(), vectorInts.end(), 15) << endl;

    //The below code returns the index of the upper bound element
    cout << "Index of upper bound of 15 is: " << upper_bound(vectorInts.begin(), vectorInts.end(), 15) - vectorInts.begin() << endl;

    //output

    //Upper bound of 15 is : 29
    // Index of upper bound of 15 is: 2

    //**3. Lower bound
    // Returns first element that is >= 15

    cout << "Lower bound of 15 is : " << *lower_bound(vectorInts.begin(), vectorInts.end(), 15) << endl;

    //Index of lower bound element

    cout << "Index of lower bound of 15 is: " << lower_bound(vectorInts.begin(), vectorInts.end(), 15) - vectorInts.begin() << endl;

    //output
    // Lower bound of 15 is : 15
    // Index of lower bound of 15 is: 1

    //**4. Max and Min element

    int num1 = 5, num2 = 10;
    cout << "Max of num1 and num2 is: " << max(num1, num2) << endl;
    cout << "Min of num1 and num2 is: " << min(num1, num2) << endl;

    //output

    // Max of num1 and num2 is: 10
    // Min of num1 and num2 is: 5

    //**5. Swap elements

    swap(num1, num2);

    cout << "After swapping num1 --> " << num1 << " num2 --> " << num2 << endl;

    //output

    //After swapping num1 --> 10 num2 --> 5


    //**6. Reversing String

    string str = "Mumbai";
    reverse(str.begin(), str.end());
    cout << "Reversed string is: " << str << endl;

    //output

    //Reversed string is: iabmuM

    vector<int> vecRev = {10, 20, 30, 40, 50};

    cout << "Original vecRev : ";

    for(int &x: vecRev){
        cout << x << " ";
    }

    cout << endl;

    //**7. Rotating a vector
    //Rotating the vector by 1 position to the left

    rotate(vecRev.begin(), vecRev.begin() + 1, vecRev.end());

    cout << "After rotating vecRev: ";
    
    for(int &x: vecRev){
        cout << x << " ";
    }

    cout << endl;

    //output

    // Original vecRev : 10 20 30 40 50
    // After rotating vecRev: 20 30 40 50 10

    //**8. Sorting a vector

    sort(vecRev.begin(), vecRev.end());

    cout << "After sorting vecRev: ";

    for(int x: vecRev){
        cout << x << " ";
    }
    
    cout << endl;

    //output

    // After sorting vecRev: 10 20 30 40 50

    return 0;
}