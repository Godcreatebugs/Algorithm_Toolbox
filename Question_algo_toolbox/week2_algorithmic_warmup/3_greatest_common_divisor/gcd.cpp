#include <iostream>

// int gcd_naive(int a, int b) {
//   int current_gcd = 1;
//   for (int d = 2; d <= a && d <= b; d++) {
//     if (a % d == 0 && b % d == 0) {
//       if (d > current_gcd) {
//         current_gcd = d;
//       }
//     }
//   }
//   return current_gcd;
// }

int GCD_Naive(int a, int b){
  int gcd = 1;
  int least = (a<b) ? a:b;
  // i can not start from 0 otherwise we will get floating point exception error which is u can not divide by 0.
  for(int i=1;i<=least;i++){
    if (a%i==0 && b%i==0){
      gcd = i;
    }
  } 
  return gcd;
}

int GCD_Fast_Euclidian(int a, int b){
   int big   = (a>b) ? a:b;
   int small = (a<b) ? a:b;
  if (small ==0) return big;
  if(big%small ==0) return small;
  else{
  while(true){
    int remainder = big %small;
    big = small;
    small = remainder; 
    if (remainder==0) return big;
    if (big<small) return big;
  }
  } 
}

int main() {
  // int a, b;
  // std::cin >> a >> b;
  // std::cout << gcd_naive(a, b) << std::endl;
  //std::cout<<GCD_Naive(28851538,1183019)<<std::endl;
  std::cout<<GCD_Fast_Euclidian(28851538,1183019)<<std::endl;
  return 0;
}
