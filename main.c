#include <stdio.h>
#include <stdlib.h>

int main() {
    char nome[100];
    int idade, quantidade;
    float saldo, preco_produto, valor_total;
    
    printf("CADASTRO DE COMPRA\n");
    printf("Nome do cliente: ");
    scanf(" %[^\n]", nome);

    printf("Idade: ");
    scanf("%d", &idade);

    printf("Saldo disponivel (R$): ");
    scanf("%f", &saldo);

    printf("Preco unitario do produto (R$): ");
    scanf("%f", &preco_produto);

    printf("Quantidade desejada: ");
    scanf("%d", &quantidade);

    valor_total = preco_produto * quantidade;
    int tem_idade = (idade >= 18);
    int tem_saldo = (saldo >= valor_total);

    printf("----------------------------------------\n");
    printf("           COMPROVANTE\n");
    printf("Cliente: %s\n", nome);
    printf("Idade: %d anos\n", idade);
    printf("Saldo Atual: R$ %.2f\n", saldo);
    printf("Valor Total da Compra: R$ %.2f \n", valor_total, quantidade, preco_produto);

    if (tem_idade && tem_saldo) {
        printf("STATUS: COMPRA APROVADA!\n");
        printf("Saldo Restante: R$ %.2f\n", saldo - valor_total);
    } 
    else if (tem_idade && !tem_saldo) {
        printf("STATUS: COMPRA RECUSADA!\n");
        printf("Mensagem: O cliente possui idade, mas NAO tem saldo suficiente.\n");
        printf("Faltam: R$ %.2f para concluir a compra.\n", valor_total - saldo);
    } 
    else if (!tem_idade && tem_saldo) {
        printf("STATUS: COMPRA RECUSADA!\n");
        printf("Mensagem: O cliente NAO tem idade suficiente (menor de 18 anos), apesar de possuir saldo.\n");
    } 
    else { // !tem_idade && !tem_saldo
        printf("STATUS: COMPRA RECUSADA!\n");
        printf("Mensagem: O cliente NAO tem idade suficiente e NAO tem saldo disponivel.\n");
    }

    return 0;
}