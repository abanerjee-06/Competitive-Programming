# include <iostream>

using namespace std;

int main(void){
	int t,n;
	scanf("%d",&t);
	for (int i=0;i<t;i++){
		scanf("%d",&n);
		if ((n/2)%2) printf("NO\n");
		else {
			printf("YES\n");
			for(int j=1;j<n/2+1;j++) printf("%d ",2*j);
			for (int j=1;j<n/2;j++) printf("%d ",j*2-1);
			printf("%d\n",n+n/2-1);
		}
	}
}