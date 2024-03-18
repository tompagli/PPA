#include <stdio.h>

int main() {
    float value = 0;
    scanf("%f", &value); // Use %f para ler um float
    float *point_value = &value;
    printf("%p\n", point_value);
    *point_value = *point_value + 10.0; // Soma 10 ao conteúdo apontado pelo ponteiro do tipo float
    printf("%f\n", value); // Imprime o conteúdo da variável do tipo float
    return 0;
}

