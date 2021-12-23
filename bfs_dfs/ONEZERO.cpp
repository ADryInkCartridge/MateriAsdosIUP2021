#include <bits/stdc++.h>
using namespace std;

int stringMod(string s, int source){
    int n = s.size();
    int result = 0;
    for(int i = 0; i< n; i++){
        result = (result * 10 +  s[i] - '0') % source;
    }
    return result;
}

string BFS(string s) 
{
    int mod = atoi(s.c_str());
    set <int> visited;
    list<string> queue; 
    queue.push_back("1");
	 
    while(!queue.empty()) 
    {
        s = queue.front();
        queue.pop_front(); 
        int ans = stringMod(s, mod);
        cout << s << " " << ans << endl;
        if(ans == 0)
            return s;
        else if(!visited.count(ans)) {
                visited.insert(ans);
        	    queue.push_back(s + "0"); 
        	    queue.push_back(s + "1"); 
        }
    }
    return "-1";
} 


int main(){
    int testcase;
    cin >> testcase;
    for(int i = 0; i < testcase; i++){
        string s;
        cin >> s;
        cout << BFS(s) << endl;
    }
}
