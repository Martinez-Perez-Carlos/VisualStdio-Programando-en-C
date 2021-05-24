/*Dep3_Prog2:Verificar la hora*/
#include <stdio.h>

int main()
{
    int hora, minutos, segundos;
    printf("\n Introduce las horas");
    scanf("%d",&hora);
    printf("\n Introduce los minutos");
    scanf("%d",&minutos);
    printf("\n Introduce los segundos");
     scanf("%d",&segundos);

     if (   (horaa>=0 && hora<=23) &&
            (minutos>=0 && minutos<=59) &&
            (segundos>=0 && segundos<=59)
        )
    {
         printf("\n El formato de hora es correcto");
    }
     else
    {
        printf"\n El formato de hora es incorrecto");
    }
    return 0;
}