#include <iostream>

int fibonacci_sum_squares_naive(long long n) {
    if (n <= 1)
        return n;

    long long previous = 0;
    long long current  = 1;
    long long sum      = 1;

    for (long long i = 0; i < n - 1; ++i) {
        long long tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
        sum += current * current;
    }

    return sum % 10;
}
long long fibonacci_fast(int n) {
    // write your code here
    if (n<=1) return n;
    if (n>1){
        long long F0=0,F1=1,F2;
        for(int i=2;i<=n;i++){
            F2=F0+F1;
            F0=F1;
            F1=F2;
        } 
    return F2;
    } 
}
// Faster algorithm uses a different kind of lemma in which we calculate the area of the rectangle made by fibonacci series and this has been shown in the pdf
long long fibonacci_sum_squares_fast(long long n) {
    long long sum_odd  = 0;
    long long sum_even = 0;
    for(long long i=0;i<n;i++){
        if (i%2 !=0){
            sum_odd += fibonacci_fast(i)%10;
            sum_odd %=10;  
        } 
        if (i%2 ==0) {
            sum_even += fibonacci_fast(i) %10;
            sum_even %=10; 
        }
    }
    long long last_sum = sum_even + sum_odd %10; 
    // we need area from even and odd places fibonnaci number
    return (last_sum)%10;
}
int main() {
    long long n = 0;
    std::cin >> n;
    //std::cout << fibonacci_sum_squares_naive(n);
    std::cout << fibonacci_sum_squares_fast(n);
}
