#include<iostream>
#include<set>
using namespace std;

int main(){

    //Set ----> a set is a part of the Standard Template Library (STL) and is a container that stores unique elements in a specific order.
    // The elements in a set are sorted automatically based on a comparison function, and no duplicate values are allowed. 

    //creating a set of integers
    set<int> mySet1;

    //inserting values in the set

    mySet1.insert(10);
    mySet1.insert(5);
    mySet1.insert(15);
    mySet1.insert(20);
    mySet1.insert(10); //duplicate value (this will be ignored)

    cout << "mySet1: ";

    for(set<int>::iterator it = mySet1.begin(); it != mySet1.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;

    //output
    //mySet1: 5 10 15 20 


    //Finding an element in the set

    if(mySet1.find(15) != mySet1.end()){
        cout << "15 is present in mySet1" << endl;
    }

    else{
        cout << "15 is not present in mySet1" << endl;
    }

    //output

    //15 is present in mySet1

    //Removing element

    mySet1.erase(15);

    cout << "After removing 15 from the set: ";

    for(const auto &x: mySet1){
        cout << x << " ";
    }

    cout << endl;

    //output
    //After removing 15 from the set: 5 10 20

    //Size of the set

    cout << "The current size of the set is: " << mySet1.size() << endl;

    //output
    //The current size of the set is: 3

    //Check if a value exists

    if(mySet1.count(10)){
        cout << "10 exists in the set" << endl;
    }

    //output
    //10 exists in the set

    //lower and upper bounds

    //Lower and Upper Bounds: The lower_bound() function returns the first element
    // that is not less than 10, 
    //while upper_bound() returns the first element greater than 10.

    auto upperBound = mySet1.upper_bound(10);

    auto lowerBound = mySet1.lower_bound(10);

    cout << "Upper bound of element 10 in the set is: " << *upperBound << endl;

    cout << "Lower bound of element 10 in the set is: " << *lowerBound << endl;

    //output
    // Upper bound of element 10 in the set is: 20
    // Lower bound of element 10 in the set is: 10


    //Equal range ----> equal_range() returns a pair of iterators that represent the range of elements matching a specific key.

    //The equal_range function returns a std::pair of iterators
    //In short what we are doing in upper_bound() and lower_bound(), we do it in one go using equal_range()

    set<int> mySet2 = {10, 20, 30, 40, 50};

    //find the equal_range() for 30

    auto rangeEq = mySet2.equal_range(30);

    cout << "Equal range for 30: ";

    //Display first iterator(lower bound)

    if(rangeEq.first != mySet2.end()){
        cout << "First iterator (Lower Bound): " << *rangeEq.first << endl;
    }
    else{
        cout << "No lower bound found" << endl;
    }

    //Displaying the second iterator (Upper Bound)

    if(rangeEq.second != mySet2.end()){
        cout << "Second Iterator (Upper Bound): " << *rangeEq.second << endl;
    }
    else{
        cout << "No upper bound found" << endl;
    }

    //output
    //Equal range for 30: First iterator (Lower Bound): 30
    // Second Iterator (Upper Bound): 40

    return 0;
}