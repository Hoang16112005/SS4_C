#include <stdio.h>
int main() {
    int D, M, Y; // Day, Month, Year
    scanf("%d%d%d", &D, &M, &Y);
    if(Y > 2000 && Y < 2024){
   	if(M >= 1 && M <= 12){
    	if (M == 1 && M == 3 && M == 5 && M == 7 && M == 8 && M == 10 && M == 12){
    		if(D <= 31){
    			printf("Valid Date");
			}
		}
		else if (M == 4 && M == 6 && M == 9 && M == 11){
			if(D <= 30){
    			printf("Valid Date");
		    }
	    }
		else if (M == 2){
				if (Y % 400 == 0){
				    }else if(Y % 100 == 0){
				       }else if(Y % 4 == 0){
				       printf("Valid Date");
				        }
			    }
				    else{
				   	  printf("Invalid Date");
	                }
	        }
    
    printf("%d/%d/%d is valid date", D, M, Y);
    }
	else if(Y < 2000 || Y > 2024){
   	printf("%d/%d/%d is Invalid date", D, M, Y);
   }
return 0;
}
