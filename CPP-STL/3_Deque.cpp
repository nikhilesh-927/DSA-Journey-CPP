#include <iostream>
#include <deque>
using namespace std;

int main(){

    unsigned int i;

    //initializatio of deque

    deque<int> dequeFirst;
    cout << "dequeFirst: ";
    for(auto x: dequeFirst) cout << x << " ";
    cout << endl;

    deque<int> dequeSecond(4, 200); // 4 elements with value 200
    cout << "dequeSecond: ";
    for(int &x: dequeSecond) cout << x << " ";
    cout << endl;

    deque<int> dequeThird (dequeSecond.begin(), dequeSecond.end()); // copying elements from dequeSecond
    // dequeSecond.begin() ----> points to the first element
    // dequeSecond.end() ----> points to the last element
    cout << "dequeThird: ";
    for(deque<int>::iterator it = dequeThird.begin(); it != dequeThird.end(); ++it) cout << *it << " ";
    cout << endl;

    deque<int> dequeFourth(dequeThird);
    int sizeFourth = sizeof(dequeFourth)/sizeof(dequeFourth[0]);
    cout << "dequeFourth: ";
    for(int i : dequeFourth) cout << i << " ";

    int myDeque[] = {16, 20, 65, 43, 28};
    deque<int> dequeFifth(myDeque, myDeque + sizeof(myDeque)/sizeof(int));
    cout << "dequeFifth: ";
    for(auto x: dequeFifth) cout << " " << x;
    cout << endl;

    //output
    // dequeFirst: 
    // dequeSecond: 200 200 200 200 
    // dequeThird: 200 200 200 200
    // dequeFourth: 200 200 200 200 dequeFifth:  16 20 65 43 28

    //deque "push_back, pop_back, push_front and pop_front" member functions

    deque<int> dequePushPop;

    for(int i = 0; i < 5; i++) dequePushPop.push_back((i+1)*5);

    cout << "dequePushPop after push_back operation: ";

    for(int &x: dequePushPop) cout << " " << x;

    cout << endl;

    for(int i = 0; i < 2; i++) dequePushPop.pop_back();

    cout << "dequePushPop after pop_back operation: ";

    for(int &x : dequePushPop) cout << " " << x;

    cout << endl;

    for(int i = 0; i < 5; i++) dequePushPop.push_front(i + 1);

    cout << "dequePushPop after push_front operation: ";

    for(int &x : dequePushPop) cout << " " << x;

    cout << endl;

    for(int i = 0; i < 3; i++) dequePushPop.pop_front();

    cout << "dequePushPop after pop_front operation: ";

    for(int &x : dequePushPop) cout << " " << x;

    cout << endl;

    //output
    // dequePushPop after push_back operation:  5 10 15 20 25
    // dequePushPop after pop_back operation:  5 10 15
    // dequePushPop after push_front operation:  5 4 3 2 1 5 10 15
    // dequePushPop after pop_front operation:  2 1 5 10 15

}