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
  integral+=(lim_sup-x)*f(lim_inf+x/2.0);
return 0;
}
