#include <stdio.h>

void rotateLeft(int* pa, int* pb, int* pc){
    int sp1 = *pc;
    int sp2 = *pb;
    *pc = *pa;
    *pb = sp1;
    *pa = sp2;
    return;
}

void rotateRight(int* pa, int* pb, int* pc){
    int sp1 = *pa;
    int sp2 = *pb;
    *pa = *pc;
    *pb = sp1;
    *pc = sp2;
    return;
}

int main(void){
    int a = 10;
    int b = 20;
    int c = 30;
    printf("%d:%d:%d\n", a, b, c);
    while(1){
        int n;
        scanf("%d", &n);
        if(n==1){
            rotateLeft(&a, &b, &c);
        }
        else if(n==2){
           
            rotateRight(&a, &b, &c);
        }
        else
            break;

        printf("%d:%d:%d\n", a, b, c);
        }
    return 0;
}

