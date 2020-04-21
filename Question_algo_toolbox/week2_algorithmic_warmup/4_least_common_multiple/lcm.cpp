#include <iostream>

long long lcm_naive(int a, int b) {
  for (long l = 1; l <= (long long) a * b; ++l)
    if (l % a == 0 && l % b == 0)
      return l;

  return (long long) a * b;
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
//TODO:: Find LCM using GCD

long long lcm_fast(int a, int b){
  int least = (a<b) ? a:b;
  int gcm = GCD_Fast_Euclidian(a,b);
  if (least==0) return 0; 
  if (gcm==1) return a*b;
  if (gcm==least) return least;
  else {
     int rest_a = a/gcm;
     int rest_b = b/gcm;
     return gcm * rest_a *rest_b;
  }  
 

}
int main() {
  // int a, b;
  // std::cin >> a >> b;
  // std::cout << lcm_naive(a, b) << std::endl;
  std::cout<<lcm_fast(0,5)<<std::endl;
  return 0;
}
