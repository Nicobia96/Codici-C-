#include <stdio.h>

int main() {

 int primo_numero;
 int secondo_numero;
 int moltiplicazione;

 printf ("inserisci il primo numero:\n");
 scanf( "%d" , &primo_numero);

 printf ("inserisci secondo numero:\n");
 scanf ("%d" , &secondo_numero);

 moltiplicazione = primo_numero * secondo_numero;

 printf ("il prodotto dei due numeri inseriti e': %d\n", moltiplicazione);

 return 0;
}
