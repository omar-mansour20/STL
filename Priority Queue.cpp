#include <bits/stdc++.h>
using namespace std;

int main(){
    /*
    - Priority queue is a type of container adapter.
    - It is a special kind of queue such that the first (top) element of the queue is either the greatest or the smallest of all elements in the queue.
    - Priority queue is implemented as max heap by default it also can be changed to min heap by passing another parameter while creating a priority queue.
    - Insert and remove from back of front takes const time
    - Insert and remove from the middle takes linear time

     */

    priority_queue<int>pq;
    // This priority queue is implemented as max heap

    priority_queue<int , vector<int> , greater<int> >pq2;
    // This priority queue is implemented as min heap

    pq.push(1);
    pq.emplace(2);
    // Adds an element to the queue

    pq.pop();
    // Deletes the first element of the queue


    cout<<pq.top();
    // returns the value of the element at the top

    cout<<pq.size();
    // returns the size of the queue

    cout<<pq.empty();
    // returns if the queue is empty or not

    pq.swap(pq);
    // used to swap the contents of one queue with another queue of the same type





}









