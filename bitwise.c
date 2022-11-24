#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    //calculate_the_maximum(n, k);
    int a = 0, b = 0, c = 0;
    
    for(int i = 1; i <= n; i++){
        for(int j = i + 1; j <= n; j++){
            if(a < (i & j) && (i & j) < k)
                a = i & j;
            if(b < (i | j) && (i | j) < k)
                b = i | j;
            if(c < (i ^ j) && (i ^ j) < k)
                c = i ^ j;
        }
    }
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    return 0;
}
