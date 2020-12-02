# include <bits/stdc++.h>
# include <iostream>
# include <utility>
# include <vector>
# include <string>
using namespace std;

typedef long long int lli;
typedef std::vector<int> vi;

void answer(){
	lli n;
	cin >> n;
	
	if (n == 1) printf("-1\n");
	else{
		for (lli i = 0; i < n-1; i++) printf("9");
		printf("8\n");
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