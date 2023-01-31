#include <bits/stdc++.h>
using namespace std;

int main(){
    /*
    - Deque (Double-ended queue) is a sequence container.
    - Deque is a special case of queue where insertion and deletion operations are possible at both the ends.
     */

    deque<int>dq={1,2,3};
    deque<int>dq2;
    dq.push_back(4);
    dq.emplace_back(4);
    // used to insert an element at the end

    dq.pop_back();
    // used to delete the last element

    dq.push_front(4);
    dq.emplace_front(4);
    // used to insert an element at the front

    dq.pop_front();
    // used to delete the element at the front

    cout<<dq.front();
    // returns the first element of the deque

    cout<<dq.back();
    // returns the last element of the deque


    
    // Hint
    // auto -> is a keyword that specifies that the type of the variable that is being declared will be automatically deducted from its initializer


    auto it =dq.begin();
    // returns an iterator pointing to the first element in the deque

    auto it2 =dq.end();
    // returns an iterator pointing to the element that follows the last element in the deque

    auto it3 =dq.rbegin();
    // returns a reverse iterator pointing to the last element in the deque (reverse beginning) or from end to front

    auto it4 =dq.rend();
    // returns a redqerse iterator pointing to the previous element of the first element in the deque

    auto it5 =dq.cbegin();
    // returns a constant iterator pointing to the first element in the deque

    auto it6 =dq.cend();
    // returns a constant iterator pointing to the last element in the deque



    cout<<dq.size();
    // returns the number of elements in the deque

    cout<<dq.max_size();
    // returns the maximum number of elements that deque can hold

    dq.resize(4);
    // resizes the deque so that it contains n elements.

    dq.shrink_to_fit();
    // reduces the capacity of the deque to fit its size and destroys the other elements that beyond the capacity

    cout<<dq.empty();
    // returns if the deque is empty or not



    cout<<dq[0];
    // returns the element at index 0

    cout<<dq.at(0);
    // returns the element at index 0

    dq.assign(5,10);
    // assigns new value to the deque elements by replacing old ones (if there are elements in it)

    dq.insert(dq.begin(),1);
    // inserts element before the element at the specified position

    dq.insert(dq.begin(),2,1);
    // inserts 2 elements with deque 1 at begin

    dq.emplace(dq.begin()+2,4);
    // it extends the container by inserting new element at position
    // here the deque size increases by one
    

    dq2.swap(dq);
    // used to swap the contents of one deque with another deque of same type

    dq.erase(dq.begin());
    // used to remove element from a container from the specified position

    dq.erase(dq.begin(),dq.begin()+3);
    // used to remove elements from a container from the specified range

    dq.clear();
    // removes all elements of the deque and makes size=0


}



