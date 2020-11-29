# include <bits/stdc++.h>
# include <iostream>
# include <utility>
# include <vector>
# include <string>
using namespace std;

typedef long long int lli;

void answer(){
	lli n;
	cin >> n;
	lli arr[n];
	for (int i=0;i<n;i++) cin >> arr[i];
	if (arr[0] + arr[1] <= arr[n-1]) printf("1 2 %lld\n",n);
	else printf("-1\n");
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