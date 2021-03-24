#include <stdio.h>
#include <stdlib.h>

int main() {
    float v[5]={10, 20, 30, 40, 50};
    float media, soma=0;
    for (int x=0; x<5; x++){
    soma = soma + v[x];
}
    media = soma/5;
    printf("Media = %.2f", media);
return 0;
}
