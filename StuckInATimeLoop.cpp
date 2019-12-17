//
//  main.cpp
//  ShortestPath1
//
//  Created by Evelio Ornelas Jr. on 11/13/19.
//  Copyright © 2019 Evelio Ornelas Jr. All rights reserved.
//

#include <iostream>
#include <queue>
#include <list>
#include <climits>
#include <vector>

using namespace std;

using iPair = pair<int, int>;

template<class T>
void Dijkstra(T & G, int source, vector<int>& dist) {
    // min priority_queue of vertices that need to be processed
    // stores pair of <weight, vertex>
    priority_queue<iPair, vector<iPair>, greater<iPair> > pq;
    dist.resize(G.nodeCount());
    fill(dist.begin(), dist.end(), INT_MAX);
    vector<bool> visited(G.nodeCount(), false);
    dist[source] = 0;
    pq.push({0, source}); // {weight, vertex}
    while (! pq.empty()) {
        int u = pq.top().second;
        pq.pop();
        // Single Destination:
        // if interested to find the path to one destination
        // check here if u == dest node; break if so
        if (visited[u]) continue;
        visited[u] = true;
        for(auto p: G.neighbors(u)) {
            int v = p.first;
            if (visited[v]) continue;
            int w = p.second;
            // if there's a shorter path to v through u
            int d = dist[u] + w;
            if (d < dist[v]) {
                dist[v] = d;
                pq.push({d, v});
            }
                // update parent vector if path needs to be recorded
                //parent[v] = u;
        }
    }
}

class Graph {
private:
    vector<list<iPair> > graph; // list stores pair of neighbor id and weight

public:
    Graph(size_t n) {
        for (int i=0; i<n; i++) {
            list<iPair> v; // create an empty list of int, int pair type
            graph.push_back(v);
        }
    }

    // return the number of vertices/nodes
    size_t nodeCount() {
        return graph.size();
    }

    // add a new edge from node u to node v, with weight w
    // assumes nodes are numbered from 0 to n-1
    void addEdge(int u, int v, int w) {
        graph[u].push_back({v, w});
        // if undirected graph must add edge from v to u
        // graph[v].push_back({u, w});
    }

    // returns list of pairs containing neighbors of u, and weight
    list<iPair> neighbors(int u) {
        return graph[u];
    }
};

const int INF = 1e10;

/*int answer(int ans) {
    vector<int> dist;
    return (ans > 0);
}

void test() {
    Graph graph(5);
    graph.addEdge(0, 1, 10);
    assert(answer(input1) == 0);
    graph.addEdge(0, 3, 20);
    assert(answer(input2) == 0);
    graph.addEdge(0, 2, 3);
    assert(answer(graph.addEdge(0, 2, 3)) == 0);
    Dijkstra<Graph>(graph, 0, dist);
    cout << "all test cases passed..." << endl;
}*/

void start() {
    //int kattis = 0;
    int n, m, q, s;
    while (true) {
        cin >> n >> m >> q >> s;
        if ((n + m + q + s) == 0)
            break;
        Graph graph(n);
        vector<int> dist;
        for (int i = 0; i < m; i++) {
            int u, v, w;
            cin >> u >> v >> w;
            graph.addEdge(u, v, w);
        }
        Dijkstra<Graph>(graph, s, dist);
        for (int i = 0; i < q; i++) {
            int q2;
            cin >> q2;
            //kattis = answer(ans);
            if (dist[q2] == INF)
                cout << "Impossible" << endl;
            else
                cout << dist[q2] << endl;
        }
        cout << endl;
    }
}

int main(int argc, char* argv[]) {
    ios::sync_with_stdio(false);
    //if (argc > 1 && strncmp(argv[1], "test", 4) == 0)
    //    test();
    //else
        start();
    return 0;
}
