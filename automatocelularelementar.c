#include <stdio.h>
#define TAM 50

int main() {
    int v[TAM] = {0}, vaux[TAM];
    int i, n;
    v[25] = 1;

    scanf("%d", &n);

    for (i=0; i<TAM; i++) {
        if (v[i]==0)
            printf(" ");
        else
            printf("#");    
    }

    while (n > 0) {
        for (i=0; i<TAM; i++) {
            if (i==0)
                vaux[i] = (v[TAM-1]+v[i+1])%2;
            else if (i==TAM-1)
                vaux[i] = (v[i-1]+v[0])%2;
            else
                vaux[i] = (v[i-1]+v[i+1])%2;
        }

        for (i=0; i<TAM; i++)
            v[i] = vaux[i];
        
        printf("\n");

        for (i = 0; i < TAM; i++) {
            if (v[i] == 0)
                printf(" ");
            else
                printf("#");
        }
        n--;
    }

    return 0;
}