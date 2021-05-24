/*Dep4_Prog2:
Verificar si es vocal o letra*/
#include <stdio.h>

int main()
{
    char letra;
    printf("\n Introduce una letra");  
    scanf("%c", &letra);

    if ( (letra == "a"​|| letra == "A") ||
         (letra == "e"|| letra == "E") ||
         (letra == "i"|| letra == "I") ||
         (letra == "o"|| letra == "O") ||
         (letra == "u"|| letra == "U")

       )
        {
        printf("\n ES UNA VOCAL");
    }
    else
    {
        printf("\n NO ES VOCAL ");
    }

    return 0;
}