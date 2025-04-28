#include <stdio.h>
int main()
{
    int a,b,sum=0;
    printf("a="); scanf("%d",&a);
    printf("b="); scanf("%d",&b);
    for(int i=a; i<=b; i++)
    {
        if(i%2==0)
        {
            sum++;
        }
    }
    printf("natija=%d",sum);
    return 0;
}
//a, b sonlar berilgan
//a va b sonlar orasidagi juft sonlarni sonini toping   (a sonini inobatga oling) va natijani konsolga chiqaring.