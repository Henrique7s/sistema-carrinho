#include <stdio.h>
#include <string.h>

float calculo_carrinho(int *quantidade_produtos);



int main(){
    int quantidade_produtos = 0;
    float valor_carrinho;
    
    printf("Escreva o nome do produto e o seu respectivo valor para adicionar ao carrinho:\n");
    
    valor_carrinho = calculo_carrinho(&quantidade_produtos);
    
    
    printf("O valor total da compra é:R$%.2f\n!", valor_carrinho);
    printf("A quantidade de itens no carrinho é de:%d itens!", quantidade_produtos);
    
   
   
    return 0;
}

float calculo_carrinho(int *quantidade_produtos){
    char produtos[100][50];
    float preco[100];
    int i = 0;
    float valor_total = 0;
    while(i < 100){
    scanf("%s", produtos[i]);
        if(strcmp(produtos[i], "fim") == 0){
            break;
        }
        else{
        scanf("%f", &preco[i]);
        valor_total = valor_total + preco[i];
        (*quantidade_produtos)++; 
        i++;
        }
    }
    return valor_total;
}