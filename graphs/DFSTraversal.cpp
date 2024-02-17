#include <iostream>
using namespace std;

    int visited[7] = {0,0,0,0,0,0,0};
    int adjacencyMatrix[7][7] = {
        {0,1,1,1,0,0,0},
        {1,0,1,0,0,0,0},
        {1,1,0,1,1,0,0},
        {1,0,1,0,1,0,0},
        {0,0,1,1,0,1,1},
        {0,0,0,0,1,0,0}, 
        {0,0,0,0,1,0,0} 
    };

void DFS(int node){
    cout << node << endl;
visited[node] = 1;

for (int j = 0; j< 7; j++)
{
if(adjacencyMatrix[node][j] == 1 && !visited[j]){
    DFS(j);//recursion for j(the new node);
}
}

};



int main(){

// DFS implementation

DFS(4);//works perfectly fine
    return 0;
}
