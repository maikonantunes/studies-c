#include<stdio.h>

int main(){
    float valor_bilhete=0.0;
    float valor_unidade_bilhete=2.0;
//vc trabalha em uma bilheteria, e tem q saber o valor total de vendas 
//de bilhetes da banda deus e amor
//cada bilhete tem o valor de dois reais e a fila tem um total de 10 pessoas
for(int valor=1;valor<=10;valor++){
    valor_bilhete+=valor_unidade_bilhete;
    
}
// printf("O valor total do bilhete e %2.f\n",valor_bilhete);
}