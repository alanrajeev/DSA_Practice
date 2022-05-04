#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function 
    int c,d,op = 1;
    c = (*a)+(*b);
    d = (*a)-(*b);
    *a = c;
    if (d<0){
        op = -1;
    }
    *b = d*op;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d\n", a, b);

    return 0;
}