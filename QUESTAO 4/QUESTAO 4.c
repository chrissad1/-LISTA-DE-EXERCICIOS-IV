#include <stdio.h>
#include <string.h>

struct Aluno {
    char nome[50];
    int idade;
    float nota;
};
void exibirAluno(struct Aluno a) {
    printf("Nome: %s\n", a.nome);
    printf("Idade: %d\n", a.idade);
    printf("Nota: %.2f\n", a.nota);
}
struct Aluno criarAluno() {
    struct Aluno novo;

    printf("Digite o nome: ");
    scanf("%s", novo.nome);

    printf("Digite a idade: ");
    scanf("%d", &novo.idade);

    printf("Digite a nota: ");
    scanf("%f", &novo.nota);

    return novo;
}

void removerAluno(struct Aluno *a) {
    strcpy(a->nome, "vazio");
    a->idade = 0;
    a->nota = 0;
}
int main() {

    struct Aluno alunos[4];
    int i, opcao, indice;

    for (i = 0; i < 4; i++) {
        strcpy(alunos[i].nome, "vazio");
        alunos[i].idade = 0;
        alunos[i].nota = 0;
    }
    do {
        printf("\n--- MENU ---\n");
        printf("1 - Criar novo aluno\n");
        printf("2 - Exibir um aluno\n");
        printf("3 - Remover aluno\n");
        printf("4 - Listar todos os alunos\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);
        switch(opcao) {

            case 1:
                printf("Escolha a posicao (0 a 3): ");
                scanf("%d", &indice);
                alunos[indice] = criarAluno();
                break;

            case 2:
                printf("Escolha a posicao (0 a 3): ");
                scanf("%d", &indice);
                exibirAluno(alunos[indice]);
                break;

            case 3:
                printf("Escolha a posicao (0 a 3): ");
                scanf("%d", &indice);
                removerAluno(&alunos[indice]);
                break;

            case 4:
                printf("\n--- Lista de alunos ---\n");
                for (i = 0; i < 4; i++) {
                    printf("\nAluno %d:\n", i);
                    exibirAluno(alunos[i]);
                }
                break;

            case 0:
                printf("Saindo...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    return 0;
}