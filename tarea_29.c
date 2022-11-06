#include <stdio.h>
void main ()

{

int i,azul[9], mult, verde[13], mayor, x, j ;

for (i=0;i<9;i++)
{
    mult= i*3;
    printf ("Azul [ %d ] = %d \n",i, mult );
}

for (i=0;i<13;i++)
{

    printf ("\n Dame el valor %d \n",i+1);
    scanf("%d",&verde[i]);
}
mayor=verde[0];
//j=1;
for (x=0;x<13;x++)
{
    if(verde[x]>mayor)
    {mayor=verde[x];
    j=x+1;
    }
}
printf ("\n El mayor es %d y esta en la posicion %d \n",mayor,j);
}