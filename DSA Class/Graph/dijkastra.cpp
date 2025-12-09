#include <iostream>
using namespace std;

#define V 6
#define INF 99999

void dijkastra(int graph[V][V], int source)
{
    // Step 1 : intilialize visited and distance array
    bool visited[V];
    int distance[V];
    for(int i = 0; i < V; i++)
    {
        visited[i] = false;
        distance[i] = INF;
    }
    distance[source] = 0;
    // Step 2 : calculate the final shortest distance
    for(int count = 0; count < V-1; count++)
    {
        int u = -1;
        for(int i = 0; i < V; i++)
        {
            if(!visited[i] && (u == -1 || distance[i] < distance[u]))
            {
                u = i;
            }
        }
        visited[u] = true;
        for(int v = 0; v < V; v++)
        {
            if(!visited[v] && graph[u][v] != INF && distance[u] + graph[u][v] < distance[v])
            {
                distance[v] = distance[u] + graph[u][v];
            }
        }
    }

    // Step 3 : print the final distance
    for(int i = 0; i < V; i++)
    {
        cout<<"Distance from "<<source<<" to "<<i<<" is : "<<distance[i]<<endl;
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
            if(graph[i][j] == 0 && i != j)
            {
                graph[i][j] = INF;
            }
        }
    }
    int source;
    cin>>source;
    dijkastra(graph, source);
    return 0;
}