#include <stdio.h>

int main(void) {
    int n1,n2,n3;
    printf("inserisci il valore del primo numero: ");
    scanf("%d",&n1);
    printf("inserisci il valore del secondo numero: ");
    scanf("%d",&n2);
    printf("inserisci il valore del terzo numero: ");
    scanf("%d",&n3);
    if(n1>n2 && n1>n3) {
            printf("il primo numero e' piu' grande");
    }
    if(n2>n1 && n2>n3) {
            printf("il secondo numero e' piu' grande");
        }
    if (n3>n2 && n3>n1) {
        printf("il terzo numero e' piu' grande");
    }
}

