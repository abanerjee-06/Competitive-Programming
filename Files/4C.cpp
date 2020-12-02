# include <bits/stdc++.h>
# include <iostream>
# include <utility>
# include <vector>
# include <string>
# include <map>
using namespace std;

typedef long long int lli;
typedef std::vector<int> vi;

void answer(){
	lli n,num;
	cin >> n;
	string s="";
	std::map<string,lli> dict;

	for (lli i=0;i<n;i++){
		cin >> s;
		if (dict.find(s) == dict.end()){
			dict[s] = 0;
			printf("OK\n");
		}
		else{
			num = dict[s]+1;
			dict[s] = num;
			printf("%s%lld\n",s.c_str(),num);
		}
	} 
}

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	answer();
	return 0;
}