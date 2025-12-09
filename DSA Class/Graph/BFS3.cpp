#include <iostream>
#include <queue>
using namespace std;

#define V 7
void BFS(int graph[V][V], int source)
{
    bool visited[V] = {false};
    cout<<source<<" ";
    visited[source] = true;
    queue<int> q;
    q.push(source);
    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        for(int i = 0; i < V; i++)
        {
            if(graph[node][i] == 1 && !visited[i])
            {
                q.push(i);
                cout<<i<<" ";
                visited[i] = true;
            }
        }
    }   
}

bool visited[V] = {false};
void DFS(int graph[V][V], int i)
{
    int j;
    cout<<i<<" ";
    visited[i] = true;
    for(int j = 0; j < V; j++)
    {
        if(graph[i][j] == 1 && !visited[j])
        {
            DFS(graph, j);
        }
    }
}
int main()
{
    int graph[V][V];
    for(int i = 0; i < V; i++)
    {
        for(int j = 0; j < V; j++)
        {
            cin>>graph[i][j];
        }
    }
    int source;
    cin>>source;
    // BFS(graph, source);
    DFS(graph, source);
    return 0;
}