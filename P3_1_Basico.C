/*Dep3_Prog1:Basico*/
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("\n Escribe el valor a:");
    scanf("%d", &a);
    printf("\n Escribe el valor b:");
    scanf("%d", &b);
    printf("\n Escribe el valor c:");
    scanf("%d",&c);

    a = a + 1;
    b = b * 2;
    c = c * c;
    printf ("\n\n Ahora el valor de a es %d",a);
    printf ("\n\n Ahora el valor de b es %d",b);
    printf ("\n\n Ahora el valor de c es %d",c);

    return 0;
}