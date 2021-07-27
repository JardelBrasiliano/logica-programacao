#include <iostream>
#include <list>
#include <queue>

using namespace std;

const int N = 8;

vector<int> adj[N];
vector<bool> visited;

vector<int> dist;

const int INF = 1e9;

void bfs_dist(int u){
    dist.assign(N, INF);
    queue<int> q;
    q.push(u);
    dist[u] = 0;
    while(!q.empty()){
        int v = q.front();
        q.pop();
        cout << v << " ";
        for(auto e : adj[v]){
            if(dist[e] == INF){
                dist[e] = dist[v] + 1;
                q.push(e);
            }
        }
    }
}
//0-3
//0-1
//0-2

int main(){
    visited.assign(N, false);
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[0].push_back(3);
    adj[1].push_back(2);
    adj[2].push_back(4);

    bfs_dist(0);
    cout << endl;
    cout << dist[3] << endl;
    cout << endl;
    cout << dist[2] << endl;
    cout << endl;
    cout << dist[1] << endl;

    cout << endl;
    return 0;

}
