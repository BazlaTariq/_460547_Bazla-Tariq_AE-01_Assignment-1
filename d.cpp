#include <iostream>
using namespace std;
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int N;
    cout << "Enter a positive integer N: ";
    cin >> N;
    int largestPrime = N;
    while (largestPrime > 1)
    {
        if (isPrime(largestPrime)) 
        {
            break;
        }
        largestPrime--;
    }
    
    cout << "The largest prime number less than or equal to " << N << " is: " << largestPrime << endl;
    
    return 0;
}
