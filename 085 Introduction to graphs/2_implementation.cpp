#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;
template<typename T>

class Graph {

    public:
        unordered_map<T, list<T>> adj;

    void addEdge(T u, T v, bool direction) {
        // direction - 0 (undirected graph)
        // direction - 1 (directed graph)

        // create an edge from u to v
        adj[u].push_back(v);

        if(direction == 0) {
            adj[v].push_back(u);
        }
    }

    void print() {
        for(auto i : adj) {
            cout << i.first << " -> ";
            for(auto j : i.second) {
                cout << j << " ";
            }
            cout << endl; 
        }
    }
};

int main() {

    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    int m;
    cout << "Enter number of edges : ";
    cin >> m;

    Graph<int> g;

    for(int i=0; i<m; i++) {
        int u , v;
        cin >> u >> v;

        g.addEdge(u, v, 0);
    }

    g.print();
    
    return 0;
}