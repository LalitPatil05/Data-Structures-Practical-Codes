#include<iostream>
using namespace std;
int i,j;
int mat[10][10];
int G[10][10];
int visited[10],n;
void DFS(int i){
    int j;
    cout<<i<<",";
    visited[i]=1;
    for(j=0;j<n;j++)
        if(!visited[j] && G[i][j]==1)
        DFS(j);
}
void showgraph(int mat[10][10],int n){
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}
//main function..!!
int main(){
    int i,j;
    cout<<"Enter Number of Vertices : ";
    cin>>n;
    cout<<"Enter Adjecency Matrix of the Graph : \n";
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>G[i][j];
        }
        cout<<endl;
    }

    showgraph(G,n);

    for(i=0;i<n;i++)
    visited[i]=0;
    DFS(0);
    
    return 0;
}