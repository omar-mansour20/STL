#include <bits/stdc++.h>
using namespace std;

int main(){
    /*
    - Queue is a container adapter with a FIFO (First In First out) type of working.
    - When an element is inserted it is inserted at the back.
    - When an element is deleted it is deleted from the front.
    - Queues use an encapsulated object of deque or list as its underlying container.
     */

    queue<int>q;
    q.push(1);
    q.emplace(2);
    // Adds an element at the back of the queue

    q.pop();
    // Deletes an element from the front of the queue

    cout<<q.front();
    // Returns the value of the element at the front

    cout<<q.back();
    // Returns the value of the element at the back

    cout<<q.size();
    // Returns the size of the queue

    cout<<q.empty();
    // returns if the queue is empty or not

    queue<int>q2;
    q2.swap(q);
    // used to swap the contents of one queue with another queue of the same type


}


