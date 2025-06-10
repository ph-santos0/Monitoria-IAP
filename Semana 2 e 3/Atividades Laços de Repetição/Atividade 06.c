#include <stdio.h>

int main() {
    float nota, altura;
    int idade, classificados = 0, naoClassificados = 0;
    int i;

    for (i = 0; i < 3; i++) {
        printf("\nAluno %d:\n", i + 1);
        printf("Digite a nota: ");
        scanf("%f", &nota);
        printf("Digite a altura (em metros, ex: 1.75): ");
        scanf("%f", &altura);
        printf("Digite a idade: ");
        scanf("%d", &idade);

        if (altura >= 1.75 && nota >= 6.0 && idade >= 14 && idade <= 17) {
            classificados++;
        } else {
            naoClassificados++;
        }
    }

    printf("\nTotal de alunos classificados: %d\n", classificados);
    printf("Total de alunos nao classificados: %d\n", naoClassificados);

    return 0;
}