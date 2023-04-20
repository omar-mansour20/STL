#include <bits/stdc++.h>
using namespace std;

int main() {
    FAST();
    set<int>s={1,2,3,4};set<int>s2;
    int num; auto it1 =s.begin();
    /*
     - set is an associative container that follows binary search tree implementation
     - the elements are always sorted (ascending or descending)
     - the elements are unique (there is no repetition) ,but multiset can have repetition
     - the elements of the set cannot be modified neither be randomly accessed
     */
    
    
    auto it =s.begin();
    // returns an iterator pointing to the first element in the set

    auto it2 =s.end();
    // returns an iterator pointing to the element that follows the last element in the set

    auto it3 =s.rbegin();
    // returns a reverse iterator pointing to the last element in the set (reverse beginning) or from end to front

    auto it4 =s.rend();
    // returns a reverse iterator pointing to the previous element of the first element in the set

    auto it5 =s.cbegin();
    // returns a constant iterator pointing to the first element in the set

    auto it6 =s.cend();
    // returns a constant iterator pointing to the last element in the set

    auto it7= s.crbegin();
    // returns a constant iterator pointing to the last element in the set

    auto it8= s.crend();
    // returns a constant iterator pointing to the position just before the first element in the set
    
    

    s.insert(num); // and
    s.emplace(num);
    // inserts a new element to the set
    // returns a pair of iterator and boolean value
    // if the element passed in the parameter does not exist, then the iterator points to the position where the insertion is done and the boolean value is (1)
    // if the element passed in the parameter already exists, then the iterator point to the position where the existing element is and the boolean value is (0)
    
    s2.insert(it,num);
    // inserts a new element to the set
    // it does not specify the position where the insertion is to be done
    // it only points to a position from where the searching operation is to be started for insertion to make the process faster

    s2.insert(it,it2);
    // inserts a range of elements into another set
    // no return type => void

    s.emplace_hint(it,num);
    // Returns an iterator pointing to the position where the insertion is done
    // If the element passed in the parameter already exists, then it returns an iterator pointing to the position where the existing element is.

    s.erase(num);
    // removes an element from the set

    s.erase(it);
    // erases an element that the iterator(it) pointing to

    s.erase(it1,it2);
    // erases a range of elements

    s.find(num);
    // returns an iterator pointing to the element passed in the parameter
    // if it does not exist it returns the iterator to the end

    auto lw=s.lower_bound(num);
    // returns an iterator pointing to the element passed in the parameter
    // if the element passed is not in the set, it returns an iterator pointing to the next element which is just greater than the element passed
    // if the element passed exceeds the maximum value in the set , then it returns iterator pointing to the element before the last element in the set

    auto up=s.upper_bound(num);
    // returns an iterator pointing to the element next to the element passed
    // if the element passed exceeds the maximum value in the set , then it returns iterator pointing to the last in the set

    s.equal_range(num);
    // returns a pair of iterators : the lower and upper bound
    
    
    
    s.clear();
    // clears the content oif the set

    s.swap(s2);
    // swaps the content of the two sets

    cout<<s.empty();
    // finds if the set is empty or not

    cout<<s.size();
    // returns the number of elements in the set
    
    cout<<s.max_size();
    // returns the maximum number of elements that set can hold

    s.count(num);
    // returns if the element passed in the parameter is in the set or not


}


