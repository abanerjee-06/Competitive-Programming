/* Finding the indices in a list whose sum meets a certain target */
# include <bits/stdc++.h>
# include <iostream>
# include <utility>
# include <vector>
# include <string>
# include <unordered_map>
using namespace std;

typedef long long int lli;
typedef std::vector<int> vi;

int* answer(int nums[],int target){
	unordered_map <int,int> umap;
	int complement;
	for (int i=0;i<n;i++){
		umap[nums[i]] = i;
	}
	for (int j=0;j<n;j++){
		complement = target - nums[j]
		if ((umap.find(complement)!=umap.end()) && (umap[complement]!=i)){
			static int r[2] = {umap.find(complement),i};
			return r;
		}		
	}
}

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;

	while (t){
		answer();
		t--;
	}
	return 0;
}
