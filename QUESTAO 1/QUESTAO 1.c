#include <stdio.h>

struct Aluno {
    char nome[50];
    int idade;
    float nota;
};

int main() {

    struct Aluno aluno1 = {"Lucas", 19, 7.5};

    printf("Nome: %s\n", aluno1.nome);
    printf("Idade: %d\n", aluno1.idade);
    printf("Nota: %.2f\n", aluno1.nota);

    return 0;
}
