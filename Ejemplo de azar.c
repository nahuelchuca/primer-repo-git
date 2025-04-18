#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(NULL));
    printf("el numero obtenido es: %i",rand() %10);
}
