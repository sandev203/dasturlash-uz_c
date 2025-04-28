#include <stdio.h>
int main(){
    int a,b,sum=0;
    printf("a="); scanf("%d",&a);
    printf("b="); scanf("%d",&b);
    for(int i=a; i<b; i++)
    {
        sum+=i;
    }
    printf("natija=%d",sum);
    return 0;
}
//a, b sonlar berilgan.
//a va b sonlar orasidagi (butun) sonlar   yig'indisini toping (a sonini inobatga oling) va yig'indini konsolga chiqaring.