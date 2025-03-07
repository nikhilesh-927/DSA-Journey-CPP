#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> first;
    cout << "first: ";
    for(auto x: first) cout << x;
    cout << "\n";
    cout << "second: ";
    vector<int> second (4, 100);
    for(auto it = second.begin(); it != second.end(); ++it) cout << " " << *it;
    cout << "\n";
    cout << "third: ";
    vector<int> third(second.begin(), second.end());
    for(auto x: third) cout << " " << x;
    cout << "\n";
    cout << "fourth: ";
    vector<int> fourth(third);
    for(int &x: fourth) cout << " " << x;
    cout << "\n";

    //output
    // first: 
    // second:  100 100 100 100
    // third:  100 100 100 100
    // fourth:  100 100 100 100

    int myInts[] = {16, 2, 77, 29};
    //Let's see what myInts print
    cout << myInts << endl;
    // It will print a memory address
    cout << "fifth: ";
    vector<int> fifth(myInts, myInts + sizeof(myInts)/sizeof(int));
    // In above myInts is a pointer to the first element of the array
    for(vector<int>::iterator it = fifth.begin(); it != fifth.end(); ++it) cout << " " << *it;
    cout << "\n";

    //output
    // 0x5ffdd0
    // fifth:  16 2 77 29

    vector<int> vectorTemp(5, 1);
    vector<int> vectorTemp2(vectorTemp);

    cout << "vectorTemp2: ";

    for(int i: vectorTemp2)
        cout << " " << i;

    cout << endl;

    //output
    //vectorTemp2:  1 1 1 1 1

    vector<int> myVectorTemp;
    cout << "Capacity---> " << myVectorTemp.capacity() << endl;
    myVectorTemp.push_back(1);
    cout << "Capacity---> " << myVectorTemp.capacity() << endl;
    myVectorTemp.push_back(2);
    cout << "Capacity---> " << myVectorTemp.capacity() << endl;
    myVectorTemp.push_back(3);

    //output
    // Capacity---> 0
    // Capacity---> 1
    // Capacity---> 2

    cout << "Size---> " << myVectorTemp.size() << endl;
    cout << "Element at index 2: " << myVectorTemp.at(2) << endl;
    cout << "Front: " << myVectorTemp.front() << endl;
    cout << "Back: " << myVectorTemp.back() << endl; 

    //output
    // Size---> 3
    // Element at index 2: 3
    // Front: 1
    // Back: 3

    cout << "Before pop: " << endl;
    for(int i: myVectorTemp)
        cout << " " << i;

    cout << endl;

    myVectorTemp.pop_back();

    cout << "After pop: " << endl;
    for(int i: myVectorTemp)
        cout << " " << i;

    cout << endl;

    //output
    // Before pop:
    // 1 2 3
    // After pop: 
    // 1 2

    cout << "Before clear size: " << myVectorTemp.size();
    myVectorTemp.clear();
    cout << endl;
    cout << "After clear size: " << myVectorTemp.size();
    cout << "\n";

    //output
    // Before clear size: 2
    // After clear size: 0

}