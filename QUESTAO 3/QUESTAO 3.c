#include <stdio.h>

struct Aluno {
    char nome[50];
    int idade;
    float nota;
};

int main() {

    struct Aluno alunos[5];
    int i, indice;

    for (i = 0; i < 5; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", alunos[i].nome);

        printf("Digite a idade: ");
        scanf("%d", &alunos[i].idade);

        printf("Digite a nota: ");
        scanf("%f", &alunos[i].nota);

        printf("\n");
    }

    printf("Digite o indice do aluno que deseja atualizar (0 a 4): ");
    scanf("%d", &indice);

    printf("Digite a nova nota do aluno %s: ", alunos[indice].nome);
    scanf("%f", &alunos[indice].nota);

    printf("\n--- Dados atualizados do aluno ---\n");
    printf("Nome: %s\n", alunos[indice].nome);
    printf("Idade: %d\n", alunos[indice].idade);
    printf("Nota: %.2f\n", alunos[indice].nota);

    return 0;
}