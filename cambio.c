#include <stdio.h>

#define tc_usd_gtq 7.79     //Tipo de cambio del dia  1 USD = 7.79 GTQ
#define tc_eur_usd 1.09     //Tipo de cambio del dia  1 EUR = 1.09 USD 
#define tc_eur_gtq 8.45     //Tipo de cambio del dia  1 EUR = 8.45 GTQ

int main() {
    int opcion;
    float cantidad;

    printf("Bienvenido al servicio de cambio de moneda\n");
    printf("1. Convertir Dolares a Quetzales\n");
    printf("2. Convertir de Quetzales a Dolares\n");
    printf("3. Convertir de Euros a Dolares\n");
    printf("4. Convertir de Dolares a Euros\n");
    printf("5. Convertir de Euros a Quetzales\n");
    printf("6. Convertir de Quetzales a Euros\n");
    printf("Ingrese su opcion");
    scanf("%d" , &opcion);

    switch (opcion) {
        case 1:
            printf("Ingrese la cantidad en Dolares: ");
            scanf("%f" , &cantidad);
            printf("%.2f USD equivale a %.2f GTQ\n" , cantidad, cantidad * tc_usd_gtq);
            break;
        case 2: 
            printf("Ingrese la cantidad en Quetzales: ");
            scanf("%f" , &cantidad);
            printf("%.2f GTQ equivale a %.2f USD\n" , cantidad, cantidad / tc_usd_gtq);
            break;
        case 3 : 
            printf("Ingrese la cantidad en Euros: ");
            scanf("%f" , &cantidad);
            printf("%.2f EUR equivale a %.2f USD\n" , cantidad, cantidad * tc_eur_usd);
            break;
        case 4: 
            printf("Ingrese la cantidad en Dolares: ");
            scanf("%f" , &cantidad);
            printf("%.2f USD equivale a %.2f EUR\n" , cantidad, cantidad / tc_eur_usd);
            break;
        case 5: 
            printf("Ingrese la cantidad en Euros: ");
            scanf("%f" , &cantidad);
            printf("%.2f EUR equivale a %.2f GTQ\n" , cantidad, cantidad * tc_eur_gtq);
            break;
        case 6: 
            printf("Ingrese la cantidad en Quetzales: ");
            scanf("%f" , &cantidad);
            printf("%.2f GTQ equivale a %.2f EUR\n" , cantidad, cantidad / tc_eur_gtq);
            break;
        default:
            printf("Opcion no valida\n");
    }

    return 0;

}