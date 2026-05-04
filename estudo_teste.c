  #include <stdio.h>

    int main() {
        
        printf("*** Calculo de Média ***\n");
        
        float nota1, nota2, nota3;
        float media;

        printf("Digite a primieria nota\n");
        scanf("%f", &nota1);

        printf("Digite a sua segunda nota\n");
        scanf("%f", &nota2);

        printf("Digite a sua terceira nota\n");
        scanf("%f", &nota3);

        media = (nota1 + nota2 + nota3) / 3;

        printf("A mèdia das notas é: %.1f\n", media);
        
        
        
        
        
        
        
        return 0;

    }