#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int n;

void DFS(int graph[100][100], int source)
{
    stack<int> s;
    s.push(source);
    vector<bool> visited(n, false);
    visited[source] = true;
    while(!s.empty())
    {
        int node = s.top();
        s.pop();
        cout<<node<<" ";
        for(int j = n-1; j >= 0; j--)
        {
            if(graph[node][j] == 1 && !visited[j])
            {
                s.push(j);
                visited[j] = true;
            }
        }
    }
}
int main()
{
    cin>>n;
    int graph[100][100];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin>>graph[i][j];
        }
    }
    int source;
    cin>>source;
    DFS(graph, source);
    return 0;
}