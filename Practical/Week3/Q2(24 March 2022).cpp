/*
Q2.WAP to implement selection sort and find the total number of comparisions?
*/

#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the number of elements in the array : ";
  cin>>n;
  int arr[n];
  cout<<"Enter the elements of the array one by one"<<endl;
  
  //Taking input from user
  
  for(int i=0;i<n;i++) cin>>arr[i];
  
  //Sorting the array
  
  for(int i=0;i<n;i++){
    int min=i;
    for(int j=i+1;j<n;j++){
      if(arr[j]<arr[min]) min=j;
    }
    swap(arr[i],arr[min]);
  }
  
  //Displaying the array
  
  for(int i=0;i<n;i++) cout<<arr[i]<<"  ";
  cout<<endl;
  return 0;
}
      
