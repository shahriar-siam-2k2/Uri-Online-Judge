//1041-Coordinates of a Point
#include<stdio.h>

int main()
{
    float X,Y;
    scanf("%f %f",&X,&Y);
    if(X>0.0 && Y>0.0)
    {
        printf("Q1\n");
    }
    else if(X<0.0 && Y>0.0)
    {
        printf("Q2\n");
    }
    else if(X<0.0 && Y<0.0)
    {
        printf("Q3\n");
    }
    else if(X>0.0 && Y<0.0)
    {
        printf("Q4\n");
    }
    else if(X==0.0)
    {
        if(Y==0.0)
        {
            printf("Origem\n");
        }
        else
        {
            printf("Eixo Y\n");
        }
    }
    else if(Y==0.0)
    {
        if(X==0.0)
        {
            printf("Origem\n");
        }
        else
        {
            printf("Eixo X\n");
        }
    }
    return 0;
}
