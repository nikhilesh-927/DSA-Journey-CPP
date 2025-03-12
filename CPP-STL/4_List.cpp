#include <iostream>
using namespace std;
#include <list>

int main(){

    list<int> list1;

    for(int i = 0; i < 10; i++){
        list1.push_back(i + 1);
    }

    cout << "list1: ";

    for(list<int>::iterator it = list1.begin(); it != list1.end(); it++){
        cout << *it << " ";
    }

    cout << endl;

    //output

    //list1: 1 2 3 4 5 6 7 8 9 10 

    cout << "After popping 3 elements form the beginning: ";

    for(int i = 0; i < 3; i++){

        list1.pop_front();
    }

    for(list<int>::iterator it = list1.begin(); it != list1.end(); it++){

        cout << *it << " ";
    }

    cout << endl;

    //output

    //After popping 3 elements form the beginning: 4 5 6 7 8 9 10


    cout << "After pushing 3 elements at the beginning: ";

    for(int i = 0; i < 3; i++){

        list1.push_front(i + 1);
    }

    for(list<int>::iterator it = list1.begin(); it != list1.end(); it++){
        cout << *it << " ";
    }

    cout << endl;

    //output

    //After pushing 3 elements at the beginning: 3 2 1 4 5 6 7 8 9 10


    cout << "After popping 3 elements from the end: ";

    for(int i = 0; i < 3; i++){
        list1.pop_back();
    }

    for(list<int>::iterator it = list1.begin(); it != list1.end(); it++){
        cout << *it << " ";
    }

    cout << endl;

    //output

    //After popping 3 elements from the end: 3 2 1 4 5 6 7


    //list member functions

    list<int> list2;

    cout << "Size of list2 first time: " << list2.size() << endl;

    for(int i = 0; i < 10; i++){
        list2.push_back(i + 1);
    }

    cout << "Size of list2 after pushing 10 elements: " << list2.size() << endl;

    //output

    //Size of list2 first time: 0
    //Size of list2 after pushing 10 elements: 10


    //for merging two lists, both lists should be sorted

    list1.sort();
    list2.sort();

    list2.merge(list1);

    cout << "list2 after merging with list1: ";

    for(list<int>::iterator it = list2.begin(); it != list2.end(); it++){
        cout << *it << " ";
    }

    cout << endl;

    //output

    //list2 after merging with list1: 1 1 2 2 3 3 4 4 5 5 6 6 7 7 8 9 10


    //reversing the list

    list2.reverse();

    cout << "list2 after reversing: ";

    for(list<int>::iterator it = list2.begin(); it != list2.end(); it++){
        cout << *it << " ";
    }

    cout << endl;

    //output

    //list2 after reversing: 10 9 8 7 7 6 6 5 5 4 4 3 3 2 2 1 1


    //removing elements from the list

    list2.remove(5);
    list2.remove(8);

    cout << "list2 after removing 5 and 8: ";

    for(list<int>::iterator it = list2.begin(); it != list2.end(); it++){
        cout << *it << " ";
    }

    cout << endl;

    //output

    //list2 after removing 5 and 8: 10 9 7 7 6 6 4 4 3 3 2 2 1 1


    //removing elements from the list based on a condition

    list2.remove_if([](int x){ return x % 2 == 0; });

    cout << "list2 after removing even elements: ";

    for(list<int>::iterator it = list2.begin(); it != list2.end(); it++){
        cout << *it << " ";
    }

    cout << endl;

    //output

    //list2 after removing even elements: 9 7 7 3 3 1 1


    //splicing elements

    list<int> list3 = {1, 2, 3, 4, 5};

    list2.splice(list2.begin(), list3);

    cout << "list2 after splicing list1 at the beginning: ";

    for(list<int>::iterator it = list2.begin(); it != list2.end(); it++){
        cout << *it << " ";
    }

    cout << endl;

    //output

    //list2 after splicing list1 at the beginning: 1 2 3 4 5 9 7 7 3 3 1 1


    list<int> list4 = {8, 8, 8, 8, 8};

    auto it = next(list2.begin(), 2);

    list2.splice(it, list4);

    cout << "list2 after splicing list4 at 3rd position: ";

    for(list<int>::iterator it = list2.begin(); it != list2.end(); it++){
        cout << *it << " ";
    }

    cout << endl;

    //output

    //list2 after splicing list4 at 3rd position: 1 2 8 8 8 8 8 3 4 5 9 7 7 3 3 1 1 


    //sorting elements

    list2.sort();

    //unique elements

    list2.unique();

    cout << "list2 after removing duplicates: ";

    for(list<int>::iterator it = list2.begin(); it != list2.end(); it++){
        cout << *it << " ";
    }   

    cout << endl;

    //output

    //list2 after removing duplicates: 1 2 3 4 5 7 8 9

    return 0;
}