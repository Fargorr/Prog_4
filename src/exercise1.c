#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
 double array[10];
 
 for(int i = 0; i < 10; ++i) {
 scanf("%lf", &array[i]);
 }
 double summa = 0;
 for (int i = 0; i < 10; i++) {
	summa += array[i];

 }
 printf("%0.2f\n", (double)summa/10.0);
 

 return 0;
}
