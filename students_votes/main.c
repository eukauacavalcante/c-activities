#include <stdio.h>

int calculate_students_votes(
    int math,
    int history,
    int portuguese,
    int math_history,
    int history_portuguese,
    int math_portuguese,
    int all_three
) {
    return (math + history + portuguese)
     - (math_history + history_portuguese + math_portuguese)
     + all_three;
}

int main(void) {

    // Valores fixos
    const int MATH = 30;
    const int HISTORY = 60;
    const int PORTUGUESE = 50;

    // Valores das relações entre disciplinas
    const int MATH_HISTORY = 15;
    const int HISTORY_PORTUGUESE = 20;
    const int MATH_PORTUGUESE = 10;

    const int ALL_THREE = 5;
    const int NONE = 40;

    int students_votes = calculate_students_votes(
        MATH,
        HISTORY,
        PORTUGUESE,
        MATH_HISTORY,
        HISTORY_PORTUGUESE,
        MATH_PORTUGUESE,
        ALL_THREE
    );

    printf("Estudantes com votos em pelo menos uma disciplina: %d\n", students_votes);

    int all_students = students_votes + NONE;

    printf("Total de estudantes votantes: %d\n", all_students);

    return 0;
}
