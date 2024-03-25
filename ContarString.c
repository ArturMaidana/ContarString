#include <stdio.h>

int calcular_comprimento_string(const char *string) {
    int comprimento = 0;
    while (string[comprimento] != '\0') {
        comprimento++;
    }
    return comprimento;
}

void salvar_comprimento_em_arquivo(int comprimento) {
    FILE *arquivo;
    arquivo = fopen("comprimento_string.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.");
        return;
    }
    fprintf(arquivo, "%d", comprimento);
    fclose(arquivo);
}

int main() {
    char palavra[100];
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    
    int comprimento = calcular_comprimento_string(palavra);
    printf("O comprimento da palavra é: %d\n", comprimento);
    
    salvar_comprimento_em_arquivo(comprimento);
    
    return 0;
}
