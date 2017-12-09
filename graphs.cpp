#include <stdio.h>
#include<iostream>
#include <stdlib.h>
#define max 100
using namespace std;
int n;
int adj_mat[max][max];
void dfs (int v,int N){
int visited[max]={0};
int top = -1;
int stack[max];
top=top+1;
stack[top]=v;
aa:
while(top!=-1){
int u=stack[top];
top--;
if(visited[u]!=1){
cout<<u;
visited[u]=1;
}
else
goto aa;
// check adjacent nodes from u
int i = 0;
for (i = 0; i< N; i++){
// if there is adjacent vertex enqueue it
if (!visited[i] &&adj_mat[u][i]){
top++;
stack[top] = i;
}
}
}
}
int read_graph( int adj_mat[][max], int n ){
int i, j;
cout<<"enter no fo vertices"<<endl;
cin>>n;
for ( i = 0 ; i < n ; i++ ){
for ( j = 0 ; j < n ; j++ ){
if ( i== j ){
adj_mat[i][j] = 0;
		continue;
            }
cout<<"enter for vertex "<<i<< "and "<<j<<endl;
cin>>adj_mat[i][j];
	}
    }
cout<<"graph is "<<endl;
for ( i = 0 ; i< n ; i++ )
    {
for ( j = 0 ; j < n ; j++ )
        {
cout<<adj_mat[i][j]<<"   ";
	}
	cout<<endl;
    }
dfs(0,n);
}
int
dir_graph()
{
read_graph(adj_mat, n);
}
int main()
{
dir_graph();
}
