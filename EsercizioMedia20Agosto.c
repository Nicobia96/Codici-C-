#include <stdio.h>

int main() {

    int primo_numero;
    int secondo_numero;
    float media;

    printf("inserisci il primo numero\n");
    scanf("%d" , &primo_numero);

    printf("inserisci il secondo numero\n");
    scanf("%d" , &secondo_numero);

    media = (float)(primo_numero + secondo_numero)/2;

    printf("la media aritmetica dei due numeri e': %f\n" , media);

    return 0;
  
}