#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map<string, int> fruits;
    map<string, int>::const_iterator p;

    fruits["Orange"] = 300;
    fruits["Banana"] = 100;
    fruits["Apple"] = 200;

    cout << "Orange: "
        << fruits["Orange"] << "yen" << endl;
    cout << "Apple: "
        << fruits["Apple"] << "yen" << endl;

    string input;
    cout << "Please input key:";
    cin >> input;

    if(((p = fruits.find(input)) != fruits.end())) {
        cout << "fruits" << input
            << ":" << p->second << "yen" << endl;
    } else {
        cout << "fruits" << input 
            << "not found." << endl;
    }

    for(p=fruits.begin(); p != fruits.end(); p++) {
        cout << "fruits[" << p->first
            << "] = " << p->second << endl;
    }
}