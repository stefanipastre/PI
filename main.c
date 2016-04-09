#include <stdio.h>
#include <math.h>

double pi(void);
int main(void) {
	
printf("Valor de PI: %f\n", pi());

}
double pi(void){
	double f, valor_pi = 0.0, count = 10000000;

	for (int i = 0; i < count; ++i)
	{
		f =  4 * pow(-1,i)/(2*i +1);
		valor_pi = f + valor_pi;
	}

	return valor_pi;
}
