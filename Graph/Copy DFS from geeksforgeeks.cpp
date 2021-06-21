// C++ program to print DFS traversal from
// a given vertex in a  given graph
#include<iostream>
#include<list>

using namespace std;


// Graph class represents a directed graph
// using adjacency list representation

class Graph
{

    int V;    // No. of vertices



    // Pointer to an array containing

    // adjacency lists

    list<int> *adj;



    // A recursive function used by DFS

    void DFSUtil(int v);

public:

    Graph(int V);   // Constructor



    // function to add an edge to graph

    void addEdge(int v, int w);
    bool visited[100];



    // DFS traversal of the vertices

    // reachable from v

    void DFS(int v);
};



Graph::Graph(int V)
{

    this->V = V;

    adj = new list<int>[V];
}



void Graph::addEdge(int v, int w)
{

    adj[v].push_back(w); // Add w to v’s list.
}



void Graph::DFSUtil(int v)
{

    // Mark the current node as visited and

    // print it

    visited[v] = true;


    cout << v << " ";



    // Recur for all the vertices adjacent

    // to this vertex

    list<int>::iterator i;

    for (i = adj[v].begin(); i != adj[v].end(); ++i)
    {
       // cout<<"Inner "<<*i<<endl;
         if (!visited[*i])

            DFSUtil(*i);
    }


}


// DFS traversal of the vertices reachable from v.
// It uses recursive DFSUtil()

void Graph::DFS(int v)
{

    // Mark all the vertices as not visited

    bool *visited = new bool[V];

    for (int i = 0; i < V; i++)

        visited[i] = false;



    // Call the recursive helper function

    // to print DFS traversal

    DFSUtil(v);
}


// Driver code

int main()
{

    // Create a graph given in the above diagram

    Graph g(20);

    g.addEdge(1, 5);

    g.addEdge(1, 2);

    g.addEdge(2, 3);

    g.addEdge(3, 4);

    g.addEdge(5, 6);

    g.addEdge(6, 7);

    g.addEdge(6, 7);

    g.addEdge(6, 8);

    g.addEdge(8, 9);

    g.addEdge(5,10);

    g.addEdge(10,11);





    cout << "Following is Depth First Traversal"

            " (starting from vertex 1) \n";

    g.DFS(1);



    return 0;
}
