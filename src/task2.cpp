#include<iostream>

bool isPowerOfTwo(int n) {
    if (n == 1) {
        return true;
    } else if (n % 2 == 0 && n > 0) {
        return isPowerOfTwo(n / 2);
    } else {
        return false;
    }
}

int main() {
    // Reading input
    int N;
    std::cin >> N;

    // Checking if N is an exact power of two
    if (isPowerOfTwo(N)) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }

    return 0;
}
