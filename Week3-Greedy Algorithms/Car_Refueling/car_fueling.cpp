#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;
using std::max;
/*
This seems to be an O(n**2)<because of 2 while loops> algorithm but it is O(n) algorithm.
The reason is currentRefill at max is (n-1) as we can only refill n-1 times as nth stop is last point to be reached
Hence there is no point refuelling at last point.
And the internal while loop also iteartes on O(n) times and hence total time taken is O(n+1)
and ignoring constants it is O(n). Cuz we have single lines for the while loops to execute.
*/
int compute_min_refills(int dist, int tank, vector<int> stops) {
    // write your code here
    int numRefill=0;
    int currentRefill=0;
    int lastRefill=0;
    int n=stops.size();
    while (currentRefill<=n-1){
      lastRefill=currentRefill;
      while (currentRefill<=n-1 && ( stops[currentRefill+1] - stops[lastRefill] <=tank) ){
        currentRefill ++;
        if (currentRefill==(n-1))
           break;
      }
    if (currentRefill==lastRefill) return -1;
    if (currentRefill<=n-1) numRefill++;


    }
  return numRefill;
}


int main() {
    int d = 0;
    cin >> d;
    int m = 0;
    cin >> m;
    int n = 0;
    cin >> n;

    vector<int> stops(n);
    for (size_t i = 0; i < n; ++i)//using size_t as we dont know the bit size of n
        cin >> stops.at(i);

    cout << compute_min_refills(d, m, stops) << "\n";

    return 0;
}
