#include<iostream>

int reverseDigits(int n, int reversed) {
    if (n == 0) {
        return reversed;
    } else {
        return reverseDigits(n / 10, reversed * 10 + n % 10);
    }
}

int main() {
    int n;
    std::cin >> n;

    int reversed = reverseDigits(n, 0);

    std::cout << reversed << "\n";

    return 0;
}
