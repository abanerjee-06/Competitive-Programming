# include <bits/stdc++.h>
# include <iostream>
# include <utility>
# include <vector>
# include <string>
using namespace std;

typedef long long int lli;

void answer(){
	string s;
	int c_1,score;
	c_1=0;score=0;
	cin >> s;
	vector<int> v;
	for (int i=0;i<s.length();i++){
		if (s[i]=='1') c_1++;
		else if (c_1 != 0) {
			v.push_back(c_1);
			c_1 = 0;
		}
	}
	if (c_1 != 0) v.push_back(c_1);
	sort(v.begin(),v.end(),greater<int>());	
	for (int j=0;j<v.size();j=j+2){
		score+= v[j];
	}
	printf("%d\n",score);
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