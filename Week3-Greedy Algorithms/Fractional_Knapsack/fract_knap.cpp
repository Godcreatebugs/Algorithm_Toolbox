#include <iostream>
#include <vector>
//#include <algorithm>

using std::vector;
/*----->>>TRIAL AND NOT USEFUL TO USE POP METHODS WHICH IS TAKEN CARE OF BY get_index FUNCTION.
std::vector<double> ratio(vector<int> weights, vector<int> values){
  int size_weights=weights.size();
  std::vector<double> ratio_arr;
  for(int i=0;i<size_weights;++i){
    ratio_arr.push_back(values[i]/weights[i]);
  }
return ratio_arr;
}

/*
int max_ele_index(vector<int> weights, vector<int> values){
  int size_arr=weights.sizeof();
  int max_element;
  int max_ele_index;
  for(int i=0;i<size_arr,++i){
    max_element=std::max_element()
  }
}
*/
int get_index(vector<int> weights, vector<int> values){
  double max_ele=0;
  int max_index=0;
  for (int i=0;i<weights.size();++i){
    if(weights[i]>0 && (double) values[i] / weights[i]>max_ele){
      max_ele = (double) values[i] / weights[i];
      max_index= i;
    }

  }
  return max_index;
}
double get_optimal_value(int capacity, vector<int> weights, vector<int> values) {
  double value = 0.0;
  for (int i=0;i<weights.size();++i) {
    if (capacity==0) return value;
    int index=get_index(weights,values);
    int a=std::min(capacity,weights[index]);
    value +=a*(double) values[index]/weights[index];
    weights[index] -=a; //this line ensures the removal of selected material and reducing its weights, most important line of program
    capacity -=a;

  }
  // write your code here

  return value;
}

int main() {
  int n;
  int capacity;
  std::cin >> n >> capacity;
  vector<int> values(n);
  vector<int> weights(n);
  for (int i = 0; i < n; i++) {
    std::cin >> values[i] >> weights[i];
  }

  double optimal_value = get_optimal_value(capacity, weights, values);

  std::cout.precision(10);
  std::cout << optimal_value << std::endl;
  return 0;
}
/*
int main(){
  vector<int> values{20,40,60};
  vector<int> weights{20,10,20};
  std::cout << "and the ratio function";
  std::cout<<ratio(weights, values) << '\n'

  return 0;
}
*/
