#include <iostream>
#include <vector>
#include <cstdlib>

using std::cout;
using std::cin;
using std::vector;

int MaxPairwiseProduct(const vector<int> &vect, int n){
    int max_sum = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int mid_sum=vect.at(i)*vect.at(j);
            if(max_sum<mid_sum){
                max_sum = mid_sum;
            }
        }
    }
    return max_sum;
}


long long MaxPairwiseProductEfficient(const vector<int> &vect, int n){
    long long max_sum = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            //very imporatnt line which sjows how to type cast variable especialy pay attention to paranthesis. 
            long long mid_sum = (long long)(vect.at(i) )  * (vect.at(j)) ;
            if(max_sum<mid_sum){
                max_sum = mid_sum;
            }
        }
    }
    return max_sum;
}

// int FindMax(const vector<int> numbers.n){
//  int max_num=numbers[0];
//  for(int i=0; i<n-1;i++){
//      if(numbers[i+1] > max_num ){
//          max_sum = numbers[i+1];
//      }
//     return max_sum;  
//  }



long long MaxPairwiseProductEfficientFast(const vector<int> &vect, int n){
    long long max_sum = 0;
    int max_index1=-1;
    int max_index2=-1;
    
    // if (n==2){
    //     return (long long) vect[0] * vect [1]; 
    // }
    for(int i=0;i<n;i++){
        if (   (max_index1==-1) ||   (vect[i]>vect[max_index1]) ){
            max_index1 = i; 
            // cout<<max_index1;
        }
    }
    
    for(int j=0;j<n;j++){
        if(  (max_index2==-1 || vect[j]>vect[max_index2] ) &&   j!=max_index1  ){
            max_index2 = j;
            // cout<<max_index2;
        }
    }
    max_sum = (long long) vect[max_index1] * vect[max_index2];
    return max_sum;
    // return max_sum;
}

int main(){
    //stress testing 
    while(true){
        int n =rand() % 3 +2;
        vector <int> a;
        for(int i=0;i<n;i++){
            a.push_back(rand()%10);
        } 
        long long answer1 = MaxPairwiseProductEfficient(a,n);
        long long answer2 = MaxPairwiseProductEfficientFast(a,n); 
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        if(answer1 != answer2){
           cout<<"answer 1  is "<<answer1<<" and answer 2 is "<<answer2<<"\n";
           break;
        }
        else{
           cout<<"Test Pass!"<<"\n";
    }

    }
    // int n=0;
    // cin>>n;
    // vector<int> vect(n,0);
    // for(int i=0;i<n;i++){
    //     cin>>vect[i];
    // }  
    // long long c= MaxPairwiseProductEfficientFast(vect,n);
    // cout<<c;
    // return 0;

}