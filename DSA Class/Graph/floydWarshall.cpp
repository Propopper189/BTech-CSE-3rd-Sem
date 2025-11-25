#include <iostream>
#include <climits>
using namespace std;

#define max_vertices 4
#define INF INT_MAX

void floydWarshall(int graph[max_vertices][max_vertices])
{
    for(int k = 0; k < max_vertices; k++)
    {
        for(int i = 0; i < max_vertices; i++)
        {
            for(int j = 0; j < max_vertices; j++)
            {
                if(graph[i][k] != INF && graph[k][j] != INF && (graph[i][k] + graph[k][j] < graph[i][j]))
                {
                    graph[i][j] = graph[i][k] + graph[k][j];
                }
            }
        }
    }
}
void print(int graph[max_vertices][max_vertices])
{
    for(int i = 0; i < max_vertices; i++)
    {
        for(int j = 0; j < max_vertices; j++)
        {
            if(graph[i][j] == INF)
            {
                cout<<"INF ";
            }
            else
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int graph[max_vertices][max_vertices] = {
        {0, 3, INF, 7},
        {8, 0, 2, INF},
        {5, INF, 0, 1},
        {2, INF, INF, 0}
    };
    floydWarshall(graph);
    print(graph);
    return 0;
}