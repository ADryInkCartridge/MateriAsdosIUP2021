#include <bits/stdc++.h>
using namespace std;

int n;
int max_depth = 0;
int farthest_node = 0;
vector <int> graph[100005];
set <int> visited;

void dfs(int s, int depth) {
    if(visited.find(s) != visited.end()) {
        return;
	}
    if (depth >= max_depth){
        max_depth = depth; 
        farthest_node = s;
    }
    visited.insert(s);
    for(int i = 0; i < graph[s].size(); i++) {
        int next = graph[s][i];
        dfs(next, depth + 1);
    }
}

int main (){
    cin >> n;
    int a,b;
    for (int i=0;i < n - 1;i++){
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    dfs(1,0);
    visited.clear();
    dfs(farthest_node,0);
    cout << max_depth << endl;
}