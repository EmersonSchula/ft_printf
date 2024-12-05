#include <stdio.h>     // Apenas para comparar com printf
#include <stdlib.h>    // Para testes com ponteiros
#include "ft_printf.h" // Inclua seu arquivo de cabeçalho aqui

int main(void)
{
    int count_ft, count_std;

    // Teste básico com strings
    count_ft = ft_printf("ft_printf: %s\n", "Hello, 1world!");
    count_std = printf("___printf: %s\n", "Hello, 1world!");
    printf("ft_printf retornou: %d | printf retornou: %d\n\n", count_ft, count_std);

    // Teste com caracteres
    count_ft = ft_printf("Caractere: %c\n", 'A');
    count_std = printf("Caractere: %c\n", 'A');
    printf("ft_printf retornou: %d | printf retornou: %d\n\n", count_ft, count_std);

    // Teste com inteiros
    count_ft = ft_printf("Número inteiro: %d\n", 42);
    count_std = printf("Número inteiro: %d\n", 42);
    printf("ft_printf retornou: %d | printf retornou: %d\n\n", count_ft, count_std);

    // Teste com números negativos
    count_ft = ft_printf("Número negativo: %d\n", -12345);
    count_std = printf("Número negativo: %d\n", -12345);
    printf("ft_printf retornou: %d | printf retornou: %d\n\n", count_ft, count_std);

    // Teste com ponteiros
    int x = 42;
    int *p;
    p = &x;
    count_ft = ft_printf("Endereço de memória: %p\n", p);
    count_std = printf("Endereço de memória: %p\n", p);
    printf("ft_printf retornou: %d | printf retornou: %d\n\n", count_ft, count_std);

    // Teste com múltiplos argumentos
    count_ft = ft_printf("Múltiplos: %d, %c, %s\n", 123, 'B', "Testando");
    count_std = printf("Múltiplos: %d, %c, %s\n", 123, 'B', "Testando");
    printf("ft_printf retornou: %d | printf retornou: %d\n\n", count_ft, count_std);

    // Teste com % literal
    count_ft = ft_printf("Porcentagem: %%\n");
    count_std = printf("Porcentagem: %%\n");
    printf("ft_printf retornou: %d | printf retornou: %d\n\n", count_ft, count_std);

    // Teste com (0)
    count_ft = ft_printf(0);
    count_std = printf(0);
    printf("ft_printf retornou: %d | printf retornou: %d\n\n", count_ft, count_std);
    return 0;
}
