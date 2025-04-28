#include <stdio.h>
int main()
{
    int a,b,sum=0;
    printf("a="); scanf("%d",&a);
    printf("b="); scanf("%d",&b);
    for(int i=a; i<=b; i++)
    {
        if(i%3==0)
        {
            sum++;
        }
    }
    printf("Natija=%d",sum);
    return 0;
}
//a, b sonlar berilgan.
//a va b sonlar orasidagi 3 ga bo'linadigan sonlarni yig'indisi va sonini konsolga chiqaring. 