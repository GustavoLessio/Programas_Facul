#include <stdio.h>

int main(){
    double lado1, lado2, perimetro;

    printf("Programa que calcula o perimetro de um quadradro\n\n");

    printf("Quanto mede (em cm) o lado do quadrado?\n");
    scanf("%lf", &lado1);
    scanf("%lf", &lado2);

    perimetro = 2*lado1 + 2*lado2;

    printf("O perimetro do quadarado pede %2.lf cm", perimetro);
    printf("\n\nObrigado por usar este progama\n")
}
