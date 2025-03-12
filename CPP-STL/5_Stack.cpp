#include <iostream>
using namespace std;

#include <vector>
#include <stack>

int main(){

    vector<int> vector1(3, 100);

    deque<int> deque1(3, 200);

    stack<int> stack1; //empty stack

    cout << "Size of stack1: " << stack1.size() << endl;

    //output

    //Size of stack1: 0


    stack<int> stack2(deque1); //stack initialized with deque

    cout << "stack2, initialized with deque: ";

    while(!stack2.empty()){
        cout << stack2.top() << " ";
        stack2.pop();
    }

    cout << endl;

    //output

    //stack2, initialized with deque: 200 200 200 


    stack<int, vector<int>> stack3(vector1); //initializing stack with vector

    cout << "stack3, initialized with vector: ";

    while(!stack3.empty()){
        cout << stack3.top() << " ";
        stack3.pop();
    }

    cout << endl;

    //output

    //stack3, initialized with vector: 100 100 100 


    //stack initialized as string

    stack<string> stackStr;

    stackStr.push("Mumbai");

    stackStr.push("Delhi");

    stackStr.push("Kolkata");

    cout << "Top element of stackStr: " << stackStr.top() << endl;

    //output

    //Top element of stackStr: Kolkata


    stackStr.pop();

    cout << "Now top element of stackStr after popping: " << stackStr.top() << endl;

    //output

    //Now top element of stackStr after popping: Delhi


    cout << "Size of stackStr: " << stackStr.size() << endl;

    //output

    //Size of stackStr: 2


    cout << "stackStr empty or not: " << stackStr.empty() << endl;

    //output

    //stackStr empty or not: 0

    return 0;
}