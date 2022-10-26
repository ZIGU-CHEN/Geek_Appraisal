#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	double  x=0;
	double  y=0;
	double a = 0;
	double h = 0.001;
	double t = 0;
	double c = 0;
	printf("ÇëÊäÈëaµÄÖµ£º" );
	scanf( " %lf",&a);
	y = a;
	t = a;
	printf("x       y\n");
   do 
   {
	   c = y;
	   x += h;
	   y = t + h * (-t);
	   t = y;
	   printf("%f     %f\n", x, y);
   } while (c-t>0.000001);
	return 0;
}

