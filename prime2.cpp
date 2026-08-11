#include <iostream>

int main() {
    int arr[10], count = 0;

    for (int i = 0; i < 10; i++) {
        std::cout << "Enter a number: ";
        std::cin >> arr[i];
    }

    for (int i = 0; i < 10; i++) {
        bool isPrime = true;

        if (arr[i] < 2) {
            isPrime = false;
        }

        for (int j = 2; j < arr[i]; j++) {
            if (arr[i] % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            count++;
        }
    }

    std::cout << "Number of prime numbers: " << count;

    return 0;
}