#include <stdio.h>

int main(void) {
    char categorias[3][10] = {
        {"Jovem"}, {"Adulto"}, {"Idoso"}
    };
    int idades[3][2] = {
      {0, 18}, {19, 60}, {61, 200}
    };

    int age;
    // printf("Digite a sua idade :");
    // scanf("%d", &age);
    int idadesLength = (sizeof(idades) / sizeof(idades[0]));
    // printf("%zu", idadesLength);
    int idadesIndiceLength;

    for (int i=0; i < idadesLength; i++) {
        idadesIndiceLength = (sizeof(idades[i]) / 4);
        // printf("%d", idadesIndiceLength);
        for (int subI=0; subI < idadesIndiceLength; subI++) {
            printf("%d", idades[i][subI]);
        }
    }


    // printf("%d", age);


    return 0;
}
