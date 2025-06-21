#include "estruturas.h"

int main(){
    FILE* arquivo;

    arquivo = fopen("new.txt", "r");
    
    if(arquivo == NULL){
        printf("erro ao abrir o arquivo");
    }
    return 0; 
}