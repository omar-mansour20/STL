#include <bits/stdc++.h>
using namespace std;

int main(){
 /*
     - Forward list (singly linked list) is a sequence container
     - It allows only forward traversal
    */

    forward_list<int>fl={1,2,3,4,5};
    forward_list<int>fl2={6,7,8,9,10};
    int num,count,n;auto it = fl.begin(),first=fl.begin(),last=fl.end();

    fl.assign(count,num);
    // assigns new values to the list elements by replacing old ones (if there are elements in it)

    fl.front();
    // returns the first element of the list

    fl.push_front(num);
    // used to insert an element at the front

    fl.pop_front();
    // used to delete the first element

    fl.emplace_front(num);
    // it extends the container by inserting new element at position
    // here the list size increases by one


    auto it1 =fl.begin();
    // returns an iterator pointing to the first element of the list

    auto it2 =fl.end();
    // returns an iterator pointing to the element that follows the last element of the list

    auto it5 =fl.cbegin();
    // returns a constant iterator pointing to the first element in the list

    auto it6 =fl.cend();
    // returns a constant iterator pointing to the last element in the list

    auto it7 =fl.before_begin();
    // returns an iterator pointing to the position before the first element of the forward_list

    auto it8 =fl.cbefore_begin();
    //	Returns a constant iterator pointing to the position before the first element of the forward_list.


    fl.max_size();
    // returns the maximum number of elements that list can hold

    fl.resize(n);
    // resizes the list so that it contains n elements.

    fl.unique();
    // removes all duplicate consecutive elements from the list.

    fl.reverse();
    // used to reverse the elements of the list


    fl.merge(fl2);
    // merges two sorted lists into one

    fl.splice_after(fl.begin(),fl2);
    // used to transfer all elements of list(l2) into another list at some position

    fl.splice_after(fl.begin(),fl2,it);
    // used to transfer one element pointed by iterator(it) from list(l2) into another list at some position

    fl.splice_after(fl.begin(),fl2,first,last);
    // used to transfer the range (first, last) from list(l2) into another list at some position

    // Note -> in merge and splice, the list passed as a parameter will be empty


    fl.insert_after(it,num);
    // inserts an element or group of elements after the position the iterator pointing at

    fl.emplace_after(it,num);
    // inserts an element after the position the iterator pointing at without performing any copy or move operation (faster)
    // only inserts one element

    fl.swap(fl2);
    // used to swap the contents of one list with another list of same type

    fl.empty();
    // returns if the list is empty or not

    fl.erase_after(it);
    // removes the element after the position the iterator pointing at

    fl.remove(num);
    // removes the elements that equal to num from the list

    fl.remove_if(fun());
    // removes elements from the list that correspond true to the condition given as a parameter to the function.

    fl.clear();
    // removes all elements of the list and makes size=0

  
  
  
  
  
}
