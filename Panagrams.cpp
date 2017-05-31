#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
char str[10000];int c1=0;char str2[1000];
    scanf("%[^\n]s",str);
    int z=strlen(str);
   int i,j,sum;int c=0;
    for(i=97;i<=122;i++)
    {
        for(j=0;j<z;j++)
        {
            if(str[j]==i||str[j]==i-32)
            {
          str2[c]=1;
                c++;
            break;}
        }
    }
   for(i=0;i<26;i++)
       sum=sum+str2[i];
    if(sum==26)
        printf("pangram");
        else
        printf("not pangram");
    return 0;
}
