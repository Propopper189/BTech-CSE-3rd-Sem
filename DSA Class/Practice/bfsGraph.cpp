#include <iostream>
#include <queue>
using namespace std;

void BFS(int graph[100][100], int n, int source)
{
    queue<int> q;
    q.push(source);
    bool visited[n] = {false};
    visited[source] = true;
    cout<<source<<" ";
    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        for(int j = 0; j < n; j++)
        {
            if(graph[node][j] == 1 && !visited[j])
            {
                cout<<j<<" ";
                visited[j] = true;
                q.push(j);
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int graph[n][n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin>>graph[i][j];
        }
    }
    int source;
    cin>>source;
    BFS(graph, n, source);
    return 0;
}