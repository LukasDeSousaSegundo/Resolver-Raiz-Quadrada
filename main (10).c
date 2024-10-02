#include <stdio.h>
#include <math.h>   // Para usar a função sqrt
#include <stdlib.h> // Para exit(0)

int main()
{
    int a, b, c;
    char opcao;
    
    do
    {
    printf("Escreva um valor para ser seu 'a'(x^2)\n");
    scanf("%d", &a);
        
    printf("Escreva um valor para ser seu 'b'(x)\n");
    scanf("%d", &b);
        
    printf("Escreva um valor para ser seu 'c'\n");
    scanf("%d", &c);
        
    printf("Sua equação ficou %dx^2 + %dx + %d\n", a, b, c);
        
    printf("Deseja continuar a operação? Se não, digite 'n' para reposicionar os valores. Digite 's' para continuar.\n");
    scanf(" %c", &opcao);
    
    }while(opcao == 'n');
    
    float x1, x2; 
    int delta = (b * b) - (4 * a * c);

    if(delta < 0)
    {
    printf("Essa equação não possui raízes reais\n");
    }
    else if (delta > 0)
    {
    x1 = (-b - sqrt(delta)) / (2 * a);
    x2 = (-b + sqrt(delta)) / (2 * a);
    
    printf("Essa equação possui duas raízes: x' = %.2f e x'' = %.2f\n", x1, x2);
    }
    else
    {
    x1 = -b / (2 * a);
    printf("Essa equação possui uma única raiz que vale: %.2f\n", x1);
    }

    return 0;
}
