#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
 int array[10];
 printf("Введите десять целых чисел:\n");
 for(int i = 0; i < 10; ++i) {
 scanf("%d", &array[i]);
 }

 for (int i = 9; i >= 0; i--) {
 	printf("%d ", array[i]);


 }
 printf("\n");


 return 0;
}


