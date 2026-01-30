#include <stdio.h>

int main() {

    int idade;
    
    printf("Digite sua idade: \n");
    scanf("%d", &idade);
   
    if(idade < 18){
        printf("Você é menor de idade.\n");
    }else if(idade > 18 && idade < 60){
        printf("Você é um Adulto.\n");
    }else{
        printf("Você é Idoso.\n");
    }

    printf("Sua idade é %d anos\n", idade);

    return 0;
}