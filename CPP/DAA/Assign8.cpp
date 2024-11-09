/*
Name:- Garje Satkar Devidas
Class:- TY-BTech-Computer , Div:- A
Roll No. :- 21
Assignment No 8
*/
#include <iostream>
using namespace std;

#define N 4

bool issafe(int c, int v, int g[N][N], int col[]) {
    for (int i = 0; i < N; i++) {
        if (g[v][i] == 1 && col[i] == c)
            return false;
    }
    return true;
}

bool solve(int g[N][N], int col[], int v, int m) {
    if (v == N)
        return true;

    for (int i = 1; i <= m; i++) {
        if (issafe(i, v, g, col)) {
            col[v] = i;
            if (solve(g, col, v + 1, m))
                return true;
            col[v] = 0;
        }
    }
    return false;
}

int main() {
    int col[N] = {0};
    int m;
    
    cout << "Enter the number of colors: ";
    cin >> m;

    int g[N][N];
    cout << "Enter the adjacency matrix of the graph (" << N << "x" << N << "):\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> g[i][j];
        }
    }

    if (solve(g, col, 0, m)) {
        cout << "Solution exists:\n";
        for (int i = 0; i < N; i++) {
            cout << "Node " << i + 1 << " has color " << col[i] << endl;
        }
    } else {
        cout << "No solution exists";
    }

    return 0;
}


//Output
/*\
Enter the number of colors: 3
Enter the adjacency matrix of the graph (4x4):
0 1 1 0
1 0 0 1
1 0 0 1
0 1 1 0
Solution exists:
Node 1 has color 1
Node 2 has color 2
Node 3 has color 2
Node 4 has color 1
*/