#include <stdio.h>

struct Aluno {
    char nome[50];
    int idade;
    float nota;
};

int main() {

    struct Aluno alunos[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", alunos[i].nome);

        printf("Digite a idade: ");
        scanf("%d", &alunos[i].idade);

        printf("Digite a nota: ");
        scanf("%f", &alunos[i].nota);

        printf("\n");
    }

    printf("\n Lista de alunos \n");
    for (i = 0; i < 5; i++) {
        printf("Nome: %s\n", alunos[i].nome);
        printf("Idade: %d\n", alunos[i].idade);
        printf("Nota: %.2f\n", alunos[i].nota);
        printf("\n");
    }

    return 0;
}
