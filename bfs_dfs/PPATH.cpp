#include <bits/stdc++.h>
using namespace std;

vector<int> adj[10000];


void SieveOfEratosthenes()
{
    int n = 10000;
    bool prime[10001];
    set <int> primes;
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    for (int p = 1000; p <= n; p++){
        if (prime[p]){
            int a = p / 1000;
            int b = p % 1000 / 100; 
            int c = p % 100 / 10;
            int d = p % 10;     
            for(int i = 0; i < 4; i++){
                for(int j = 0; j < 10; j++) {
                    if(i == 0){
                        int temp = j;
                        temp = j * 1000 + b * 100 + c * 10 + d;
                        if (temp < 1000 || temp == p)
                            continue;
                        if (prime[temp]){
                            adj[p].push_back(temp);
                            adj[temp].push_back(p);
                        }
                    }
                    if(i == 1){
                        int temp = j;
                        temp = a * 1000 + j * 100 + c * 10 + d;
                        if (temp < 1000 || temp == p)
                            continue;
                        if (prime[temp]){
                            adj[p].push_back(temp);
                            adj[temp].push_back(p);
                        }
                    }
                    if(i == 2){
                        int temp = j;
                        temp = a * 1000 + b * 100 + j * 10 + d;
                        if (temp < 1000 || temp == p)
                            continue;
                        if (prime[temp]){
                            adj[p].push_back(temp);
                            adj[temp].push_back(p);
                        }
                    }
                    if(i == 3){
                        int temp = j;
                        temp = a * 1000 + b * 100 + c * 10 + j;
                        if (temp < 1000 || temp == p)
                            continue;
                        if (prime[temp]){
                            adj[p].push_back(temp);
                            adj[temp].push_back(p);
                        }
                    }
                }
            }
        }
    }  
}

int BFS(int s,int dest) 
{
    int source = s;
    set <int> visited;
    list<int> queue; 
    map <int,int> path;
    visited.insert(s);
    queue.push_back(s); 
    while(!queue.empty()) 
    {
        s = queue.front();
        if(s == dest){
            int temp = dest;
            int ans = 0;
            while (temp != source){
                ans++;
                temp = path[temp];
            }
            return ans;
        }
        queue.pop_front(); 
        for (unsigned int i = 0; i < adj[s].size(); i++) 
        { 
            if(!visited.count(adj[s][i])) {
                visited.insert(adj[s][i]);
        	    queue.push_back(adj[s][i]); 
                path[adj[s][i]] = s;
            }
		} 
    }
    return -1;
} 


int main(){
    SieveOfEratosthenes();
    int testcase;
    cin >> testcase;
    for(int i = 0; i < testcase; i++){
        int a, b;
        cin >> a >> b;
        int ans = BFS(a,b);
        cout << (ans == -1 ? "Impossible" : to_string(ans)) << endl;

    }
}
