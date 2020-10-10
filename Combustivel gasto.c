#include <stdio.h>
#include <string.h>

int main(){
    int h;
    int vm;
    printf("Digite o tempo gasto na viagem (HORAS): ");
    scanf("%d", &h);
    printf("Digite a velocidade media (KM/H): ");
    scanf("%d", &vm);

    int distancia = (h * vm);
    float litros = distancia / (float) 12;
    printf("%.3f", litros);

    return 0;
}
