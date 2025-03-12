#include <stdio.h>
 
int main() {
  float nota1, nota2, pass = 5;
  float soma;
  float media;
  
  
    printf("*** PROGRAMA PARA CALCULO DE MÉDIA DOS ALUNOS***\n");
    printf("Insira a nota 1:\n");
    scanf("%f", &nota1);

    printf("Insira nota 2:\n");
    scanf("%f", &nota2);
    

    //INSERINDO A EQUAÇÃO QUE EU QUERO QUE O PROGRAMA FAÇA, TEM MÉTODO DE EQUAÇÃO SIMPLIFICADA
    soma = nota1 + nota2;
    media = soma / 2;


    //RETORNO AO ALUNO SE ELE FOI APROVADO OU NÃO, MOSTRANDO A MÉDIA DELE
    if (media >= pass){
        printf("Parabéns você foi aprovado com a média de: %.2f", media);
    } else {
        printf("Infelizmente você não foi aprovado, sua média foi de: %.2f", media);
    }
    

    




    return 0;
}