#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char s[1000];
    char a[10]={0,0,0,0,0,0,0,0,0,0};
    int i;
    scanf("%[^\n]", s);
    int l = strlen(s);
    
    for(i=0; i<l; i++)
    {
        int m = s[i]-48;
        a[m]=a[m]+1;
    }
    
    for(i=0; i<9; i++)
    {
        printf("%d ", a[i]);
    }
     printf("%d", a[9]);
    return 0;
}
