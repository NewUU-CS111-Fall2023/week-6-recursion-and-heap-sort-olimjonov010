#include<iostream>
#include <string>

bool isPalindrome(const std::string& word, int start, int end) {
    if (start >= end) {
        return true;
    } else if (word[start] != word[end]) {
        return false;
    } else {
        return isPalindrome(word, start + 1, end - 1);
    }
}

int main() {
    std::string input;
    std::cin >> input;

    if (isPalindrome(input, 0, input.length() - 1)) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }

    return 0;
}
