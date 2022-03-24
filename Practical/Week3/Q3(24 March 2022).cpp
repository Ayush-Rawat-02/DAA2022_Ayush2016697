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
  
  //Sorting the array and counting the number of comparisons
  
    int count=0;
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0&&arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
            count++;
        }
        arr[j+1]=key;
//         cout<<"Loop no "<<i<<endl;
//         for(int i=0;i<n;i++) cout<<arr[i]<<"  ";
//         cout<<endl;
    }
  
  //Displaying the sorted array and the number of comparisons
  
  for(int i=0;i<n;i++) cout<<arr[i]<<"  ";
  cout<<endl<<"Number of comparisions : "<<count<<endl;
  return 0;
}
