#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a;
		scanf("%d", &a);
		printf("%lld\n", (long long)a*a);
	}
	return 0;
}
