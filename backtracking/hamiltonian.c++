#include <iostream>
#include <vector>

using namespace std;

// Check if it's valid to place vertex at current position
bool isSafe(int vertex, vector<vector<int>> &adjMat, 
            vector<int> &path, int pos) {
    
    // The vertex must be adjacent to the previous vertex
    if (!adjMat[path[pos - 1]][vertex]) {
        return false;
    }

    // The vertex must not already be in the path
    for (int i = 0; i < pos; i++) {
        if (path[i] == vertex) {
            return false;
        }
    }

    return true;
}

// Recursive backtracking to construct Hamiltonian Cycle
bool hamCycleUtil(vector<vector<int>> &adjMat, 
                  vector<int> &path, int pos, int n) {
    
    // Base case: all vertices are in the path
    if (pos == n) {
        
        // Check if there's an edge from last to first vertex
        return adjMat[path[pos - 1]][path[0]];
    }

    // Try all possible vertices as next candidate
    for (int v = 1; v < n; v++) {
        if (isSafe(v, adjMat, path, pos)) {
            path[pos] = v;

            if (hamCycleUtil(adjMat, path, pos + 1, n)) {
                return true;
            }

            // Backtrack if v doesn't lead to a solution
            path[pos] = -1;
        }
    }

    return false;
}

// Initialize path and invoke backtracking function
vector<int> hamCycle(vector<vector<int>> &adjMat) {
    int n = adjMat.size();
    vector<int> path(n, -1);

    // Start path with vertex 0
    path[0] = 0;

    if (!hamCycleUtil(adjMat, path, 1, n)) {
        return {-1};
    }

    return path;
}

// Driver Code
int main() {
    
    vector<vector<int>> adjMat = {
        {0, 1, 0, 1, 0}, 
        {1, 0, 1, 1, 1}, 
        {0, 1, 0, 0, 1}, 
        {1, 1, 0, 0, 1}, 
        {0, 1, 1, 1, 0}
    };

    vector<int> path = hamCycle(adjMat);
    
    if(path[0] == -1) {
        cout << "Solution does not Exist";
    }
    else {
        for (int i = 0; i < path.size(); i++) {
           cout << path[i] << " ";
        }
        cout << path[0];
    }
    return 0;
}