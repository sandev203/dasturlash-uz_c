#include <stdio.h>
int main()
{
    int a,sum=0;
    printf("a="); scanf("%d",&a);
    for(int i=0; i<=a; i++)
    {
        if(i%5==0)
        {
            sum+=i;
        }
    }
    printf("natija=%d",sum);
    return 0;
}
//a soni berilgan. 0 dan a gacha bo'lgan 5 ga bo'linadigan sonlar yig'indisini toping va 
//yig'indini konsolga chiqaring. a sonini ham inobatga oling.