#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, i;

    printf("Digite um numero: ");
    scanf("%d", &a);
    printf("Digite um outro numero: ");
    scanf("%d", &b);

    for(i=a; i<=b; i++){
        if(i%2 != 0)
            printf("%d ", i);
    }

    return 0;
}
