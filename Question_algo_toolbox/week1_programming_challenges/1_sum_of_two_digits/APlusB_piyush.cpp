#include <iostream>

using std::cout;
using std::cin;

int SumOfTwoNumbers(int a, int b){
    return a+b;
}
int main(){
   //always intialize the integers, float with the zeros and so it will not aquire any previous values on the heap..
   int a=0;
   int b=0;
   cin>>a>>b;
   int c= SumOfTwoNumbers(a,b);
   cout<<c;
  return 0;

}    