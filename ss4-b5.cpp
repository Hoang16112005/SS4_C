#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d%d%d", &c, &a, &b);
    if (a < c && c < b){
    	printf("%d in range of %d and %d", c, a, b);
	}
	else{
		printf("%d not in range of %d and %d", c, a, b);
	}
    
    return 0;
}
