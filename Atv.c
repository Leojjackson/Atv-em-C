#include <stdio.h>
#include <stdlib.h>

// int main()
// {
    // Atividade 1

    // ler 2 valores inteiros A e B e atribui o resultado da soma a variavel X;
    // int a,b,x;

    // scanf("%d", &a);
    // scanf("%d", &b);
    // x = a+b;

    // printf("X = %d", x);

    // printf(" \n Fim do programa");

    // fim do primeiro programa

//     return 0;
// }
//---------------------------------------

// int main()
// {
    //Atividade 2

    //a formula para calcular a circunferencia é: area = TT.raio². considerando para este problema que tt = 3.14159.
    // efetue o calculo da area. elevando o valor de raio ao quadrado e multiplicando  por tt.
    
//     double raio, area,a;
//     area = 3.14159;
//     scanf("%lf", & raio);
//     a = area * (raio * raio);

//     printf("A=%lf", a);
//     printf("\n Fim do programa");
//     return 0;

    
// }

//---------------------------------------

// int main()
// {
    //Atividade 3

    //Leia 2 valores inteiros A, B  a seguir calcule o valor entre elas e atribua o resultasdo a variavel SOMA.

//     int a, b, soma;

//     scanf("%d", &a);
//     scanf("%d", &b);
//     soma = (a+b);

//     printf("SOMA = %d", soma);
//     printf("\n Fim do programa");    
    
//     return 0;
// }

//---------------------------------------

// int main()
// {
    //Atividade 4

    //leia 2 valores inteiros, A seguir calcule o produto entre esses dois valores e atribua esta operação a variavel PROD.

//     int valor1,valor2,prod;

//     scanf("%d", &valor1);
//     scanf("%d", &valor2);
//     prod = (valor1 * valor2);

//     printf("PROD = %d", prod);
//     printf("\n Fim do programa"); 
    
//     return 0;
// }

//---------------------------------------

// int main()
// {
    //Atividade 5

    //leia dois valores flutuantes, que correspondem a notas de alunos. a seguir calcule a média do aluno, sabendo que a nota A tem peso 3.5.
    //a nota B tem peso 7.5(A soma dos pesos portanto é 11)Assuma que cada nota pode ir de 0.0 até 10.0.

//     double a, b, media;

//     scanf("%lf", &a);

//     scanf("%lf", &b);

//     media = (a*3.5)/11 + (b*7.5)/11;

//     printf("MEDIA = %lf", media);

//     printf("\n Fim do programa");
//     return 0;
// }

//---------------------------------------

// int main()
// {
    //Atividade 6

    //leia 3 valores A,B,C que são 3 notas de aluno.calcule a MEDIA do aluno, a nota A tem peso 2, anota B tem peso 3 e a nota C tem peso 5.

//     double a;
//     double b;
//     double c;
//     double media;

//     scanf("%lf", &a);

//     scanf("%lf", &b);

//     scanf("%lf", &c);

        
//     media = (a*2)/10 + (b*3)/10 + (c*5)/10;

//     printf("MEDIA = %lf", media);

//     printf("\n Fim do programa");
//     return 0;
// }

//---------------------------------------

// int main()
// {
    //Atividade 7

    //leia 4 valores inteiros A, B, C, D a seguir calcule a diferença Do produto A e B pelo produto de C e D.

//     int a,b,c,d,diferenca;

//     scanf("%d", &a);

//     scanf("%d", &b);

//     scanf("%d", &c);

//     scanf("%d", &d);

//     diferenca = (a*b - c*d);

//     printf("DIFERENCA = %d", diferenca);

//     printf("\n Fim do programa");
//     return 0;
// }

//---------------------------------------

// int main()
// {
    //Atividade 8

    //Escreva um programa que leia o Numero de um funcionario, o salario por hora, valor q recebe por hora
    // e calcula o salario desse funcionario;

//     int id;
//     double Salario_hora;
//     double Valor_hora;
//     double salario;

//     scanf("%d", &id);
//     scanf("%lf", &Salario_hora);
//     scanf("%lf", &Valor_hora);

//     salario = Salario_hora * Valor_hora;

//     printf("NUMBER = %d \n", id);
//     printf("SALARY = U$ %lf", salario);
//     printf("\n Fim do programas");


//     return 0;
// }

//---------------------------------------

// int main()
// {
    //Atividade 9

    //escreva um programa que leia o nome de um vendedor, o salario fixo e o total de vendas feitas por ele no mês
    // (em dinheiro). sabendo que este vendedor ganha 15% de bonus sobre suas vendas. informar o total a receber no final do mês.
    // char nome;
    // float salario_fixo, Total_de_vendas,total;

    // scanf("%s", &nome);

    // scanf("%f", &salario_fixo);

    // scanf("%f", &Total_de_vendas);

    // total = salario_fixo + (Total_de_vendas * 0.15);

    // // printf("%s", nome);
    // printf("TOTAL = R$ %f", total);
    // printf("\n fim do programa");
    // return 0;
// }

//---------------------------------------

// int main()
// {
    //Atividade 10

    // Neste problema deve-se ler o código de uma peça 1, o numero de peças 1, o valor unitario da peça 1.
    //o codigo de uma peça 2. o numero de peças 2. o valor unitario de uma peça 2. calcule o valor a ser pago.

//     int codigo_peca, N_pecas;
//     float valor_Uni_pecas;
//     float soma;
//     int codigo_pecas2, N_pecas2;
//     float valor_Uni_pecas2;

//     scanf("%d", &codigo_peca);
//     scanf("%d", &N_pecas);
//     scanf("%f", &valor_Uni_pecas);
//     scanf("%d", &codigo_pecas2);
//     scanf("%d", &N_pecas2);
//     scanf("%f", &valor_Uni_pecas2);

//     soma = valor_Uni_pecas  * N_pecas + valor_Uni_pecas2 * N_pecas2;
    
//     printf("VALOR A PAGAR : R$ %f \n", soma);

//     printf("fim do programa");


//     return 0;
// }

//---------------------------------------

// int main()
// {
    //Atividade 11
    //faça um programa que calcule e mostre o volume de uma esfera sendo fornecido o valor de raio(R).
    //A formula para calcular o volume é: (4/3) * pi * R³. considere p valor de pi=3.14159; 
    
//     int raio;
//     float volume,pi;
//     scanf("%d", &raio);
//     pi = 3.14159;
//     volume = (4.0/3) * pi * (raio*raio*raio);

//     printf("VOLUME = %f \n", volume);
//     printf("Fim do programa");  
//    return 0;
}


