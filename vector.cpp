#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int >v={1,2,3};
    v.push_back(4);
    // used to insert an element at the end        {1,2,3,4}

    v.pop_back();
    // used to delete the last element            {1,2,3}

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
    cout<<v.capacity();
    cout<<v.max_size();

    v.resize(4);
    v.shrink_to_fit();
    cout<<v.empty();

    cout<<v[0];
    cout<<v.at(0);

    v.assign(5,10);
    v.insert(v.begin()+2,4);
    v.emplace(v.begin()+2,4);
    v.emplace_back(4);
    vector<int>v2(v);
    //equals
    v.swap(v);

    v.erase(v.begin());
    v.erase(v.begin(),v.begin()+3)
    v.clear();









}


