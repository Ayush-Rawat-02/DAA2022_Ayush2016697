//QuicksortALGO
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
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elemetns of the  array"<<endl;
    for(int i=0;i<n;i++) cin>>arr[i];
    sortF(arr,0,n-1);
    for(int i=0;i<n;i++) cout<<arr[i]<<"  ";
    
    cout<<endl;
    return 0;
    
}
