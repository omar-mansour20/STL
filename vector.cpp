#include <bits/stdc++.h>
using namespace std;

int main(){
    /*
    - Vector is the same as array but it is dynamic which means that it has the  ability to resize itself automatically when an element is inserted or deleted
    - Vector elements are placed in contiguous memory storage
    - fast in insert and delete at the end
    - slow in insert and delete at the beginning
     */
    
    vector<int >v={1,2,3};

    vector<int>v2(v);
    // copies elements of vector v into vector v2

    v.push_back(4);
    // used to insert an element at the end        {1,2,3,4}

    v.pop_back();
    // used to delete the last element             {1,2,3}

    cout<<v.front();
    // returns the first element of the vector    (1)

    cout<<v.back();
    // returns the last element of the vector     (3)


    // Hint
    // auto -> is a keyword that specifies that the type of the variable that is being declared will be automatically deducted from its initializer

    auto it =v.begin();
    // returns an iterator pointing to the first element in the vector

    auto it2 =v.end();
    // returns an iterator pointing to the element that follows the last element in the vector

    auto it3 =v.rbegin();
    // returns a reverse iterator pointing to the last element in the vector (reverse beginning) or from end to front

    auto it4 =v.rend();
    // returns a reverse iterator pointing to the previous element of the first element in the vector

    auto it5 =v.cbegin();
    // returns a constant iterator pointing to the first element in the vector

    auto it6 =v.cend();
    // returns a constant iterator pointing to the last element in the vector



    cout<<v.size();
    // returns the number of elements in the vector

    cout<<v.capacity();
    // returns the size of the storage space currently allocated to the vector but as a number of elements

    cout<<v.max_size();
    // returns the maximum number of elements that vector can hold

    v.resize(4);
    // resizes the vector so that it contains n elements.

    v.shrink_to_fit();
    // reduces the capacity of the vector to fit its size and destroys the other elements that beyond the capacity

    cout<<v.empty();
    // returns if the vector is empty or not



    cout<<v[0];
    // returns the element at index 0

    cout<<v.at(0);
    // returns the element at index 0

    v.assign(5,10);
    // assigns new value to the vector elements by replacing old ones (if there are elements in it)

    v.insert(v.begin(),1);
    // inserts element before the element at the specified position

    v.insert(v.begin(),2,1);
    // inserts 2 elements with value 1 at begin

    v.emplace(v.begin()+2,4);
    // it extends the container by inserting new element at position
    // here the vector size increases by one

    v.emplace_back(4);
    // inserts a new element ay the end

    v2.swap(v);
    // used to swap the contents of one vector with another vector of same type

    v.erase(v.begin());
    // used to remove element from a container from the specified position

    v.erase(v.begin(),v.begin()+3);
    // used to remove elements from a container from the specified range

    v.clear();
    // removes all elements of the vector and makes size=0

}


