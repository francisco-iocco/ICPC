#include <bits/stdc++.h> 



using namespace std;

int n, m;
bool visited[1000][1000];
//vector<vector<bool>> visited(n, vector<bool>(m, false));
vector<pair<int, int>> moves ={{0,1}/*der*/,{1,0}/*abajo*/,{0,-1}/*izq*/,{-1,0}/*arriba*/};
vector<string> mapa(n);
int rooms = 0;


bool isVisited(int i, int j) {
    if(visited[i][j]) {
        return true;
    }
    visited[i][j] = true;
    return false;
}

int dfs(int i, int j) {
    if (mapa[i][j] == '#' || isVisited(i, j) || j >= n ||i >= m ){
        return 1;
    } 
    visited[i][j] = true;

    for(auto p: moves)    
        if (isVisited(i + p.first ,j + p.second))
        {
            return dfs(i+p.first, j+p.second);
        }
    return 0;
}

int main(){
    int n, m;
    string mapa[1000][1000];
    int rooms = 0;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> mapa[i];
    }

    
    cout << rooms;
    return 0;
}
