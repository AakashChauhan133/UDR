/*
    Name        :   Aakash
    Roll Number :   2021931
 */

#include <iostream>
#include <list>
#include <vector>
#include <map>
using namespace std;

int main() {
    // STL
    cout << "******* OUTPUT ******* " << endl;
    list<int> myList = {10, 20, 30};
    myList.push_front(5);

    for (const auto& element : myList) {
        cout << element << " ";
    }
    cout << endl;

    // std::vector
    vector<int> myVector = {40, 50, 60};
    myVector.push_back(70);

    for (const auto& element : myVector) {
        cout << element << " ";
    }
    cout << endl;

    // std::map
    map<string, int> myMap = {{"one", 1}, {"two", 2}, {"three", 3}};

    cout << "Value corresponding to key 'two': " << myMap["two"] << std::endl;

    for (const auto& pair : myMap) {
        cout << "(" << pair.first << ": " << pair.second << ") ";
    }
    cout << std::endl;

    return 0;
}
