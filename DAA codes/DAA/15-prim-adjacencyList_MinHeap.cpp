// Adjacency list  priority_queue 
#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

int main() {
    int n, m;

    cout << "Enter number of vertices and edges: ";
    cin >> n >> m;

    vector<vector<pair<int, int>>> adj(n + 1);

    cout << "Enter edges (u v weight):\n";

    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;

        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    // Min-heap: {weight, vertex}
    priority_queue<
        pair<int, int>,
        vector<pair<int, int>>,
        greater<pair<int, int>>
    > pq;

    vector<bool> visited(n + 1, false);

    int minCost = 0;
    int edgesCount = 0;

    // Start from vertex 1
    pq.push({0, 1});

    cout << "\nEdges in Minimum Spanning Tree:\n";

    while (!pq.empty() && edgesCount < n) {
        int weight = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        if (visited[u])
            continue;

        visited[u] = true;
        minCost += weight;
        edgesCount++;

        if (weight != 0) {
            cout << u << " (edge weight: "
                 << weight << ")\n";
        }

        for (auto edge : adj[u]) {
            int v = edge.first;
            int w = edge.second;

            if (!visited[v]) {
                pq.push({w, v});
            }
        }
    }

    if (edgesCount != n) {
        cout << "Graph is disconnected. MST does not exist.\n";
    } else {
        cout << "Minimum cost = " << minCost << endl;
    }

    return 0;
}