/*
CONTEXTO

O Script precisa calcular as probabilidades para ajudar os cientistas a entenderem os resultados dos testes:

1. Qual a probabilidade de um herói, escolhido aleatoriamente, ter sofrido o evento adverso (poderes trocados)?
2. Qual a probabilidade de um herói ter recebido a Vacina A?
3. Qual a probabilidade de um herói ter recebido a Vacina B e sofrido o evento adverso (poderes trocados)?
4. Qual a probabilidade de um herói ter recebido a Vacina A OU sofrido o evento adverso (ou ambos)?

Vacinas      Poderes Trocados  Poderes Normais   Total
Vacina A        12 heróis         238 heróis      250
Vacina B        38 heróis         132 heróis      170
Total           50 heróis         370 heróis      420
*/

#include <stdio.h>

int main() {

    printf("ATIVIDADE DE PROBABILIDADE - AULA 17/03/2026\n\n");

    const int TOTAL = 420;
    const int TOTAL_VACCINE_A = 250;
    const int TOTAL_VACCINE_B = 170;

    const int CHANGED_VACCINE_A = 12;
    const int CHANGED_VACCINE_B = 38;
    int total_changed = CHANGED_VACCINE_A + CHANGED_VACCINE_B;

    // Questão 1
    float prob_changed = (float) total_changed / TOTAL;
    printf(
        "Probabilidade de um herói, aleatoriamente, ter o poder trocado: %.4f (%.2f%%)\n",
        prob_changed,
        prob_changed * 100
    );

    // Questão 2
    float prob_vaccine_a = (float) TOTAL_VACCINE_A / TOTAL;
    printf(
        "Probabilidade de um herói receber a Vacina A: %.4f (%.2f%%)\n",
        prob_vaccine_a,
        prob_vaccine_a * 100
    );

    // Questão 3
    float prob_vaccine_b_and_changed = (float) CHANGED_VACCINE_B / TOTAL;
    printf(
        "Probabilidade de um herói receber a Vacina B e ter o poder trocado: %.4f (%.2f%%)\n",
        prob_vaccine_b_and_changed,
        prob_vaccine_b_and_changed * 100
    );

    /*  Questão 4
        P(A ∪ B) = P(A) + P(B) − P(A ∩ B)

        Subtraímos a interseção (CHANGED_VACCINE_A) porque esses heróis
        foram contados duas vezes em P(A) + P(B).
    */
    float prob_vaccine_a_or_changed =
    prob_vaccine_a + prob_changed
    - ((float) CHANGED_VACCINE_A / TOTAL);
    printf(
        "Probabilidade de um herói receber a Vacina A OU ter o poder trocado (ou ambos): %.4f (%.2f%%)\n\n",
        prob_vaccine_a_or_changed,
        prob_vaccine_a_or_changed * 100
    );

    return 0;
}
