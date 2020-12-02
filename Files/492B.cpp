# include <bits/stdc++.h>
# include <iostream>
# include <utility>
# include <vector>
# include <string>
using namespace std;

typedef long long int lli;
typedef std::vector<long long int> vlli;

void answer(){
	lli n,l,num;
	double d,diff;
	vlli L;

	cin >> n >> l;
	for (lli i=0;i<n;i++){
		cin >> num;
		L.push_back(num);
	}
	sort(L.begin(), L.end());

	if (L[0]!=0){
		d = double(L[0] - 0);
	}
	else{
		d = double(0);
	}
	
	diff = double(0);
	for (lli i = 1;i<n;i++){
		diff = double(L[i] - L[i-1]);
		if (L[i-1]!=0 || L[i]!=n-1){
			diff = diff/2.0;
		}
		if (diff > d){
			d = diff;
		}
	}
	if (L[n-1]!=l){
		diff = double(l - L[n-1]);
		if (diff > d){
			d = diff;
		}
	}

	printf("%f\n",d);
}

int main(void){
	ios_base::sync_with_stdio(false);
	answer();
	return 0;
}