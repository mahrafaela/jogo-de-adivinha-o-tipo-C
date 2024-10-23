// Online C compiler to run C program online
#include <stdio.h>
int main() {
    printf("************************************\n");
    printf("*Bem vindo ao Jogo da adivinhação** \n");
    printf("*************************************\n");
    
    int numerosecreto = 42;
 
 int chute;
 printf ("Qual é o seu chute: \n");
 
 scanf ("%d", &chute);
 printf ("Seu chute foi %d \n",chute);
 
    if(chute==numerosecreto){
        printf("Você acertou! \n");
    } else{
        printf("Você errou!\n");
      }
    return 0;
}