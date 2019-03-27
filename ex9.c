#include <stdio.h>

void main(){
    float alunoA[3], alunoB[3];
    float mediaAlunoA = 0, mediaAlunoB = 0;

    printf("Bem vindo ao programa!\n");

    for(int i=0; i<3; i++){
        printf("Digite a %dº nota do Aluno A: \n", i+1);
        scanf("%f", &alunoA[i]);

        printf("Digite a %dº nota do Aluno B: \n", i+1);
        scanf("%f", &alunoB[i]);
    }

    for(int j=0; j<3; j++){
        mediaAlunoA += alunoA[j];
        mediaAlunoB += alunoB[j];
    }

    printf("A soma das notas do aluno A foi: %.2f\n",mediaAlunoA);
    mediaAlunoA /= 3;
    printf("A média das notas do aluno A foi: %.2f\n",mediaAlunoA);

    printf("A soma das notas do aluno B foi: %.2f\n", mediaAlunoB);
    mediaAlunoB /= 3;
    printf("A média das notas do aluno B foi: %.2f\n",mediaAlunoB);

    if(mediaAlunoA < mediaAlunoB){
        printf("O aluno B apresentou melhor rendimento!\n");
    } else if (mediaAlunoB == mediaAlunoA){
        printf("Os alunos apresentaram rendimento igual!\n");
    } else {
        printf("O aluno A apresentou melhor rendimento!\n");
    }
    
}