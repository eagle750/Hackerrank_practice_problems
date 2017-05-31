#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
/*
 * Complete the function below.
 */
int maxXor(int l, int r) {
int x,y,i,j;int b=0,max;
    x=l>r?l:r;
    y=l>r?r:l;
    for(i=y;i<=x;i++)
        {
        for(j=i;j<=x;j++)
            {
           b=i^j;
           if(b>max)
               max=b;
        }
    }
    
    return(max);
}
int main() {
    int res;
    int _l;
    scanf("%d", &_l);
    
    int _r;
    scanf("%d", &_r);
    
    res = maxXor(_l, _r);
    printf("%d", res);
    
    return 0;
}
