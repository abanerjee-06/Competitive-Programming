# include <bits/stdc++.h>
# include <vector>
# include <string>
using namespace std;

typedef long long int lli;

void answer(){
	string b;
	cin >> b;
	for (int i=0;i<b.size();i=i+2) printf("%c",b[i]);
	printf("%c\n",b[b.size()-1]);
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
