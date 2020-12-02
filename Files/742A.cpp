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
	scanf("%lld",&n);
	if (n%4 == 1) printf("8");
	else if (n%4 == 2) printf("4");
	else if (n%4 == 3) printf("2");
	else if (n == 0) printf("1");
	else printf("6");
	printf("\n");
}

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	answer();
	return 0;
}
