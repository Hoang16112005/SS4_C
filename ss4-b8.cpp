#include <stdio.h>
int main() {
   int a, b, c;
   scanf("%d%d%d", &a, &b, &c);
   if(a + b > c && b + c > a && a + c > b){
   	printf("La 3 canh cua tam giac");
   }
   else{
   	printf("khong la 3 canh cua tam giac");
   }
   return 0;
}
