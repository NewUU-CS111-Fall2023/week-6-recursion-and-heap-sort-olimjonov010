#include<iostream>

int sumOfDigits(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n % 10 + sumOfDigits(n / 10);
    }
}

int main() {
    int N;
    std::cin >> N;

    std::cout << sumOfDigits(N) << "\n";

    return 0;
}
