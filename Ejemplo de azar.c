#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(NULL));
    printf("el n%cmero obtenido es: %i",163,rand() % 10);
}
