#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

string removeDuplicates(string str) {
    unordered_set<char> uniqueChars;
    string result = "";

    for (char c : str) 
    {
        if (uniqueChars.find(c) == uniqueChars.end()) {
            uniqueChars.insert(c);
            result += c;
        }
    }
    return result;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    string result = removeDuplicates(str);
    cout << "Result: " << result << endl;
    return 0;
}
