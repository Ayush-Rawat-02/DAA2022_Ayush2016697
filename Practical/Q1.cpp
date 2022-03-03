#include<iostream>
#include<iostream>
using namespace std;
int main(){
	int i,n,t,key;
	int arr[100];
	cin>>t;
	while(t){
		cin>>n;
		for(i=0;i<n;i++) cin>>arr[i];
		cin>>key;
		for(i=0;i<n;i++)
			if(arr[i]==key){
				cout<<"The key is present at index  : "<<i<<endl;
				cout<<"Totoal number of comparisions : "<<i+1<<endl;
				break;
			}
		if(i==n){
		    cout<<"The key is not present"<<endl;
		    cout<<"Total number of comparisions : "<<n<<endl;
		    
		}
		t--;
	}
	return 0;
}
