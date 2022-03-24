/*
Q1.WAP to implement bubble sort and find the total number of comparisions?
*/

#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the number of elements in the array :";
  cin>>n;
  int arr[n];
  cout<<"Enter the elements of the array one by one"<<endl;
  
  //Taking input from user
  
  for(int i=0;i<n;i++) cin>>arr[i];
  
  //Sorting the entered array
  
  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
      if(arr[i]>arr[j]){
        swap(arr[i],arr[j]);
      }
    }
  }
  
  //Displaying the sorted array
  
  for(int i=0;i<n;i++)  cout<<arr[i]<<"  ";
  cout<<endl;
  return 0;
}
