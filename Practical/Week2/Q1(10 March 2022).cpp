/*
Given a sorted array of positive integers containing few duplicate elements . 
Write a program to find whether the given key is present in the array or not . 
if found find the total number of copies of the element in the array.
*/


#include<iostream>
using namespace  std;

int find(int arr[],int k,int n){
  int s=0,e=n-1,m=(s+e)/2;
  while(s<e){
    if(k==arr[m]&&arr[m-1]!=k) break;
    else if(k<arr[m]) s=m+1;
    else  e=m-1;
    m=(s+e)/2;
  }
  if(arr[m]!=k) return -1;
  int c=0;
  while(arr[m]==k){
    c++;
    m++;
  }
  return c;
}

int main(){
  int n,k;
  int arr[100];
  cout<<"Enter the size of the array : ";
  cin>>n;
  cout<<"Enter the elemtnts of the array(sorted) one by one : ";
  for(int i=0;i<n;i++)  cin>>arr[i];
  cout<<"Enter the key : ";
  cin>>k;
  int ans=find(arr,k,n);
  if(ans!=-1) cout<<"Number of copies : "<<ans<<endl;
  else cout<<"Not found"<<endl;
  return 0;
}
