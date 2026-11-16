#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Structure for an edge
struct edge {
    int u, v, cost;
};

// Comparator for Min Heap
struct compare {
    bool operator()(edge a, edge b) {
        return a.cost > b.cost;
    }
};

// Disjoint Set Union
class DSU {
public:
    vector<int> parent;

    DSU(int n) {
        parent.resize(n + 1);

        // Initially, every vertex is its own set
        for (int i = 1; i <= n; i++) {
            parent[i] = -1;
        }
    }

    // Find the root of a vertex
    int Find(int x) {
        if (parent[x] < 0)
            return x;

        return parent[x] = Find(parent[x]);
    }

    // Union two sets
    void Union(int a, int b) {
        a = Find(a);
        b = Find(b);

        if (a == b)
            return;

        parent[a] = b;
    }
};

// Kruskal's Algorithm
void Kruskal(int n, vector<edge>& edges) {

    // Min heap based on edge cost
    priority_queue<edge, vector<edge>, compare> minHeap;

    // Insert all edges into min heap
    for (auto edge : edges) {
        minHeap.push(edge);
    }

    DSU dsu(n);

    int count = 0;
    int minCost = 0;

    cout << "Edges selected in MST:\n";

    while (count < n - 1 && !minHeap.empty()) {

        // Delete minimum-cost edge
        edge e = minHeap.top();
        minHeap.pop();

        int j = dsu.Find(e.u);
        int k = dsu.Find(e.v);

        // If vertices belong to different sets,
        // adding this edge will not form a cycle
        if (j != k) {

            count++;

            cout << e.u << " - " << e.v
                 << " : " << e.cost << endl;

            minCost += e.cost;

            // Merge the two sets
            dsu.Union(j, k);
        }
    }

    // If less than n-1 edges were selected,
    // graph is disconnected
    if (count != n - 1) {
        cout << "No spanning tree exists.\n";
    }
    else {
        cout << "Minimum Cost = " << minCost << endl;
    }
}

int main() {

    int n, m;
    cout << "Enter number of vertices: ";
    cin >> n;

    cout << "Enter number of edges: ";
    cin >> m;

    vector<edge> edges;

    cout << "Enter edges (u v cost):\n";

    for (int i = 0; i < m; i++) {
        edge e;
        cin >> e.u >> e.v >> e.cost;
        edges.push_back(e);
    }

    Kruskal(n, edges);

    return 0;
}