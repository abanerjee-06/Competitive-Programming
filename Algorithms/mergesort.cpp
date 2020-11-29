# include <bits/stdc++.h>                  // Merge Sort Algorithm for ascending order
# include <iostream>
# include <utility>
# include <vector>
# include <string>
using namespace std;

typedef long long int lli;
typedef std::vector<int> vi;

void merge(int arr[],int l,int m,int u){
	int i,j,k,n1,n2;
	n1 = m-l+1;n2=u-m;
	int L[n1];int R[n2];
	for (i=0;i<n1;i++) L[i] = arr[l+i];
	for (j=0;j<n2;j++) R[j] = arr[m+1+j];
	i=0;j=0;k=l;
	while (i<n1 && j<n2){
		if (L[i]<=R[j]){
			arr[k] = L[i];
			i++;
		} 
		else{
			arr[k] = R[j];
			j++;
		}
		k++;
	}
	while(i<n1){
		arr[k] = L[i];
		i++;k++;
	}
	while(j<n2){
		arr[k] = R[j];	
		j++;k++;
	}
}
void mergesort(int arr[],int l,int u){
	if(l<u){
		int m = l+(u-l)/2;
		mergesort(arr,l,m);
		mergesort(arr,m+1,u);
		merge(arr,l,m,u);
	}
}

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,num;
	int arr[n];
	cin >> n;

	for (int i=0;i<n;i++) {
		cin >> num;
		arr.push_back(num);
	}
	mergesort(arr,0,n-1);
	for (int i=0;i<n;i++) cout << arr[i] << " ";
	cout << endl;
	return 0;
}