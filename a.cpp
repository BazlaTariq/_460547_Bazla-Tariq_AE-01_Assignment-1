#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string stringa, stringb;
    cout << "Enter the first string: ";
    cin >> stringa;
    cout << "Enter the second string: ";
    cin >> stringb;
    if (stringa == stringb) 
    {
        rotate(stringa.begin(), stringa.begin() + 1, stringa.end());
        cout << "The strings are equal." << endl;
        cout << "First string after rotation: " << stringa << endl;
        cout << "Second string: " << stringb << endl;
    }
    else
    {
        cout << "The strings are already unequal." << endl;
        cout << "First string: " << stringa << endl;
        cout << "Second string: " << stringb << endl;
    }
    
    return 0;
}
