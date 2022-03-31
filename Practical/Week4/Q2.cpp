//MergeSortALGO
#include<iostream>
using namespace std;

void merge(int arr[],int i,int mid,int j)
{
    
}

void sortF(int arr[],int s,int e){
    if(s>e) return;
    int m=(s+e)/2;
    
    sortF(arr,s,m);                             //call merge function for first half
    
    sortF(arr,m+1,e);                           //call merge function for second half
    
    merge(arr,s,mid,e);                         //merge the two (assumed to be sorted) halves
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)    cin>>arr[i];
    sortF(arr,0,n-1);
    cout<<"The sorted array is : ";
    for(int i=0;i<n;i++)    coutM<<arr[i]<<"  ";
    cout<<endl;
    return 0;
}
