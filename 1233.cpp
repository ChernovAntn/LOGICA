#include <iostream>
#include <stdio.h>
#include <locale>
#include <malloc.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <windows.h>

int main()

{

SetConsoleCP(1251);
SetConsoleOutputCP(1251);

int a;
int **n;
int b;
scanf_s("%d", &a);
scanf_s("%d", &b);

n = (int**) malloc(a * sizeof(int*));
int result = 0;
 

for (int i = 0; i< a; i++) {
	n[i]=(int*)malloc(b * sizeof(int));
for (int j = 0; j < b; j++) {
  n[j] = (int*)malloc(a * sizeof(int));
  *n[j] = rand() %10;
  printf("%d  ", *n[j]);
//  result += *n[j]; 
}

for (int i = 0; i< a; i++) {

for (int j = 0; j < b; j++) {
    result += n[i][j]; 
}
printf (" = %d ", result);
printf("\n");
result = 0;
}
getchar(); getchar();
}
