#include<iostream>

bool isPrime(int n, int i = 2) {
    if (n <= 2) {
        return (n == 2);
    } else if (n % i == 0) {
        return false;
    } else if (i * i > n) {
        return true;
    } else {
        return isPrime(n, i + 1);
    }
}

int main() {
    int n;
    std::cin >> n;

    if (isPrime(n)) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }

    return 0;
}
