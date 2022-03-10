/*
Given an array of non negetive integers .
 Design an algorithm for it using a program to count the number of pairs of integers
 such that their difference is equal to the given key.
*/


#include<iostream>
using namespace  std;

int find(int arr[],int k,int n){
 int count=0;
  for(int i=0;i<n-1;i++){
   int req=k-arr[i];
   for(int j=i+1;j<n;j++){
     if(arr[j]==req) count++;
   }
  }
 return count;
} 
 
 
int main(){
  int n,k;
  int arr[100];
  cout<<"Enter the size of the array : ";
  cin>>n;
  cout<<"Enter the elemtnts of the array one by one : ";
  for(int i=0;i<n;i++)  cin>>arr[i];
  cout<<"Enter the key : ";
  cin>>k;
  cout<<"Number of pairs : "<<find(arr,k,n)<<endl;
  return 0;
}
