#include <bits/stdc++.h>
using namespace std;
int n, m, t, c;

void add_edge(vector<int> adj[], int src, int dest)
{
    adj[src].push_back(dest);
    adj[dest].push_back(src);
}


bool BFS(vector<int> adj[], int src, int dest, int v,
         int pred[], int dist[])
{

    list<int> queue;


    bool visited[v];


    for (int i = 0; i < v; i++) {
        visited[i] = false;
        dist[i] = INT_MAX;
        pred[i] = -1;
    }


    visited[src] = true;
    dist[src] = 0;
    queue.push_back(src);


    while (!queue.empty()) {
        int u = queue.front();
        queue.pop_front();
        for (int i = 0; i < adj[u].size(); i++) {
            if (visited[adj[u][i]] == false) {
                visited[adj[u][i]] = true;
                dist[adj[u][i]] = dist[u] + 1;
                pred[adj[u][i]] = u;
                queue.push_back(adj[u][i]);


                if (adj[u][i] == dest)
                    return true;
            }
        }
    }

    return false;
}


void printShortestDistance(vector<int> adj[], int s,
                           int dest, int v)
{

    int pred[v], dist[v];

    if (BFS(adj, s, dest, v, pred, dist) == false) {
        cout << "Given source and destination"
             << " are not connected";
        return;
    }


    vector<int> path;
    int crawl = dest;
    path.push_back(crawl);
    while (pred[crawl] != -1) {
        path.push_back(pred[crawl]);
        crawl = pred[crawl];
    }
    if(t<=c){
        if(c%t != 0)
            cout<<(dist[dest])*c+(t-c%t)<<endl;
        else
            cout<<(dist[dest])*c<<endl;
    }
    else{
        if((t/c+1) >= dist[dest] || t%c==0){
            cout<<(dist[dest])*c<<endl;
        }
        else{
            cout<<(t-(c-(t%c)))*(t/c) + (dist[dest])*c<<endl;
        }
    }

}

// Driver program to test above functions
int main()
{

    cin>>n>>m>>t>>c;
    vector<int> adj[n+1];

    for(int i=0; i<m; i++){
        int a, b;
        cin>>a>>b;
        add_edge(adj, a, b);
    }
    int source = 1, dest = n;
    printShortestDistance(adj, source, dest, n+1);
    return 0;
}
