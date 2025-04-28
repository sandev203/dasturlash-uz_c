#include <stdio.h>
int main()
{
    int a,b,sum=0;
    printf("a="); scanf("%d",&a);
    printf("b="); scanf("%d",&b);
    for(int i=a; i<=b; i++)
    {
        if(i%2==0 && i%3==0)
        {
            sum++;
        }
    }
    printf("natija=%d",sum);
    return 0;
}
//a, b sonlar berilgan.
//a va b sonlar orasidagi 2 va 3 ga bo'linadigan sonlarning sonini  konsolga chiqaring. 