//
// Created by bothmena on 17/02/17.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    // create a vector to store int
    vector<int> vec;
    int i;

    // display the original size of vec
    cout << "vector size = " << vec.size() << endl;

    // push 5 values into the vector
    for(i = 0; i < 5; i++){
        vec.push_back(i);
    }

    // display extended size of vec
    cout << "extended vector size = " << vec.size() << endl;

    // access 5 values from the vector
    for(i = 0; i < 5; i++){
        cout << "value of vec [" << i << "] = " << vec[i] << endl;
    }

    // use iterator to access the values
    vector<int>::iterator v = vec.begin();
    while( v != vec.end()) {
        cout << "value of v = " << *v << endl;
        v++;
    }

    return 0;
}

int mainTwo()
{
    std::vector<int> q;
    q.push_back(10); q.push_back(11); q.push_back(12);

    std::vector<int> v;
    for(int i=0; i<5; ++i){
        v.push_back(i);
    }
    // v contains 0 1 2 3 4

    std::vector<int>::iterator it = v.begin() + 1;
    // insert 33 before the second element:
    it = v.insert(it, 33);
    // v contains 0 33 1 2 3 4
    // it points to the inserted element
    //insert the contents of q before the second element:
    v.insert(it, q.begin(), q.end());
    // v contains 0 10 11 12 33 1 2 3 4
    // iterator 'it' is invalid

    it = v.begin() + 3;
    // it points to the fourth element of v
    // insert three time -1 before the fourth element:
    v.insert(it, 3, -1);
    // v contains 0 10 11 -1 -1 -1 12 33 1 2 3 4
    // iterator 'it' is invalid
    // erase the fifth element of v
    it = v.begin() + 4;
    v.erase(it);
    // v contains 0 10 11 -1 -1 12 33 1 2 3 4
    // iterator 'it' is invalid
    // erase the second to the fifth element:
    it = v.begin() + 1;
    v.erase(it, it + 4);
    // v contains 0 12 33 1 2 3 4
    // iterator 'it' is invalid
    // clear all of v's elements
    v.clear();

    return 0;
}
