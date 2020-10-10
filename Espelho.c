#include <stdio.h>
#include <stdlib.h>

int main(){
    int in;
    int final;
    int res;
    int aux;
    printf("Sua sequencia inicia em qual numero? ");
    scanf("%d", &in);
    printf("Sua sequencia encerra em qual numero? ");
    scanf("%d", &final);

    for(int i = in;i <= final;i++){
        printf("%d", i);
        if(i == final){
            for(int j = final; j >= in ; j--){
                aux = j;
                while(aux != 0){
                    res = aux%10;
                    printf("%d", res);
                    aux /= 10;
                }
            }
        }
    }
    return 0;
}
