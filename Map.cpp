#include <bits/stdc++.h>
using namespace std;

int main() {
   /*
     - map is an associative container that follows binary search tree implementation
     - the keys are always sorted (ascending or descending)
     - the keys are unique (there is no repetition) ,but multimap can have repetition
     - the elements of the map cannot be modified neither be randomly accessed
     
     */

    map<int,string>m{{1,"ahmed"},{2,"ali"},{3,"kamal"}};
    map<int,string>m2{{4,"mohamed"},{5,"mahmoud"},{6,"abdo"}};
    int num; string value; auto it1 =m.begin();
    
   

    auto it =m.begin();
    // returns an iterator pointing to the first element in the map

    auto it2 =m.end();
    // returns an iterator pointing to the element that follows the last element in the map

    auto it3 =m.rbegin();
    // returns a reverse iterator pointing to the last element in the map (reverse beginning) or from end to front

    auto it4 =m.rend();
    // returns a reverse iterator pointing to the previous element of the first element in the map

    auto it5 =m.cbegin();
    // returns a constant iterator pointing to the first element in the map

    auto it6 =m.cend();
    // returns a constant iterator pointing to the last element in the map

    auto it7= m.crbegin();
    // returns a constant iterator pointing to the last element in the map

    auto it8= m.crend();
    // returns a constant iterator pointing to the position just before the first element in the map


    m.insert({num,value}); // and
    m.emplace(make_pair(num,value));
    // inserts a new element to the map
    // returns a pair of iterator and boolean value
    // if the element passed in the parameter does not exist, then the iterator points to the position where the insertion is done and the boolean value is (1)
    // if the element passed in the parameter already exists, then the iterator point to the position where the existing element is and the boolean value is (0)

    m2.insert(it,{num,value});
    // inserts a new element to the map
    // it does not specify the position where the insertion is to be done
    // it only points to a position from where the searching operation is to be started for insertion to make the process faster

    m2.insert(it,it2);
    // inserts a range of elements into another map
    // no return type => void

    m.emplace_hint(it,make_pair(num,value));
    // Returns an iterator pointing to the position where the insertion is done
    // If the element passed in the parameter already exists, then it returns an iterator pointing to the position where the existing element im.

    m.erase(num);
    // removes an element from the map

    m.erase(it);
    // erases an element that the iterator(it) pointing to

    m.erase(it1,it2);
    // erases a range of elements

    m.find(num);
    // returns an iterator pointing to the element passed in the parameter
    // if it does not exist it returns the iterator to the end

    auto lw=m.lower_bound(num);
    // returns an iterator pointing to the element passed in the parameter
    // if the element passed is not in the map, it returns an iterator pointing to the next element which is just greater than the element passed
    // if the element passed exceeds the maximum value in the map , then it returns iterator pointing to the element before the last element in the map

    auto up=m.upper_bound(num);
    // returns an iterator pointing to the element next to the element passed
    // if the element passed exceeds the maximum value in the map , then it returns iterator pointing to the last element in the map

    m.equal_range(num);
    // returns a pair of iterators : the lower and upper bound



    m.clear();
    // clears the content of the map

    m.swap(m2);
    // swaps the content of the two maps

    cout<<m.empty();
    // finds if the map is empty or not

    cout<<m.size();
    // returns the number of elements in the map

    cout<<m.max_size();
    // returns the maximum number of elements that map can hold

    m.count(num);
    // returns if the key passed in the parameter is in the map or not


}
