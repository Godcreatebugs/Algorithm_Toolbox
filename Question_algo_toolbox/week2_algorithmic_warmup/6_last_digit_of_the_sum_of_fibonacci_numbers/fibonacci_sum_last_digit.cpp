#include <iostream>

int fibonacci_sum_naive(long long n) {
    if (n <= 1)
        return n;
// You can divide with as many 10s as you want and you can achieve the same result but algorithms gets faster as it has to carry number from 0 to 9 only through each loop 
// which is easier.
    long long previous = 0;
    long long current  = 1;
    long long sum      = 1;

    for (long long i = 0; i < n - 1; ++i) {
        long long tmp_previous = previous %10;
        previous = current%10;
        current = (tmp_previous + current)%10;
        sum += current%10;
    }

    return sum%10 ;
}


int main() {
    long long n = 0;
    std::cin >> n;
    std::cout << fibonacci_sum_naive(n);
}
