#include <iostream>
#include <queue>
using namespace std;

#define max_vertices 5

void addEdge(int graph[][max_vertices], int a, int b)
{
    graph[a][b] = 1;
    graph[b][a] = 1;
}

void BFS(int graph[][max_vertices], int start)
{
    bool visited[max_vertices] = {false};
    queue<int> q;
    visited[start] = true;
    q.push(start);
    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        cout<<node<<" ";
        for(int i = 0; i < max_vertices; i++)
        {
            if(graph[node][i] == 1 && !visited[i])
            {
                visited[i] = true;
                q.push(i);
            }
        }
    }
}
int main()
{
    int graph[max_vertices][max_vertices] = {0};
    int start = 0;
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 2, 3);
    addEdge(graph, 2, 4);
    addEdge(graph, 4, 3);
    BFS(graph, start);
    return 0;
}