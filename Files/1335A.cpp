#include <iostream>
#include <cmath>
using namespace std;

int main(void){
	int t;
	long long int a,b,n;
	scanf("%d",&t);
	for (int i=0;i<t;i++){
		scanf("%lld",&n);
		if (n == 1) printf("0\n");
		else if (n%2) printf("%lld\n",(n-2)/2+1);
		else printf("%lld\n",(n-2)/2);
	}
}
