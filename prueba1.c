#include <stdio.h>
float lim_inf,lim_sup,incremento;
float x, integral=0.0;
float f(float x)
{return 2*x;}

int main()
{
  printf("Introduzca el limite superior\n");
  scanf("%f", &lim_sup);
  system("cls");
  do {
    printf("Introduzca limite inferior\n");
    scanf("%f", &lim_inf);
    x=lim_inf;
  } while(lim_sup<lim_inf);
  system("cls");
  do {
    printf("Introduzca el incremento\n");
    scanf("%f", &incremento);
  } while(incremento<=0);
  system("cls");
  while (x<(lim_sup-lim_inf))
  {
    integral+=incremento*f(x+incremento/2.0);
    x+=incremento;
    printf("%.3f %.3f\n", integral,x);
  }
  //-------------------------------------------------------------
  //esto hace la operacion para encontrar el valor de la integral
  integral+=(lim_sup-x)*f(lim_inf+x/2.0);
  //integral+=(lim_sup-x)*(2*x)(lim_inf+x/2.0);?
  printf("\nvalor de la integral =%f", integral);
return 0;
}
