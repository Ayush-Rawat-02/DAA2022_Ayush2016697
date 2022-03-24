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
  
  //Sorting the entered array and counting the number of comparisions
  
  int count = 0;
  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        count++;
      if(arr[i]>arr[j]){
        swap(arr[i],arr[j]);
      }
    }
  }
  
  //Displaying the sorted array and number of comparisions
  
  for(int i=0;i<n;i++)  cout<<arr[i]<<"  ";
  cout<<endl<<"Number of comparisions : "<<count<<endl;
  return 0;
}
