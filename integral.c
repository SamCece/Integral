#include <stdio.h>

float f(float x)
{return 2*x;}
//¿que hace f?
//------------------------------------------------------------
float integrar(float lim_inf, float lim_sup, float inc){
	float integral, x=lim_inf;

	integral=0.0;

	while (x<(lim_sup-lim_inf))
		{
			integral+=inc*f(x+inc/2.0);
			x+=inc;
			printf("%f %f\n", integral,x);
		}

	integral+=(lim_sup-x)*f(lim_inf+x/2.0);
	return integral;
}
//------------------------------------------------------------
int main()
{
float lim_sup,lim_inf,inc;
printf("calculo de la integral definida\n");
printf("Introduzca el limite superior\n");
scanf("%f",&lim_sup);
do
	{
		printf("Introduzca el limite inferior");
		scanf("%f",&lim_inf);
	} while(lim_sup<lim_inf);
do
	{
		printf("Introduzca el incremento");
		scanf("%f",&inc);
	}while(inc<=0);
printf("valor de la integral =%f",integrar(lim_inf,lim_sup,inc));
return 0;
}
