#include<iostream>
using namespace std;
int main(){
  int n,t,key;
  int arr[100];   //The array should be sorted in advance
  cin>>t;
  while(t){
    cin>>n;
    for(int i=0;i<n;i++) cin>>arr[i];
    cin>>key;
    int s=0,e=n-1;
    int mid=s-(s-e)/2;
    int comp=1;
    while(s<=e){
      if(arr[mid]==key)
      {
        cout<<"The key is present at index : "<<mid<<endl;
        break;
      }
      else if(arr[mid]<key)
      {
        s=mid+1;
        mid=s-(s-e)/2;
      }
      else
      {
        e=mid-1;
        mid=s-(s-e)/2;
      }
      comp++;
    }
    cout<<"The total number of comparisions : "<<comp<<endl;
    t--;
  }
  return 0;
}
