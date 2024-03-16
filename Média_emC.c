#include <stdio.h>

int main(){

    float nota1, nota2, nota3, media;
    int i;

    for (i = 1; i <= 40; i++)
    {
        printf("\nInsira as notas dos alunos:\n");
        scanf("%f", &nota1);
        scanf("%f", &nota2);
        scanf("%f", &nota3);
        media = (nota1 + nota2 + nota3) / 3;

        if (media >= 7){
            printf("Aluno Aprovado!");
            printf("\nNota:%.lf\n",media);
        } else{
            printf("Aluno Reprovado!");
            printf("\nNota:%.lf\n",media);
        }  
    }
    printf("\nFim do Programa!\n\n");
    return 0;
}
