#include <stdio.h>

int main(){
	int n, a;
	scanf("%d", &n);
	a=n%10;
	while(n>9)
		n/=10;
	printf("%d %d", n, a);
	return 0;
}
