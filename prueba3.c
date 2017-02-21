#include <stdio.h>
#include <stdlib.h>
int i=0;
float liminf, limsup, inter, deltax, suma, integral;

int main ()
{
  printf("Calculo de una integral definida\n");
  do{
    printf("Dame el limite superior\n");
    scanf("%f", &limsup);
  }while(limsup <= 0);


  do{
    printf("Dame el limite inferior\n");
    scanf("%f", &liminf);
  }while (liminf>limsup);


  do{
    printf("Dame el intervalo\n");
    scanf("%f", &inter);
  }while (inter<=0);

  suma=0.0;
  deltax = (limsup-liminf)/inter;
  printf("%f\n", deltax);
  for(i=0;i<=inter;i++)
  {
    if (i==0){
      suma += 2*(liminf);
      printf("%f\n", suma);
    }
    else if (i>0 && i<inter)
    {
    	suma += 2*(2*(liminf+(i*deltax)));
    	printf("%f\n", suma);
    }
    else if(i==inter){
      suma += 2*(liminf+i*deltax);
      printf("%f\n", suma);
    }
  }

  integral = (deltax/2)*suma;
  printf("El valor aprox. de la integral es: %f\n", integral);
  return 0;
}
