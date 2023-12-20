#include <iostream>
using namespace std;

int main() {
    const int maxSize = 10; 
    int a[maxSize] = {1, 2, 3, 4, 5}; 
    int size = 5; 
    cout << "Initial elements: ";
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Enter additional elements (Enter -1 to stop): ";
    int newElement;
    while (size < maxSize) {
        cin >> newElement;
        if (newElement == -1) {
            break; 
        }
        a[size] = newElement;
        size++; 
    }
    cout << "Final elements: ";
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}