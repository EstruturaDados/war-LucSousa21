#include <stdio.h>

//Define o tipo de dado Territorio
typedef struct{
    char nome[30];
    char cor[30];
    int tropas;
} Territorio; 


int main()
{
    printf("Informe os dados \n");
    
    Territorio territorio[5]; //Vetor armazena até 5 territorios
    
    //Lê os dados de 5 territorios
    for(int i = 0; i < 5; i++){        
    
        printf("Informe um nome \n");
        scanf(" %s", territorio[i].nome);
        printf("Informe a cor do exercito \n");
        scanf(" %s", territorio[i].cor);
        printf("Informe a quantidade de tropas \n");
        scanf(" %d", &territorio[i].tropas);        
        
    }
    
    //Mostra os 5 territorios
    for(int i = 0; i < 5; i++){
        
        printf("Nome: %s | Cor: %s | Tropas: %d \n",
        territorio[i].nome,
        territorio[i].cor,
        territorio[i].tropas);
    }
    
    return 0;
}