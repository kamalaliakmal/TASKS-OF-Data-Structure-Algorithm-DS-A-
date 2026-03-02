         // Program 1: Graph Representation Using Adjacency Matrix
#include <iostream>
using namespace std;

int main(){
    int vertices;
    cout<<"Enter number of vertices: ";
    cin>>vertices;

    int adjMatrix[10][10]={0};

    int edges;
    cout<<"Enter number of edges: ";
    cin>>edges;

    for(int i=0; i<edges; i++){
        int u,v;
        cout<<"Enter edge (u v): ";
        cin>>u>>v;

        adjMatrix[u][v]=1;
        adjMatrix[v][u]=1;   // Undirected graph
    }

    cout<<"\nAdjacency Matrix:\n";
    for(int i=0; i<vertices; i++) {
        for(int j=0; j<vertices; j++) {
            cout<<adjMatrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

		   //Program 2: Graph Representation Using Adjacency List
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int vertices;
    cout<<"Enter number of vertices: ";
    cin>>vertices;

    vector<int> adjList[10];

    int edges;
    cout<<"Enter number of edges: ";
    cin>>edges;

    for(int i=0; i<edges; i++){
        int u,v;
        cout<<"Enter edge (u v): ";
        cin>>u>>v;

        adjList[u].push_back(v);
        adjList[v].push_back(u); // Undirected graph
    }
    cout << "\nAdjacency List:\n";
    for(int i=0; i<vertices; i++){
        cout<<i<<" ->";
        for(int j : adjList[i]) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}

//Program 3: BFS Traversal Using Queue
#include <iostream>
#include <queue>
using namespace std;

int adjMatrix[10][10],visited[10];
int vertices;

void BFS(int start){
    queue<int> q;
    visited[start]=1;
    q.push(start);

    while(!q.empty()){
        int v=q.front();
        q.pop();
        cout<<v<<" ";

        for(int i=0; i<vertices; i++){
            if(adjMatrix[v][i]==1 && visited[i] == 0) {
                visited[i]=1;
                q.push(i);
            }
        }
    }
}

int main(){
    cout<<"Enter number of vertices: ";
    cin>>vertices;

    cout<<"Enter adjacency matrix:\n";
    for(int i= 0; i<vertices; i++) {
        for(int j=0; j<vertices; j++) {
            cin>>adjMatrix[i][j];
        }
        visited[i]=0;
    }

    int start;
    cout<<"Enter starting vertex: ";
    cin>>start;

    cout<<"BFS Traversal: ";
    BFS(start);
    return 0;
}

		// Program 4:  DFS Traversal Using Recursion
#include <iostream>
using namespace std;


int adjMatrix[10][10], visited[10];
int vertices;

void DFS(int v){
    visited[v]=1;
    cout<<v<<" ";

    for(int i=0; i<vertices; i++) {
        if(adjMatrix[v][i]==1 && visited[i] == 0) {
            DFS(i);
        }
    }
}

int main(){
    cout<<"Enter number of vertices: ";
    cin>>vertices;

    cout<<"Enter adjacency matrix:\n";
    for(int i=0; i<vertices; i++){
        for(int j=0; j<vertices; j++) {
            cin>>adjMatrix[i][j];
        }
        visited[i]=0;
    }

    int start;
    cout<<"Enter starting vertex: ";
    cin>>start;

    cout<<"DFS Traversal: ";
    DFS(start);
    return 0;
}

