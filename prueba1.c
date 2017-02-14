#include <stdio.h>
float lim_inf,lim_sup,incremento;
float x, integral=0.0;
float f(float x)
{return 2*x;}

int main()
{
  printf("-----------------------------\n");
  printf("Introduzca el limite superior\n");
  printf("-----------------------------\n");
  scanf("%f", &lim_sup);
  system("cls");
  do {
    printf("--------------------------\n");
    printf("Introduzca limite inferior\n");
    printf("--------------------------\n");
    scanf("%f", &lim_inf);
    x=lim_inf;
  } while(lim_sup<lim_inf);
  system("cls");
  do {
    printf("Introduzca el incremento");
    scanf("%f\n", &incremento);
  } while(incremento<=0);
  system("cls");
  while (x<(lim_sup-lim_inf))
  {
    integral+=incremento*f(x+incremento/2.0);
    x+=incremento;
    printf("%f %f\n", integral,x);
  }
  integral+=(lim_sup-x)*f(lim_inf+x/2.0);

}
