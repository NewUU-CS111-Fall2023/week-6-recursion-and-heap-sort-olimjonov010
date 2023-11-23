#include <iostream>
#include <cmath>

int numDigits(long long n) {
    return n == 0 ? 1 : static_cast<int>(std::log10(n) + 1);
}

void splitNumber(long long num, int position, long long &high, long long &low) {
    long long power = static_cast<long long>(std::pow(10, position));
    high = num / power;
    low = num % power;
}

long long karatsuba(long long x, long long y) {
    if (x < 10 || y < 10) {
        return x * y;
    }

    int n = std::max(numDigits(x), numDigits(y));
    int m = (n + 1) / 2;

    long long a, b, c, d;
    splitNumber(x, m, a, b);
    splitNumber(y, m, c, d);

    long long ac = karatsuba(a, c);
    long long bd = karatsuba(b, d);
    long long ad_plus_bc = karatsuba(a + b, c + d) - ac - bd;

    return ac * static_cast<long long>(std::pow(10, 2 * m)) + ad_plus_bc * static_cast<long long>(std::pow(10, m)) + bd;
}

int main() {
    long long num1, num2;
    std::cin >> num1 >> num2;

    long long result = karatsuba(num1, num2);

    std::cout << result << std::endl;

    return 0;
}
