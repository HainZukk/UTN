#include <iostream>
using namespace std;

int main() {
    int num;
    int firstEven = 0, firstEvenPos = 0;
    int lastPrime = 0, lastPrimePos = 0;
    bool isPrime;
    
    for (int i = 1; i <= 7; i++) {
        cin >> num;
        
        if (firstEven == 0 && num % 2 == 0) {
            firstEven = num;
            firstEvenPos = i;
        }
        
        isPrime = true;
        
        if (num <= 1) {
            isPrime = false;
        }
        else {
            for (int j = 2; j * j <= num; j++) {
                if (num % j == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        
        if (isPrime) {
            lastPrime = num;
            lastPrimePos = i;
        }
    }
    
    if (firstEven != 0) {
        cout << "Primer número par: " << firstEven << " ubicación " << firstEvenPos << "." << endl;
    }
    else {
        cout << "No se encontró ningún número par." << endl;
    }
    
    if (lastPrime != 0) {
        cout << "Último primo: " << lastPrime << " ubicación " << lastPrimePos << "." << endl;
    }
    else {
        cout << "No se encontró ningún número primo." << endl;
    }
    
    return 0;
}