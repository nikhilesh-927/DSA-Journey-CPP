#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main() {

    //Map ----> A map is used to store key-value pairs, where each key is unique.

    //Basic Syntax

    //map<KeyType, ValueType> mapName;

    map<string, int> map1;

    //Inserting elements in the map

    map1["Alice"] = 21;  //using [] operator
    map1.insert({"Bob", 22}); //using insert() function
    map1["Charlie"] = 23;

    //Accessing elements in the map

    cout << "Alice's age is: " << map1["Alice"] << endl;

    cout << "Bob's age is: " << map1["Bob"] << endl;

    cout << "Charlie's age is: " << map1["Charlie"] << endl;

    //output

    // Alice's age is: 21
    // Bob's age is: 22
    // Charlie's age is: 23


    //Finding an element in the map

    auto it = map1.find("Bob");

    if(it != map1.end()){
        cout << "Bob's age is: " << it->second << endl; //Accessing the value using iterator
    }
    else{
        cout << "Bob not found in the map" << endl;
    }

    //output

    //Bob's age is: 22


    //Iterating over the map

    cout << "All entries in the map are : " << endl;

    for(const auto &x : map1){
        cout << x.first << " : " << x.second << endl;
    }

    //output

    // All entries in the map are :
    // Alice : 21
    // Bob : 22
    // Charlie : 23

    //Erasing an element from the map

    map1.erase("Alice");

    cout << "Size of map: " << map1.size() << endl;

    //Clearing the map

    map1.clear();

    cout << "Size of map after clearing: " << map1.size() << endl;

    //output

    // Size of map: 2
    // Size of map after clearing: 0

    map<int, int> testing;

    vector<int> arr = {1, 3, 3, 1, 4, 5, 4};

    for(const int & x: arr){
        if(testing.find(x) == testing.end()){
            testing[x];
        }
    }

    cout << "The testing map is: { ";

    for(const auto &x : testing) cout << "{" << x.first << " : " << x.second << "},";

    cout << " }";

    cout << endl;

    return 0;
}