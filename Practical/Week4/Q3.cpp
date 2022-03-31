//Kth minimum and Kth maximum element in an input array
#include<iostream>
using namespace std;

//sort function
void sortF(int arr[],int s,int e){
    int key=arr[s];
    int i=s,j=e;
    //int tmp=0;
    if(i>j) return ;
    while(i<j)
    {
        while(arr[i]<=key&&i<j)   i++;
        while(key<arr[j])   j--;
        if(i<j)   swap(arr[i],arr[j]);
    }
    arr[s]=arr[j];
    arr[j]=key;
    //or
    //swap(arr[s],arr[j])
    sortF(arr,s,j-1);
    sortF(arr,j+1,e);
}

int main(){
    // int a=78,b=24;
    // swap(a,b);
    // cout<<a<<" "<<b;
    int n,k;
    cout<<"Enter the value of n & k"<<endl;
    cin>>n>>k;
    int arr[n];
    cout<<"Enter the elemetns of the  array"<<endl;
    for(int i=0;i<n;i++) cin>>arr[i];
    sortF(arr,0,n-1);
    cout<<k<<"th minimum element : "<<arr[k-1]<<endl;
    cout<<k<<"th maximum element : "<<arr[n-k]<<endl;
    return 0;
    
}
