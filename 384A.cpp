# include <bits/stdc++.h>
# include <iostream>
# include <vector>
# include <string>
using namespace std;

typedef long long int lli;

void answer(){
	int n;
	cin >> n;
	string c1 = "C",c2 = ".";
	if (n%2) cout << ((n/2+1)*(n/2+1) + (n/2)*(n/2)) << "\n";
	else cout << ((n/2)*(n/2) + (n/2)*(n/2)) << "\n"; 

	for (int i=0;i<n;i++){
		if (i%2){c1 = ".";c2 = "C";}
		else {c1 = "C";c2 = ".";}

		for (int j=0;j<n;j++){
			if (!(j%2)) cout << c1;
			else cout << c2;
		}
		cout << "\n";
	}
}

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	answer(); 

	return 0;
}