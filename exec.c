#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void binary(float num) {
    
    int a = *(int *) &num; 
    int tam = sizeof(a) * 8; 
    char *b = malloc(1 + tam); 
    b[tam] = '\0';
    int ind = tam - 1;
    while(ind >= 0) {
        if (a & 1)
            *(b + ind) = '1';
        else
            *(b + ind) = '0';
        a >>= 1;
        ind--;
    }
    printf("\t\t\t o valor em binario eh ---> %s \n\n\n",b);
    free(b);
}

int main(void) {
    float num;
        printf("\n\n\n\t\t\t           ***BINARY CONVERT***\n");
        printf("\t\t\t|========================================|\n");
        printf("\t\t\t|    Informe o valor a ser convertido    |\n"); 
        printf("\t\t\t|========================================|\n");
        printf("\t\t\t|----> ");
        
    scanf("%f", &num);
    binary(num);
    system("pause");
}