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

    cout << "vectorInit1: ";

    vector<int> vectorInit1 = {1, 2, 3, 4};
    for(int i : vectorInit1) cout << " "  << i;
    cout << endl;

    //output
    //vectorInit1:  1 2 3 4

    cout << "vectorInit2: ";

    vector<int> vectorInit2(4);
    for(int i = 0; i < vectorInit2.size(); i++) vectorInit2[i] = i+5;
    for(int &i: vectorInit2) cout << " " << i;
    cout << endl;

    //output
    //vectorInit2:  5 6 7 8

    cout << "With using iterator: ";
    for(vector<int>::iterator it = vectorInit2.begin(); it != vectorInit2.end(); ++it) cout << " " << *it;
    cout << endl;

    //output
    //With using iterator:  5 6 7 8

    vector<int> vectorInit3;
    vectorInit3.push_back(10);
    vectorInit3.push_back(20);
    vectorInit3.push_back(30);
    vectorInit3.push_back(40);
    cout << "vectorInit3: ";

    for(vector<int>::iterator it = vectorInit3.begin(); it != vectorInit3.end(); ++it) cout << " " << *it;
    cout << endl;

    //output
    //vectorInit3:  10 20 30 40

    // vector "emplace" member function

    vector<int> vectorEmp = {10, 20, 30};

    cout << "original vectorEmp: ";

    for(auto x: vectorEmp) cout << " " << x;

    cout << endl;

    auto it = vectorEmp.emplace(vectorEmp.begin()+1, 100);
    //100 inseted at 1 place after beginning of the vector

    vectorEmp.emplace(it, 200);
    //200 inserted at the address pointed by it

    vectorEmp.emplace(vectorEmp.end(), 300);
    //300 inserted at th end of the vectorEmp

    cout << "modified vectorEmp: ";

    for(int &x: vectorEmp) cout << " " << x;

    cout << endl;

    //output
    // original vectorEmp:  10 20 30
    // modified vectorEmp:  10 200 100 20 30 300


    //vector "emplace_back" member function

    vector<int> vectorEmpBack = {30, 40, 50};

    cout << "original vectorEmpBack: ";

    for(auto x: vectorEmpBack) cout << " " << x;

    cout << endl;

    vectorEmpBack.emplace_back(100);
    //insert 100 at the end of vector

    vectorEmpBack.emplace_back(200);
    //insert 200 at the end of the vector

    cout << "modified vectorEmpBack: ";

    for(auto x: vectorEmpBack) cout << " " << x;

    cout << endl;

    //output
    // original vectorEmpBack:  30 40 50
    // modified vectorEmpBack:  30 40 50 100 200

    // vector "assign" member function

    vector<int> vectorAsg1;
    vector<int> vectorAsg2;
    vector<int> vectorAsg3;

    //first type of assignment

    vectorAsg1.assign(7, 100);

    vector<int>::iterator it1, it2;
    it1 = vectorAsg1.begin() + 1;
    it2 = vectorAsg1.end() - 1;

    //second type of assignment

    vectorAsg2.assign(it1, it2);

    //third type of assignment

    int tempAsg[] = {10, 20, 30};
    vectorAsg3.assign(tempAsg, tempAsg + sizeof(tempAsg)/sizeof(int));

    cout << "vectorAsg1: ";

    for(int x: vectorAsg1) cout << " " << x;

    cout << endl;

    cout << "vectorAsg2: ";

    for(int x: vectorAsg2) cout << " " << x;

    cout << endl;

    cout << "vectorAsg3: ";

    for(int x: vectorAsg3) cout << " " << x;

    cout << endl;

    //output
    // vectorAsg1:  100 100 100 100 100 100 100
    // vectorAsg2:  100 100 100 100 100
    // vectorAsg3:  10 20 30


    //vector "erase" member function

    vector<int> vectorErase;

    for(int i = 0; i < 10; i++) vectorErase.push_back(i + 1);

    cout << "original vectorErase: ";

    for(int i: vectorErase) cout << " " << i;

    cout << endl;

    //erasing 6th element

    vectorErase.erase(vectorErase.begin() + 5);

    cout << "After erasing 6th element, vectorErase: ";

    for(int i: vectorErase) cout << " " << i;

    cout << endl;

    //erasing 3 elements from start

    vectorErase.erase(vectorErase.begin(), vectorErase.begin() + 3);

    cout << "After erasing 3 elements from the start, vectorErase: ";

    for(int i: vectorErase) cout << " " << i;

    cout << endl;

    //erasing 2 elements from end

    vectorErase.erase(vectorErase.begin() + (vectorErase.size() - 2), vectorErase.end());

    cout << "After erasing 2 elements from the end, vectorErase: ";

    for(int i: vectorErase) cout << " " << i;

    cout << endl;

    //output
    // original vectorErase:  1 2 3 4 5 6 7 8 9 10
    // After erasing 6th element, vectorErase:  1 2 3 4 5 7 8 9 10
    // After erasing 3 elements from the start, vectorErase:  4 5 7 8 9 10
    // After erasing 2 elements from the end, vectorErase:  4 5 7 8


    //vector "insert" member function

    vector<int> vectorInsert (3, 100); 

    vector<int>::iterator itInsert;

    itInsert = vectorInsert.begin();

    //first type of insertion
    vectorInsert.insert(itInsert, 2, 300);

    // Take the vector called vectorInsert and insert the number 300 two times
    // at the position where the iterator it is pointing.

    //"it" is no longer valid, so create new

    itInsert = vectorInsert.begin();

    vector<int> vectorInsert2(2, 400);

    cout << "original vectorInsert: ";

    for(int &x: vectorInsert) cout << " " << x;

    cout << endl;

    //second type of insertions
    vectorInsert.insert(itInsert+2, vectorInsert2.begin(), vectorInsert2.end());

    cout << "after second type of insertion, vectorInsert: ";

    for(int &x: vectorInsert) cout << " " << x;

    cout << endl;

    int tempInsert[] = {20, 30, 40};

    vectorInsert.insert(vectorInsert.begin(), tempInsert, tempInsert + 3);

    cout << "after second type of insertion, vectorInsert: ";

    for(int &x: vectorInsert) cout << " " << x;

    cout << endl;

    //output
    // original vectorInsert:  300 300 100 100 100
    // after second type of insertion, vectorInsert:  300 300 400 400 100 100 100
    // after second type of insertion, vectorInsert:  20 30 40 300 300 400 400 100 100 100


    //vector "reserve" member function

    vector<int> vectorResv;
    vector<int>::size_type sz;

    sz = vectorResv.capacity();

    cout << "making vectorResv grow: " << endl;

    for(int i = 0; i < 3; i++) 
    {
        vectorResv.push_back(i + 1);
        if(sz != vectorResv.capacity()){
            sz = vectorResv.capacity();
            cout << "changed capacity: " << sz << "," << " ";
        }
    }

    cout << endl;

    vector<int> vectorResv2;
    sz = vectorResv2.capacity();

    //reserving space for vectorResv2
    vectorResv2.reserve(100);

    cout << "making vectorResv2 grow: " << endl;

    for(int i = 0; i < 3; i++)
    {
        vectorResv2.push_back(i + 1);
        if(sz != vectorResv2.capacity()){
            sz = vectorResv2.capacity();
            cout << "changed capacity: " << sz << "," << " ";
        }
    }

    cout << endl;

    //output
    // making vectorResv grow:
    // changed capacity: 1, changed capacity: 2, changed capacity: 4, 
    // making vectorResv2 grow:
    // changed capacity: 100,

    //vector "resize" member function

    vector<int> vectorRez;

    //resizing the vectorRez to 5
    vectorRez.resize(5);

    cout << "Size after resizing vectorRez to 5: " << vectorRez.size() << endl;

    cout << "when size is 5 vectorRez: ";

    for(const auto &x: vectorRez) cout << " " << x;

    cout << endl;

    //resizing to size : 8 
    vectorRez.resize(8, 100); // it will assign last 3 elements value 100 
    //because earlier it was of size of 5 : {0, 0, 0, 0, 0}

    cout << "when size is 8 vectorRez: ";

    for(const auto &x: vectorRez) cout << " " << x;

    cout << endl;

    //resizing it to 3
    vectorRez.resize(3);

    cout << "when size is 3 vectorRez: ";

    for(const auto &x: vectorRez) cout <<  " " << x;

    cout << endl;

    //output
    // Size after resizing vectorRez to 5: 5
    // when size is 5 vectorRez:  0 0 0 0 0
    // when size is 8 vectorRez:  0 0 0 0 0 100 100 100
    // when size is 3 vectorRez:  0 0 0


    //vector "shrink_to_fit" member function

    vector<int> vectorSTF(100);

    cout << "capacity of vectorSTF first time: " << vectorSTF.capacity() << endl;

    vectorSTF.resize(10);

    cout << "capacity of vectorSTF second time: " << vectorSTF.capacity() << endl;

    vectorSTF.shrink_to_fit();

    cout << "capacity of vectorSTF third time: " << vectorSTF.capacity() << endl;

    //output
    // capacity of vectorSTF first time: 100
    // capacity of vectorSTF second time: 100
    // capacity of vectorSTF third time: 10

}