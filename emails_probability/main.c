/*
    Fórmula da probabilidade condicional:

    P(A/B) = P(A ∩ B) / P(B)

    Em um conjunto de emails, 20% são spam (evento S).
    Sabe-se que 15% de todos os e-mails contém a palavra "grátis".
    Entre os e-mails que contêm a palavra "grátis" (evento G), 70% são spam.

    Pergunta: qual a probabilidade de um e-mail ser spam e conter "grátis"?

    100% dos e-mails
    └── 15% contêm "grátis"
            └── 70% desses são spam  →  0,70 × 0,15 = 10,5%

    P(S|G) = 70%
    P(S ∩ G) = P(S|G) * P(G)
    P(S ∩ G) = 0,70 * 0,15
    P(S ∩ G) = 0,105 (10,5%)
    */

#include <stdio.h>

int main() {
    // P(G): Probabilidade de conter "grátis"
    const double P_G = 0.15;

    // P(S|G): Probabilidade de ser spam dado que contém "grátis"
    const double P_S_dado_G = 0.70;

    // Cálculo da Intersecção: P(S ∩ G) = P(S|G) * P(G)
    double P_S_inter_G = P_S_dado_G * P_G;

    printf("--- Analise de Probabilidade ---\n");
    printf("Probabilidade de ser spam e conter 'gratis'\n");
    printf("Resultado: %.3f (%.1f%%)\n\n", P_S_inter_G, P_S_inter_G * 100);

    return 0;
}
