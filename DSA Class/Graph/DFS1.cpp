#include <iostream>
#include <queue>
#include <stack>
using namespace std;

#define max_size 5

void addEdge(int graph[max_size][max_size], int u, int v)
{
    graph[u][v] = 1;
    graph[v][u] = 1;
}

void bfs(int graph[max_size][max_size], int start, char *names)
{
    bool visited[max_size] = {false};
    queue<int> q;
    visited[start] = true;
    q.push(start);
    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        cout<<names[node]<<" ";
        // add all the adjacent node to the queue
        for(int i = 0; i < max_size; i++)
        {
            if(graph[node][i] == 1 && !visited[i])
            {
                visited[i] = true;
                q.push(i);
            }
        }
    }
}
void dfs(int graph[][max_size], int start, char *names)
{
    bool visited[max_size] = {false};
    stack<int> s;
    visited[start] = true;
    s.push(start);
    while(!s.empty())
    {
        int node = s.top();
        s.pop();
        cout<<names[node]<<" ";
        for(int i = max_size; i >= 0; i--)
        {
            if(graph[node][i] == 1 && !visited[i])
            {
                visited[i] = true;
                s.push(i);
            }
        }
    }
}
int main()
{
    int graph[max_size][max_size] = {0}; 
    char names[max_size] = {'A', 'B', 'C', 'D', 'E'}; 
    addEdge(graph, 0, 1);  
    addEdge(graph, 0, 4);  
    addEdge(graph, 0, 2);  
    addEdge(graph, 2, 3);  
    addEdge(graph, 1, 4);  
    int start = 0;
    bfs(graph, start, names);
    cout<<endl;
    dfs(graph, start, names);
    return 0;
}