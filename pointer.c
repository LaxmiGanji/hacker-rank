#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function    
}

int main() {
    int a, b, b1;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    int a1 = *pa + *pb;
    
    if (a > b){
        b1 = *pa - *pb;
    }
    else {
        b1 = *pb - *pa;
    }
    printf("%d\n%d", a1, b1);

    return 0;
}
