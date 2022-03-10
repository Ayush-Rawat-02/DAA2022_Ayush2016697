/*
Given a positive array of sorted  elements.
Design an algorithm to find the index of elements having indices i,j,k such that : arr[i]+arr[j]=arr[k].
*/

// //MEthod 1
// #include<iostream>
// using namespace  std;

// int find(int arr[],int k,int n,int* count){
//   for(int i=0;i<n-1;i++){
//    int req=k-arr[i];
//    for(int j=i+1;j<n;j++){
//      if(arr[j]==req){
//        cout<<arr[i]<<"+"<<arr[j]<<"="<<k<<endl;
//        (*count)+=1;
//      }
//    }
//   }
//  return *count;
// } 
 
 
// int main(){
//   int n,k,count=0;
//   int arr[100];
//   cout<<"Enter the size of the array : ";
//   cin>>n;
//   cout<<"Enter the elemtnts of the array one by one : ";
//   for(int i=0;i<n;i++)  cin>>arr[i];
// //   cout<<"Enter the key : ";
// //   cin>>k;
//   for(int i=0;i<n;i++) find(arr,arr[i],n,&count);
//   cout<<"Number of pairs : "<<count<<endl;
//   return 0;
// }

//Method 2

#include<iostream>
using namespace  std;

int find(int arr[],int n){
  int count =0;
  for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
            if(arr[i]+arr[j]==arr[k]){
                cout<<arr[i]<<"+"<<arr[j]<<"="<<arr[k]<<"     ";
                cout<<"index : "<<i<<"      "<<j<<"     "<<k<<endl;
                count++;
            }
            }
        }
    } 
    return count;
}
 
 
int main(){
  int n,k,count=0;
  int arr[100];
  cout<<"Enter the size of the array : ";
  cin>>n;
  cout<<"Enter the elemtnts of the array one by one : ";
  for(int i=0;i<n;i++)  cin>>arr[i];
  count=find(arr,n);
  cout<<"Number of pairs : "<<count<<endl;
  return 0;
}
