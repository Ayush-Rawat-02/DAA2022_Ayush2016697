//For a given graph design an algo and implement it using a program to find if a path exists between two given vertices or not.
#include<bits/stdc++.h>
using namespace std;
// struct RTX{
//   int val;
//   RTX* link;
// };

// RTX* un(RTX* cur,int d){
//   if(cur==NULL){
//     cur=new RTX();
//     cur->val=d;
//     cur->link=NULL;
//   }
//   else{
//     RTX* tp=cur;
//     while(tp->link) tp=tp->link;
//     tp->link=new RTX();
//     tp->link->val=d;
//     tp->link->link=NULL;
//   }
//   return cur;
// }

// int main(){
//   int n;
//   cout<<"Enter the number of nodes in the graph :";
//   cin>>n;
//   RTX* gph[n];
//   for(int i=0;i<n;i++)    gph[i]=NULL;
//   for(int i=0;i<n;i++){
//     cout<<"Enter the Vertices linked to Vertex "<<i<<" one by one and -1 to stop : ";
//     while(1){
//       int tmp;
//       cin>>tmp;
//       if(tmp==-1) break;
//       gph[i]=un(gph[i],tmp);
//       gph[tmp]=un(gph[tmp],i);
//     }
//   }
   
// //   cout<<"NODE\t\tAdjacent VTX"<<endl;
// //   for(int i=0;i<n;i++){
// //     RTX* tmp=gph[i];
    
// //     cout<<i<<"\t\t";
// //     while(tmp){
// //       cout<<tmp->val<<" ";
// //       tmp=tmp->link;
// //     }
// //     cout<<endl;
// //   }
    
// int a,b;
// cout<<"Enter the vertices to check"<<endl;
// cin>>a>>b;
// RTX* tmp=gph[a];
// while(tmp){
//     if(tmp->val==b) break;
//     tmp=tmp->link;
// }
// if(tmp) 
//     cout<<"Link is present"<<endl;
// else
//     cout<<"No link found"<<endl;
// }

#include<bits/stdc++.h>
using namespace std;
vector<bool>visited;
vector<int>path;
int source,dest;
void dfs(vector<vector<int> >&graph,int vertix){
 if(visited[vertix]||visited[dest])return;
 path.push_back(vertix);
 visited[vertix]=1;
 for(auto& i:graph[vertix])dfs(graph,i);
}
int main(){
  int n,s,e;
  vector<vector<int> >graph(n);
  visited.resize(n,0);
  cout<<"Enter the size of the edge list of the graph :";
  cin>>n;
  cout<<"Enter the edges of the graph";
  vector<vector<int> >edgelist;
  for(int i=0;i<n;i++){
    cin>>s>>e;
     vector<int>temp;
     temp.push_back(s);
     temp.push_back(e);
    edgelist.push_back({s,e});
  }
  for(vector<int>& i:edgelist){
    graph[i[0]].push_back(i[1]);
    graph[i[1]].push_back(i[0]);
  }
  cout<<"Input the source vertix:";
  cin>>s;
  cout<<"Input the destination vertix:";
  cin>>e;
  source=s;
  dest=e;
  dfs(graph,s);
  if(visited[e]){
    cout<<"Yes path exits and it follows the path : ";
    for(int i=0;i<path.size()-1;i++){
     cout<<path[i]<<"->";
    }
   cout<<path.back();
  }
  else {
    cout<<"Path does not exist ";
  }
}
