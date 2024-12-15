/* 
10 - Faça um programa que leia um número inteiro positivo de
três dígitos (de 100 a 999). Gere outro número formado pelos
dígitos invertidos do número lido. Exemplo: número lido: 123 e
o resultado invertido deve ser 321.
*/

/*#include <stdio.h>

int inverterNumero(int numero) {
    int invertido = 0, resto;

    while (numero != 0) {
        resto = numero % 10;
        invertido = invertido * 10 + resto;
        numero /= 10;
    }

    return invertido;
}

int main() {
    int numero, numeroInvertido;

    printf("Digite um número de três dígitos: ");
    scanf("%d", &numero);

    if (numero >= 100 && numero <= 999) {
        numeroInvertido = inverterNumero(numero);
        printf("O número invertido é: %d\n", numeroInvertido);
    } else {
        printf("Número inválido. Digite um número entre 100 e 999.\n");
    }

    return 0;
}*/

#include <stdio.h>

float calcularImposto(int faixa, float salarioBruto) {
    float aliquota;

    switch (faixa) {
        case 1:
            aliquota = 0.05;
            break;
        case 2:
            aliquota = 0.10;
            break;
        case 3:
            aliquota = 0.15;
            break;
        default:
            return -1; // Retorna -1 para indicar faixa inválida
    }

    return salarioBruto * aliquota;
}

int main() {
    int faixaSalarial;
    float salarioBruto, imposto;

    printf("Escolha a faixa salarial:\n");
    printf("1 - Até R$ 2.000\n");
    printf("2 - De R$ 2.000 a R$ 5.000\n");
    printf("3 - Acima de R$ 5.000\n");
    scanf("%d", &faixaSalarial);

    printf("Digite o seu salário bruto: R$ ");
    scanf("%f", &salarioBruto);

    imposto = calcularImposto(faixaSalarial, salarioBruto);

    if (imposto >= 0) {
        printf("O valor do imposto a ser pago é: R$ %.2f\n", imposto);
    } else {
        printf("Faixa salarial inválida.\n");
    }

    return 0;
}
