#include <iostream>
#include <string>
using std::string;
using std::cout; using std::cin; using std::endl;

void compare() {
    string s1, s2;
    cin >> s1 >> s2;
    if (s1 == s2) {
        cout << "Strings are equal." << endl;
    }
    else if (s1 > s2) {
        cout << "First string is greater." << endl;   
    }
    else {
        cout << "Second string is greater." << endl;
    }
}

void check_length() {
    string s1, s2;
    cin >> s1 >> s2;
    if (s1.size() == s2.size()) {
        cout << "The two strings have same length." << endl;
    }  
    else if (s1.size() > s2.size()) { 
        cout << "The first string is longer." << endl;
    }
    else {
        cout << "The second string is longer." << endl;
    }
        
}

int main()
{
    //compare();
    //check_length();
    return 0;
}