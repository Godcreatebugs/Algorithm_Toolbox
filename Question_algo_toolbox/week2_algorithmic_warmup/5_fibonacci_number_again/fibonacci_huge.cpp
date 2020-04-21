#include <iostream>

long long get_fibonacci_huge_naive(long long n, long long m) {
    if (n <= 1)
        return n;

    long long previous = 0;
    long long current  = 1;
    long long current_modulo;
    for (long long i = 0; i < n - 1; ++i) {
        long long tmp_previous = previous;
        previous = current;
        long long tmp_previous_modulo = tmp_previous %m;
        long long previous_modulo = previous %m; 
        current = tmp_previous + current;
        long long current_modulo = (tmp_previous_modulo + previous_modulo) % m; 
        std::cout<<current_modulo<<std::endl;
    }

    return current_modulo;
}

int main() {
    long long n, m;
    std::cin >> n >> m;
    std::cout << get_fibonacci_huge_naive(n, m) << '\n';
}
