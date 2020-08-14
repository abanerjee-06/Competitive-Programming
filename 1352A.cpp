# include <iostream>
# include <cmath>

using namespace std;

int main(void){
	int t,n,a,b,c,d,count;
	int arr[4];
	scanf("%d",&t);
	for (int i = 0;i < t;i++){
		count = 0;
		scanf("%d",&n);
		a = n % 10; 
		if (a){
			count++;
			arr[count-1] = a;
		}
		n = n / 10;
		b = n % 10; 
		if (b){
			count++;
			arr[count-1] = b * 10;
		}
		n = n / 10;
		c = n % 10;
		if (c){
			count++;
			arr[count-1] = c * 100;
		}
		n = n / 10;
		d = n % 10;
		if (d){
			count++;
			arr[count-1] = d * 1000;
		}
		if (count){
			printf("%d\n",count);
			for (int j = 0;j < count;j++)
				printf("%d ",arr[j]);
			printf("\n");
		}
		else{
		       printf("1\n");
		       printf("10000\n");
		}
	}
}

		
