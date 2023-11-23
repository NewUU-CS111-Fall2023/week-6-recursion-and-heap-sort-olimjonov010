#include<iostream>

void secondLargest(int &second_max, int &max_num) {
    int num;
    std::cin >> num;

    if (num == 0) {
        return;
    } else {
        secondLargest(second_max, max_num);

        if (num > max_num) {
            second_max = max_num;
            max_num = num;
        } else if (num > second_max) {
            second_max = num;
        }
    }
}

int main() {
    int second_max = 0, max_num = 0;

    secondLargest(second_max, max_num);

    std::cout << second_max << "\n";

    return 0;
