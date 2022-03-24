
/*
Q3.WAP to implement insertion sort and find the total number of comparisions?
*/

#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the size of the array ";
  cin>>n;
  int arr[n];
  cout<<"Enter the elements of the array one by one "<<endl;
   
  //Taking input from user
  
  for(int i=0;i<n;i++) cin>>arr[i];
  
  //Sorting the array
  
  int key=arr[0]
    for(int i=1;i<n;i++)
    {
      int j=i;
      while(arr[j]<key)
      {
        arr[j-1]=arr[j]
      }
      arr[j]=key;
    }
  
  //Displaying the sorted array
  
  for(int i=0;i<n;i++) cout<<arr[i]<<"  ";
  cout<<endl;
  return 0;
}
