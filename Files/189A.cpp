# include <bits/stdc++.h>
# include <iostream>
# include <utility>
# include <vector>
# include <string>
using namespace std;

typedef long long int lli;
typedef std::vector<int> vi;

void answer(){
	lli n,a,b,c;
	cin >> n >> a >> b >> c;

	lli min;

	if (a<b && a<c){
		min = a;
		a = 0;
	}
	else if (b<a && b<c){
		min = b;
		b = 0;
	}
	else if (c<a && c<b){
		min = c;
		c = 0;
	}
	else if (a==b && b==c){
		min = a;
	}
	else if(a==b && a<c){
		min = a;
		a = 0;
		b = 0;
	}
	else if(a==c && b<c){
		min = a;
		a = 0;
		c = 0;
	}
	else if(b==c && b<a){
		min = b;
		b = 0;
		c = 0;
	}
	
	if (n%min == 0){
		printf("%lld\n",n/min);
	}
	else{
		lli num = min*(n/min);
		lli count = 0;
		while (true){
			count++;
			if (a!=0 && ((n-num+count*min==a) || ((n-num+count*min)%a==0))){
				lli val = (n-num+count*min)/a;
				ans1 = val + n/min - count;
				break;
			}
			else if (b!=0 && ((n-num+count*min==b) || ((n-num+count*min)%b==0))){
				lli val = (n-num+count*min)/b;
				ans2 = val + n/min - count;
				break;
			}
			else if (c!=0 && ((n-num+count*min==c) || ((n-num+count*min)%c==0))){
				lli val = (n-num+count*min)/c;
				ans3 = val + n/min - count;
				break;
			}
			else if ((n-num+count*min==(a+b+c)) || ((n-num+count*min)%(a+b+c)==0)){
				lli val = (n-num+count*min)/(a+b+c);
				if ((a!=0 && b!=0)||(b!=0 && c!=0)||(a!=0 && c!=0)){
					val++;
				}
				ans4 = val + n/min - count;
				break;
			}
		}
	}
}

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	answer();
	return 0;
}