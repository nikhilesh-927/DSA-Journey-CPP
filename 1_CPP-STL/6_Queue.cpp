#include <iostream>

using namespace std;
#include <queue>

int main(){

    queue<int> queue1;

    for(int i = 0; i < 5; i++){
        queue1.push(i + 1);
    }

    cout << "Size of queue1: " << queue1.size() << endl;

    cout << "Front element of queue1: " << queue1.front() << endl;

    cout << "Last element of queue1: " << queue1.back() << endl;

    cout << "Full queue1: ";

    while(!queue1.empty()){
        cout << queue1.front() << " ";
        queue1.pop();
    }

    cout << endl;

    //output
    //Size of queue1: 5
    // Front element of queue1: 1
    // Last element of queue1: 5
    // Full queue1: 1 2 3 4 5

    //initializing queue as string

    queue<string> queue2;

    queue2.push("Bread");

    queue2.push("Butter");

    queue2.push("Jam");

    cout << "Size of queue2: " << queue2.size() << endl;

    cout << "Front element of queue2: " << queue2.front() << endl;

    cout << "Last element of queue2: " << queue2.back() << endl;

    cout << "Original queue2: ";

    while(!queue2.empty()){
        cout << queue2.front() << " ";
        queue2.pop();
    }

    cout << endl;

    //output

    //Size of queue2: 3
    // Front element of queue2: Bread
    // Last element of queue2: Jam
    // Original queue2: Bread Butter Jam 

    //pop operation

    queue<string> queue3;

    queue3.push("Table");

    queue3.push("Chair");

    queue3.push("Sofa");

    cout << "Before popping front element: " << queue3.front() << endl;

    cout << "Before popping last element: " << queue3.back() << endl;

    queue3.pop();

    cout << "After popping front element: " << queue3.front() << endl;

    cout << "After popping last element: " << queue3.back() << endl;

    //output

    //Before popping front element: Table
    // Before popping last element: Sofa
    // After popping front element: Chair
    // After popping last element: Sofa

    return 0;
}   