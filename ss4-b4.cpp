#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
	if(a >= 1 && a <= 12){
    	if (a == 1 && a == 3 && a == 5 && a == 7 && a == 8 && a == 10 && a == 12){
    		printf("%d have 31 days");
		}
		else if (a == 4 && a == 6 && a == 9 && a == 11){
    		printf("%d have 30 days");
		}
		else if (a == 2){
			printf("%d have 28 or 29 days", a);
		}
		
	}
	else{
			printf("Invalid");
    }
    return 0;
} 
