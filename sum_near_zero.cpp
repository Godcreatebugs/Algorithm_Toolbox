#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int min_sum(int arr[]){
  return arr[0]+arr[1];
}
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;++i){
    cin>>arr[i]
    }
  int size_arr= sizeof(arr)/sizeof(arr[0])
    sort(arr,arr+size_arr);
  min_sum(arr);
}
