#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int i=1, j;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++)
			if(j<=i) printf("*");
		printf("\n");
	}
	return 0;
}
