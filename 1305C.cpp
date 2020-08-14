# include <bits/stdc++.h>
# include <iostream>
# include <vector>
# include <string>
using namespace std;

typedef long long int lli;

void answer(){
	int n,m;
	lli num,term,res=1;
	cin >> n >> m;
	vector<lli> arr;
	for (int i=0;i<n;i++){
		cin >> num;
		arr.push_back(num);
	}
	if (n<=m){
		for (int i=0;i<n-1;i++){
			for (int j=i+1;j<n;j++){
				term = arr[i] - arr[j];
				if (term < 0) term = -term;
				res = res * (term % m);
				res = res % m;
			}
		}
		cout << res << "\n"; 
	}
	else cout << "0" << "\n";
}

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	answer();

	return 0;
}