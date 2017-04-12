// Created by bothmena on 05/04/17.

#include <iostream>
#include <map>

using namespace std;

int main() {
    // create a vector to store int
    map<string, char> grade_list;

    grade_list["John"] = 'B';
    // John's grade improves
    grade_list["John"] = 'A';

    grade_list.erase("John");

    cout << "The class is size " << grade_list.size() << endl;

    grade_list.clear(); // would remove all students from the grade_list.
    grade_list.empty(); // empty returns true if the map is empty; it returns false otherwise.

    if (grade_list.find("Tim") == grade_list.end()) {
        std::cout << "Tim is not in the map!" << endl;
    }

    map<string, char>::iterator iterator_name;

    grade_list["John"] = 'A';
    // Should be John
    cout<<grade_list.begin()->first<<endl;
    // Should be A
    cout<<grade_list.begin()->second<<endl;
}
