#include <bits/stdc++.h>
using namespace std;

int main(){
  /*
  - List (doubly linked list) is a sequence container that allows non-contiguous memory allocation
  - The same functions as vector but there are more !
  */
   list<int>l={1,2,3,4,5};
    list<int>l2={6,7,8,9,10};
    int num,n;
    list<int>::iterator it,first,last;

    l.push_back(num);
    // used to insert an element at the end

    l.push_front(num);
    // used to insert an element at the front

    l.pop_front();
    // used to delete the first element

    l.pop_back();
    // used to delete the last element

    cout<<l.front();
    // returns the first element of the list

    cout<<l.back();
    // returns the last element of the list



    auto it =l.begin();
    // returns an iterator pointing to the first element of the list

    auto it2 =l.end();
    // returns an iterator pointing to the element that follows the last element of the list

    auto it3 =l.rbegin();
    // returns a reverse iterator pointing to the last element in the list (reverse beginning)

    auto it4 =l.rend();
    // returns a reverse iterator pointing to the previous element of the first element in the list

    auto it5 =l.cbegin();
    // returns a constant iterator pointing to the first element in the list

    auto it6 =l.cend();
    // returns a constant iterator pointing to the last element in the list


    l.merge(l2);
    // merges two sorted lists into one

    l.splice(l.begin(),l2);
    // used to transfer all elements of list(l2) into another list at some position

    l.splice(l.begin(),l2,it);
    // used to transfer one element pointed by iterator(it) from list(l2) into another list at some position

    l.splice(l.begin(),l2,first,last);
    // used to transfer the range (first, last) from list(l2) into another list at some position

    // Note -> in merge and splice, the list passed as a parameter will be empty 


    cout<<l.size();
    // returns the number of elements in the list

    cout<<l.max_size();
    // returns the maximum number of elements that list can hold

    l.resize(n);
    // resizes the list so that it contains n elements.

    cout<<l.empty();
    // returns if the list is empty or not

    l.unique();
    // removes all duplicate consecutive elements from the list.



    l.assign(5,10);
    // assigns new value to the list elements by replacing old ones (if there are elements in it)

    l.insert(l.begin(),num);
    // inserts element before the element at the specified position

    l.insert(l.begin(),2,num);
    // inserts 2 elements with value num at begin

    l.emplace_front(num);
    // it extends the container by inserting new element at position
    // here the list size increases by one

    l.emplace_back(num);
    // inserts a new element ay the end

    l.swap(l2);
    // used to swap the contents of one list with another list of same type

    l.erase(l.begin());
    // used to remove element from a container from the specified position

    l.erase(l.begin(),l.end());
    // used to remove elements from a container from the specified range

    l.remove(num);
    // removes the elements that equal to num from the list

    l.remove_if(fun());
    // removes elements from the list that correspond true to the condition given as a parameter to the function.

    l.clear();
    // removes all elements of the list and makes size=0


  
  
  
  
  
}
