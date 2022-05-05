//For a given graph design an algo and implement it using a program to find if a path exists between two given vertices or not.
#include<bits/stdc++.h>
using namespace std;
struct RTX{
  int val;
  RTX* link;
};

RTX* un(RTX* cur,int d){
  if(cur==NULL){
    cur=new RTX();
    cur->val=d;
    cur->link=NULL;
  }
  else{
    RTX* tp=cur;
    while(tp->link) tp=tp->link;
    tp->link=new RTX();
    tp->link->val=d;
    tp->link->link=NULL;
  }
  return cur;
}

int main(){
  int n;
  cout<<"Enter the number of nodes in the graph :";
  cin>>n;
  RTX* gph[n];
  for(int i=0;i<n;i++)    gph[i]=NULL;
  for(int i=0;i<n;i++){
    cout<<"Enter the Vertices linked to Vertex "<<i<<" one by one and -1 to stop : ";
    while(1){
      int tmp;
      cin>>tmp;
      if(tmp==-1) break;
      gph[i]=un(gph[i],tmp);
      gph[tmp]=un(gph[tmp],i);
    }
  }
   
//   cout<<"NODE\t\tAdjacent VTX"<<endl;
//   for(int i=0;i<n;i++){
//     RTX* tmp=gph[i];
    
//     cout<<i<<"\t\t";
//     while(tmp){
//       cout<<tmp->val<<" ";
//       tmp=tmp->link;
//     }
//     cout<<endl;
//   }
    
int a,b;
cout<<"Enter the vertices to check"<<endl;
cin>>a>>b;
RTX* tmp=gph[a];
while(tmp){
    if(tmp->val==b) break;
    tmp=tmp->link;
}
if(tmp) 
    cout<<"Link is present"<<endl;
else
    cout<<"No link found"<<endl;
}
