# include <bits/stdc++.h>
# include <iostream>
# include <utility>
# include <vector>
# include <string>
using namespace std;

typedef long long int lli;
typedef std::vector<int> vi;

void addedge(vi adj[],int u, int v){
	adj[u].push_back(v);
	adj[v].push_back(u);
}

void printgraph(vi adj[],int V){
	for (int i=0;i<V;i++){
		cout << i;
		for (auto j = adj[i].begin();j!=adj[i].end();++j)
			cout << "->" << *j;
		cout << "\n";
	}
}

void answer(int v, int e){
	vi adj[v];
	int src,dest;
	for (int i=0;i<e;i++){
		cin >> src >> dest;
		addedge(adj,src,dest);
	}
	printgraph(adj,v);
}

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,V,E;
	cin >> t;

	while (t){
		cin >> V >> E;
		answer(V,E);
		t--;
	}
	return 0;
}