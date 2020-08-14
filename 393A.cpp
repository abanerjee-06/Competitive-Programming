# include <bits/stdc++.h>
# include <iostream>
# include <vector>
# include <string>
using namespace std;

typedef long long int lli;

void answer(){
	string s;
	lli cnt_n=0,cnt_e=0,cnt_i=0, cnt_t=0;
	lli smallest;
	cin >> s;

	for (int i=0;i<s.size();i++){
		cout << s[i];
		if (s[i] == "n") cnt_n++;
		else if (s[i] == "i") cnt_i++;
		else if (s[i] == "e") cnt_e++;
		else if (s[i] == "t") cnt_t++;
	}
	cnt_n = cnt_n / 3; cnt_e = cnt_e / 3; 
	smallest = cnt_n;
	if (cnt_n < smallest) smallest = cnt_n;
	if (cnt_e < smallest) smallest = cnt_e;
	if (cnt_i < smallest) smallest = cnt_i;
	if (cnt_t < smallest) smallest = cnt_t;

	cout << smallest;
}

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	answer();

	return 0;
}
