# include <bits/stdc++.h>
# include <iostream>
# include <utility>
# include <vector>
# include <string>
using namespace std;

typedef long long int lli;
bool pal_check(r,g,b,w){
	if(r%2 + g%2 + b%2 + w%2 > 1) return false; 
	else return true; 
}
void answer(){
	lli r,g,b,w;
	cin >> r >> g >> b >> w;
	if (r==g && g==b && b==w) printf("Yes\n");
	else {
		if (pal_check(r,g,b,w)) printf("Yes\n");
		else if (r>0 && g>0 && b> 0 && check(r-1,g-1,b-1,w+3)) printf("Yes\n");
		else printf("No\n");
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