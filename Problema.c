#include <stdio.h>

int main() {
    int cantidadPlatos;
    int i;

    char nombres[5][30];
    int cantidad[5];
    float tiempoPorPlato[5];
    int ingredientesPorPlato[5];

    float horasDisponibles;
    int ingredientesDisponibles;

    float totalHoras = 0;
    int totalIngredientes = 0;

    printf("SISTEMA DE CATERING Y EVENTOS ===\n\n");

    printf("Cuantos tipos de platos va a preparar? (maximo 5): ");
    scanf("%d", &cantidadPlatos);

    while (cantidadPlatos < 1 || cantidadPlatos > 5) {
        printf("Error. Ingrese un numero entre 1 y 5: ");
        scanf("%d", &cantidadPlatos);
    }

    printf("\nIngrese las horas disponibles del personal: ");
    scanf("%f", &horasDisponibles);

    printf("Ingrese la cantidad de ingredientes disponibles en bodega: ");
    scanf("%d", &ingredientesDisponibles);

    printf("\n--- DATOS DE LOS PLATOS ---\n");

    for (i = 0; i < cantidadPlatos; i++) {
        printf("\nPlato %d\n", i + 1);

        printf("Nombre del plato: ");
        scanf("%s", nombres[i]);

        printf("Cantidad de platos pedidos: ");
        scanf("%d", &cantidad[i]);

        printf("Tiempo de preparacion por plato en horas: ");
        scanf("%f", &tiempoPorPlato[i]);

        printf("Ingredientes necesarios por plato: ");
        scanf("%d", &ingredientesPorPlato[i]);

        totalHoras = totalHoras + (cantidad[i] * tiempoPorPlato[i]);
        totalIngredientes = totalIngredientes + (cantidad[i] * ingredientesPorPlato[i]);
    }
    