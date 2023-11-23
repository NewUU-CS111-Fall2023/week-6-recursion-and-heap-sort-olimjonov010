#include<iostream>

void printNumbers(int A, int B) {
    if (A == B) {
        std::cout << A << " ";
    } else if (A < B) {
        std::cout << A << " ";
        printNumbers(A + 1, B);
    } else {
        std::cout << A << " ";
        printNumbers(A - 1, B);
    }
}

int main() {
    // Reading input
    int A, B;
    std::cin >> A >> B;

    // Calling the function
    printNumbers(A, B);

    return 0;
}
