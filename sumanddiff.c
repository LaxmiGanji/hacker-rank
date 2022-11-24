#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int n,m;
    float c,d;
   
    scanf("%d %d\n",&n,&m);
    scanf("%f %f\n",&c,&d);
    printf("%d %d\n",n+m,n-m);
    printf("%.1f %.1f\n",c+d,c-d);
    return 0;
}
