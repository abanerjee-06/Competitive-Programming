# include <bits/stdc++.h>
# include <iostream>
# include <vector>
# include <string>
using namespace std;

typedef long long int lli;

void answer(){
	bool flag=true;
	int n,num;
	vector<int> arr;
	cin >> n;
	for (int i=0;i<n;i++){
		cin >> num;
		arr.push_back(num);
	}	
	if (arr.size()>1){
		sort(arr.begin(),arr.end());
		for (int i=1;i<arr.size();i++){
			if (arr[i]-arr[i-1] > 1){
				flag = false; 
				printf("NO\n");;
				break;
			}
		}
		if (flag == true) printf("YES\n");;
	}
	else printf("YES\n");;
}

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	int t;
	cin >> t;

	while (t){
		answer();
		t--;
	}
	return 0;
}
