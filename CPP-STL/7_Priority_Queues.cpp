#include<iostream>
#include<queue>
#include<vector>

using namespace std;

int main(){

    //Priority Queue ----> A priority queue is a data structure that operates similarly to a regular queue but with an added feature:
    // every element in a priority queue has a "priority" associated with it.
    // Elements with higher priority are served before those with lower priority.

    //Unlike a regular queue, elements in a priority queue are not processed in the order they are added.
    //they are processed based on their priority.

    //In C++, the priority_queue is a template class that allows us
    // to create a priority queue with specific behaviors.

    //The priority_queue template has the following structure:
    //template <class T, class Container = std::vector<T>, class Compare = std::less<T>> class priority_queue;

    //T: This is the type of the elements stored in the priority queue (e.g., int, std::string, or any user-defined type).
    //Container: This is the type of container that will be used to hold the elements. The default is std::vector<T>.
    //Compare: This is the comparison function to determine the priority of elements (e.g., std::greater<T> or std::less<T>).
    // The default Compare is std::less<T>, which means the priority_queue will be a max heap by default.



    //Create a max-heap priority queue (default behaviour)

    priority_queue<int> maxHeap;

    maxHeap.push(10);
    maxHeap.push(40);
    maxHeap.push(20);
    maxHeap.push(30);

    cout << "Size of maxHeap: " << maxHeap.size() << endl;

    cout << "Top element before popping: " << maxHeap.top() << endl;

    maxHeap.pop();

    cout << "Top element after popping: " << maxHeap.top() << endl;

    //output

    //Size of maxHeap: 4
    // Top element before popping: 40
    // Top element after popping: 30


    //Create a min-Heap priority queue

    priority_queue<int, vector<int>, greater<int>> minHeap;

    minHeap.push(10);
    minHeap.push(15);
    minHeap.push(5);
    minHeap.push(20);

    cout << "Top element of minHeap before popping: " << minHeap.top() << endl;

    minHeap.pop();

    cout << "Top element of minHeap after popping: " << minHeap.top() << endl;

    //output

    // Top element of minHeap before popping: 5
    // Top element of minHeap after popping: 10


    //Accessing all elements of a priority queue

    priority_queue<int> pqTest;

    pqTest.push(10);
    pqTest.push(30);
    pqTest.push(25);
    pqTest.push(15);

    cout << "Full priority queue: ";

    while(!pqTest.empty()){
        cout << pqTest.top() << " ";
        pqTest.pop();
    }

    cout << endl;

    //output

    //Full priority queue: 30 25 15 10

    return 0;
}