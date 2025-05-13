#include <stdio.h>
#include <stdlib.h>


int cmp1(const void *ptr1, const void *ptr2){
    int *x = (int*)ptr1;
    int *y = (int*)ptr2;
    if(*x < *y){
        return -1;
    }
    else{
        return 1;
    }
}

int main(){
    int n = 3;
    int a[10];
    for(int i = 0; i < n; i++){
        printf("Nhap so thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    qsort(a, n, sizeof(int), cmp1);
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
}

