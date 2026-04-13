#include <iostream>
#include <bits/stdc++.h> // STL
using namespace std;


void bfs(vector<int> adjList[], int n) {
    vector<bool> visited(n, false);
    queue<int> q;
    vector<int> ans;

    visited[0] = true;
    q.push(0);
    ans.push_back(0);

    while(!q.empty()) {
        int front = q.front();
        q.pop();
        for(auto &it: adjList[front]) {
            if(visited[it]==false) {
                visited[it] = true;
                q.push(it);
                ans.push_back(it);
            }
        }
    }

    cout<<"\nBFS Traversal: ";
    for(auto &it: ans) {
        cout<<it<<" ";
    }
    cout<<endl;
}


void dfs(vector<int> adjList[], int n) {
    vector<bool> visited(n, false);
    stack<int> st;
    vector<int> ans;

    visited[0] = true;
    st.push(0);

    while(!st.empty()) {
        int top = st.top();
        ans.push_back(top);
        st.pop();
        for(auto &it: adjList[top]) {
            if(visited[it]==false) {
                visited[it] = true;
                st.push(it);
            }
        }
    }

    cout<<"\nDFS Traversal: ";
    for(auto &it: ans) {
        cout<<it<<" ";
    }
    cout<<endl;
}

int main() {

    int n;
    n = 5;

    vector<pair<int, int>> edges;
    edges.push_back({0, 1});
    edges.push_back({0, 2});
    edges.push_back({1, 2});
    edges.push_back({1, 3});
    edges.push_back({2, 3});
    edges.push_back({3, 4});

    vector<int> adjList[n];
    for(int i=0;i<edges.size();i++) {
        int u = edges[i].first;
        int v = edges[i].second;

        adjList[u].push_back(v);
        adjList[v].push_back(u); // for undirected graph
    }

    cout<<"Adjacency List:\n";
    for(int i=0;i<n;i++) {
        cout<<i<<" -> ";
        for(int j=0;j<adjList[i].size();j++) {
            cout<<adjList[i][j]<<" ";
        }
        cout<<endl;
    }

    int adjMatrix[n][n];
    memset(adjMatrix, 0, sizeof(adjMatrix)); // initialize with 0

    for(int i=0;i<edges.size();i++) {
        int u = edges[i].first;
        int v = edges[i].second;

        adjMatrix[u][v] = 1;
        adjMatrix[v][u] = 1; // for undirected graph
    }


    cout<<"\nAdjacency Matrix:\n";
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cout<<adjMatrix[i][j]<<" ";
        }
        cout<<endl;
    }

    bfs(adjList, n);
    dfs(adjList, n);

    return 0;
}