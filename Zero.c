#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int n1, n2, aux, res, p;
    char str[2];
    char stringFinal[9] = "";

    printf("Digite o numero 1: ");
    scanf("%d", &n1);
    printf("Digite o numero 2: ");
    scanf("%d", &n2);

    if( (n1 != 0 || n2 != 0) &&  (n1 >= 1 && n1 <= 999,999.999) && (n2 >=1)){
        res = n1 + n2;
        aux = res;
        while(aux != 0){
            p = aux;
            aux = aux / 10;
            res = p % 10;
            if(res != 0){
                sprintf(str, "%d", res);
                strcat(stringFinal, str);
            }
        }
    }
    for(int i=strlen(stringFinal)-1;i>=0;i--){
        printf("%c",stringFinal[i]);
    }
    return 0;
}
