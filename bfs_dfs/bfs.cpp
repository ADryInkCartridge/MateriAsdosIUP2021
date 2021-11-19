#include <bits/stdc++.h>
using namespace std;

vector <int> adj[105];
int n;
int mat[105][105];


void convert()
{
    for (int i = 1; i <= n; i++)
    {     
        for (int j = 1; j <= n; j++)
        {
            if (mat[i][j] == 1)
            {
                adj[i].push_back(j);
            }
        }
    }
}

void BFS(int s) 
{ 
    set <int> visited;
    list<int> queue; 
    visited.insert(s);
    queue.push_back(s); 
    while(!queue.empty()) 
    { 
        s = queue.front(); 
        cout << s << " ";
        queue.pop_front(); 
        for (unsigned int i = 0; i < adj[s].size(); i++) 
        { 
            if(!visited.count(adj[s][i])) {
                visited.insert(adj[s][i]);
        	    queue.push_back(adj[s][i]); 
            }
		} 
    } 
} 

void DFS(int s){
    set <int> visited;
    stack<int> stek; 

    visited.insert(s);
    stek.push(s); 
    while(!stek.empty()) 
    { 
        s = stek.top(); 
        cout << s << " ";
        stek.pop(); 
        for (unsigned int i = 0; i < adj[s].size(); i++) 
        { 
            if(!visited.count(adj[s][i])) {
                visited.insert(adj[s][i]);
        	    stek.push(adj[s][i]); 
            }
		} 
    } 
}

unsigned int BS(int s) 
{ 
    set <int> visited;
    list<int> queue; 
    visited.insert(s);
    queue.push_back(s); 
    while(!queue.empty()) 
    { 
        s = queue.front(); 
        cout << s << " ";
        queue.pop_front(); 
        for (unsigned int i = 0; i < adj[s].size(); i++) 
        { 
            if(!visited.count(adj[s][i])) {
                visited.insert(adj[s][i]);
        	    queue.push_back(adj[s][i]); 
            }
		} 
    } 
    return visited.size();
} 


int DS(int s){
    set <int> visited;
    stack<int> stek; 
    int counter = 1;
    visited.insert(s);
    stek.push(s); 
    while(!stek.empty()) 
    { 
        s = stek.top(); 
        stek.pop(); 
        for (unsigned int i = 0; i < adj[s].size(); i++) 
        { 
            if(!visited.count(adj[s][i])) {
                visited.insert(adj[s][i]);
        	    stek.push(adj[s][i]); 
                counter++;
            }
		} 
    } 
    return counter;
}

int main(){
    int m, u, v;
    cin >> m;
    for(int i = 0; i < m; i++){
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    BFS(1);
    puts("");
    DFS(1);
    puts("");
    cout << DS(1) << endl;
    puts("");
    cout << BS(1) << endl;
    return 0;
}
