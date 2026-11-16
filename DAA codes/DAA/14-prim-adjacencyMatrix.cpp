// 	Adjacency matrix and array
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int Prim(int cost[][10], int n, int t[][2]) {
    int near[10];
    int mincost = INT_MAX;
    int k, l;

    // Step 1: Find the minimum-cost edge
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (cost[i][j] < mincost) {
                mincost = cost[i][j];
                k = i;
                l = j;
            }
        }
    }

    // Step 2: Store the first edge
    t[1][0] = k;
    t[1][1] = l;

    // Step 3: Initialize near[]
    for (int i = 1; i <= n; i++) {
        if (cost[i][l] < cost[i][k])
            near[i] = l;
        else
            near[i] = k;
    }

    near[k] = near[l] = 0;

    // Step 4: Find the remaining n-2 edges
    for (int i = 2; i <= n - 1; i++) {
        int minEdge = INT_MAX;
        int j = 0;

        for (int v = 1; v <= n; v++) {
            if (near[v] != 0 &&
                cost[v][near[v]] < minEdge) {
                minEdge = cost[v][near[v]];
                j = v;
            }
        }

        t[i][0] = j;
        t[i][1] = near[j];

        mincost += cost[j][near[j]];
        near[j] = 0;

        // Step 5: Update near[]
        for (int v = 1; v <= n; v++) {
            if (near[v] != 0 &&
                cost[v][near[v]] > cost[v][j]) {
                near[v] = j;
            }
        }
    }

    return mincost;
}

int main() {
    int n;
    int cost[10][10];
    int t[10][2];

    cout << "Enter number of vertices (maximum 9): ";
    cin >> n;

    cout << "Enter the cost adjacency matrix:\n";
    cout << "Use 9999 for no edge.\n";

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> cost[i][j];
        }
    }

    int mincost = Prim(cost, n, t);

    cout << "\nEdges in Minimum Spanning Tree:\n";

    for (int i = 1; i <= n - 1; i++) {
        cout << t[i][0] << " - " << t[i][1] << endl;
    }

    cout << "Minimum cost = " << mincost << endl;

    return 0;
}