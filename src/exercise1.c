#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
 double array[10];
 
 for(int i = 0; i < 10; ++i) {
 scanf("%lf", &array[i]);
 }

 int summa = 0;
 for (int i = 0; i < 10; i++) {
	summa += (int)(array[i] * 100);

 }
 summa /= 10;
 printf("%0.2f\n", (double)summa/100.0);
 

 return 0;
}
