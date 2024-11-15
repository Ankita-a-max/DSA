
#include <bits/stdc++.h>


using namespace std;

vector<bool> visited;
vector<int> graph[100];

void bfs(int source)
{
    queue<int> q;
    q.push(source);     // Push the source node to the queue
    visited[source] = true;   // Mark the source node as visited
    cout << source;   // Print the source node

    while (!q.empty())  // q.size()!=0
    {
        int v = q.front();      // Get the front element of the queue

        //cout<<"Front element is : "<<v<<endl;
        q.pop();        // Remove the front element from the queue

        //cout<<"Queue size is : "<<q.size()<<endl;

        for (int i = 0; i < graph[v].size(); i++)   // Traverse all the adjacent nodes of the current node
        {
            if (!visited[graph[v][i]])  // If the adjacent node is not visited
            {
                q.push(graph[v][i]);    // Push the adjacent node to the queue
                visited[graph[v][i]] = true;  // Mark the adjacent node as visited
                cout << " -> " << graph[v][i];    // Print the adjacent node
            }
        }
    }
}

int main()
{
    int node, edge;

    cout << "Enter the number of node and edges : ";
    cin >> node >> edge;

    cout << "Enter the graph : " << endl;
    for (int i = 0; i < edge; i++)
    {
        int node1, node2;
        cin >> node1 >> node2;            // Take input of the nodes

        graph[node1].push_back(node2);    // Create an edge between node1 and node2
        graph[node2].push_back(node1);    // Create an edge between node2 and node1
    }

    visited.assign(node, false);  // Mark all nodes as not visited  // f, f, f ,f ,f

    cout << "Enter the starting node : ";
    int source;
    cin >> source;

    cout << "BFS path is : ";
    bfs(source);

    return 0;
}
