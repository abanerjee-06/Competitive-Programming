# include <iostream>

using namespace std;

int main(void){
	int n,num,lar,count;
	int arr[1000];lar = 0;count = 0;
	scanf("%d",&n);
	scanf("%d",&arr[0]);
	if (n != 1){
		for (int i=1;i<n;i++){
			scanf("%d",&num);
			if (num > arr[lar]){
				lar++;
				arr[lar] = num;
				count++;
			}
			else if (num < arr[0]){
				lar++;
				if (lar != 1){
					arr[lar] = arr[lar-1];
					arr[lar-1] = arr[0];
				}
				else arr[lar] = arr[0];
				arr[0] = num;
				count++;
			}
			else {
				lar++;
				arr[lar] = arr[lar-1];
				arr[lar-1] = num;
			}
		}
	}
	printf("%d\n",count);
}
