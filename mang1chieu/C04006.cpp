#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int arr[n];
	int i;
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	int j = n-1;
	for(i=0;i<n/2;i++){
		int c=arr[i];
		arr[i]=arr[j];
		arr[j]=c;
		j--;
	}
	for(i=0;i<n;i++)
		printf("%d ", arr[i]);
	return 0;
}
