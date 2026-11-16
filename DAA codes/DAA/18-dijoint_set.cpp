#include <iostream>
#include <vector>
using namespace std;

class DisjointSetUnion {
public:
    int n;
    vector<int> par, rank;

    // Constructor
    DisjointSetUnion(int n) {
        this->n = n;

        for (int i = 0; i < n; i++) {
            par.push_back(i);
            rank.push_back(0);
        }
    }

    // Find with Path Compression
    int find(int x) {
        if (par[x] == x) {
            return x;
        }

        return par[x] = find(par[x]);
    }

    // Union by Rank
    void unionByRank(int a, int b) {
        int parA = find(a);
        int parB = find(b);

        // Already in the same set
        if (parA == parB)
            return;

        // Case 1: Same rank
        if (rank[parA] == rank[parB]) {
            par[parB] = parA;
            rank[parA]++;
        }

        // Case 2: Rank of A is greater
        else if (rank[parA] > rank[parB]) {
            par[parB] = parA;
        }

        // Case 3: Rank of B is greater
        else {
            par[parA] = parB;
        }
    }

    // Display parent array
    void getInfo() {
        cout << "Parent Array: ";
        for (int i = 0; i < n; i++) {
            cout << par[i] << " ";
        }
        cout << endl;

        cout << "Rank array:   ";
        for (int i = 0; i < n; i++) {
            cout << rank[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    DisjointSetUnion dsu(6);

    dsu.unionByRank(0, 2);
    cout << "Parent of 2: " << dsu.find(2) << endl;

    dsu.unionByRank(1, 3);
    dsu.unionByRank(2, 5);
    dsu.unionByRank(0, 3);

    cout << "Parent of 2: " << dsu.find(2) << endl;

    dsu.unionByRank(0, 4);

    dsu.getInfo();

    return 0;
}