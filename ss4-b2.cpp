#include <stdio.h>
int main(){
	int a;
	scanf("%d", &a);
	if(a % 2 == 0){
		printf("EVEN");
	}
	if(a % 2 != 0){
		printf("ODD");
	}
	return 0;
}
