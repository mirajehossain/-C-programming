#include<stdio.h>
int main()
{

    int x1,x2,y1,y2,temp,min,hour;
    scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
    if(x1 < y1)
    {
        hour = y1 - x1;
        if(hour<2)
        {
            if(x2< y2)
            {
                min = y2-x2;
                printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n",min);
            }
            else if(x2>y2)
            {
                min = 60 - x2;
                min = min + y2;
                printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n",min);
            }
            else
            {
                printf("O JOGO DUROU %d HORA(S) E 0 MINUTO(S)\n",hour);
            }
        }
        else
        {
            printf("O JOGO DUROU %d HORA(S) E ",hour);
            if(x2< y2)
            {
                min = y2-x2;
                printf("%d MINUTO(S)\n",min);
            }
            else if(x2>y2)
            {
                min = 60 - x2;
                min = min + y2;
                printf("%d MINUTO(S)\n",min);
            }
            else
            {
                printf("0 MINUTO(S)\n",hour);
            }
        }

    }
    else if(x1 > y1 )
    {
        hour = 24 - x1;
        hour = hour+y1-1;

        printf("O JOGO DUROU %d HORA(S) E ",hour);

          if(x2< y2)
        {
            min = y2-x2;
            printf("%d MINUTO(S)\n",min);
        }
        else if(x2>y2)
        {
            min = 60 - x2;
            min = min + y2;
            printf("%d MINUTO(S)\n",min);
        }
        else
        {
            printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");

        }
    }
    else if (x1==y1)
    {

        if(x2< y2)
        {
            hour = x1- y1;
        printf("O JOGO DUROU %d HORA(S) E ",hour );
            min = y2-x2;
            printf("%d MINUTO(S)\n",min);
        }
        else if(x2>y2)
        {
            min = 60 - x2;
            min = min + y2;
              printf("O JOGO DUROU 23 HORA(S) E ");
            printf("%d MINUTO(S)\n",min);
        }
        else
        {

            printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");

        }
    }



    return 0;
}
