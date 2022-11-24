#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int max(int x, int y){
    if(x > y){
        return x;
    }else{
        return y;
    }
}
  
    int left_max = max(a, b);
    int right_max = max(c, d);
    int ans = max(left_max, right_max);   
    
    printf("%d", ans);
    
    return 0;
}
