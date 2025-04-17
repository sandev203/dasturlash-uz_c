#include <stdio.h>
int main(){
    int a, sum=0;
    printf("a="); scanf("%d",&a);
    for(int i=0; i<=a; i++)
    {
        sum+=i;
    }
    printf("yig'indi=%d",sum);
    return 0;
}
//a soni berilgan.  
// 0 dan a gacha bo'lgan sonlar yig'indisini toping  va yig'indini konsolga chiqaring. a sonini ham hisobga oling.