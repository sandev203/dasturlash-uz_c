#include <stdio.h>
int main()
{
    int a,sum=0;
    printf("a="); scanf("%d",&a);
    for(int i=0; i<a; i++)
    {
        if(i%2==0)
        {
            sum++;
        }
    }
    printf("natija=%d",sum);
    return 0;
}
//a soni berilgan. 0 dan a gacha bo'lgan juft sonlar soni toping va konsolga chiqaring. a sonini inobatga olmaymiz.