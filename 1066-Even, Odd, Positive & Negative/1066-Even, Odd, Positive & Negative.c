//1066-Even, Odd, Positive & Negative
#include<stdio.h>

int main()
{
    int n,i,pos,neg,odd,even;
    pos=0;
    neg=0;
    odd=0;
    even=0;
    for(i=0 ; i<5 ; i++)
    {
        scanf("%d",&n);
        if(n%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }

        if(n>0)
        {
            pos++;
        }
        else if(n<0)
        {
            neg++;
        }
    }
    printf("%d valor(es) par(es)\n",even);
    printf("%d valor(es) impar(es)\n",odd);
    printf("%d valor(es) positivo(s)\n",pos);
    printf("%d valor(es) negativo(s)\n",neg);
    return 0;
}
