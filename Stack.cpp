#include <bits/stdc++.h>
using namespace std;

int main(){
    /*
    - Stack is a container adapter with a LIFO (Last In First out) type of working.
    - When an element is added to the stack it is added to the top and also deleted from the top only.
    - Stack uses an encapsulated object of deque (by default) as its underlying container.
     */
    
    stack<int>s;
    s.push(1);
    s.push(2);
    // adds an element to the top

    s.pop();
    // deletes the element at the top (most recent entered element)

    cout<<s.top();
    // returns the of the element at the top

    cout<<s.size();
    // returns the size of the stack

    cout<<s.empty();
    // returns if thr stack is empty or not

    stack<int>s2;
    s2.swap(s);
    // used to swap the contents of one stack with another stack of same type

}



