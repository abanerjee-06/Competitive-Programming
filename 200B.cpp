# include <iostream>
# include <cmath>

using namespace std;

int main(void){
	int n,p;
	double tot;
	tot = 0;
	scanf("%d",&n);
	for (int i = 0;i<n;i++){
		scanf("%d",&p);
		tot = tot + p/100.0;
	}
	tot = tot*100 / n;
	printf("%2.12f\n",tot);
}
		
