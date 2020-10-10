#include <stdio.h>
#include <string.h>

int main(){
    int q;
    printf("Digite a quantidade da sequencia: ");
    scanf("%d", &q);
    int vet[q];
    for(int i = 0;i <= sizeof(vet)/4;i++){
        if(i == 0){
            vet[i] = i;
        }else if(i == 1){
            vet[i] = i;
        }else{
            vet[i] = vet[i-2] + vet[i-1];
        }
    }
    for(int i=0;i<=sizeof(vet)/4;i++){
        printf("%d ", vet[i]);
    }
    return 0;
}
