# include <iostream>

using namespace std;

int main(void){
	int t;
	long long int a,b,div;
	scanf("%d",&t);
	for (int i = 0;i < t;i++){
		scanf("%lld %lld",&a,&b);
		if (a%b) div = a - a%b + b;
		else div = a;
		printf("%lld\n",div-a);
	}
}
