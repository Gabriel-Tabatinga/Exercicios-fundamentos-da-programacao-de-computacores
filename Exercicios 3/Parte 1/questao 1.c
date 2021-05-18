/******************************************************************************

Faça um programa que leia cinco grupos de quatro valores (A, B, C, D) e mostre-os na ordem lida. 
Em seguida, organize-os em ordem crescente e decrescente.

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("Descubra a ordem crescente e decrescente de 5 grupos de 4 valores.\n");
    
    float a, b, c, d;
    
    /******
    grupo 1
    ******/
    
    printf("Digite os 4 valores do grupo 1: \n");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    
    if((a >= b) && (a >= c) && (a >= d)) //Nessa condicao decrescente = a
    {
        if((c >= d) && (b >= c)) //Nessa condicao decrescente = a b c d
            printf("A ordem crescente do grupo 1 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", d, c, b, a, a, b, c, d);
        else if((d >= c) && (b >= d)) //Nessa condicao decrescente = a b d c
            printf("A ordem crescente do grupo 1 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", c, d, b, a, a, b, d, c);
        else if((b >= c) && (d >= b)) //Nessa condicao decrescente = a d b c
            printf("A ordem crescente do grupo 1 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", c, b, d, a, a, d, b, c);
        else if((c >= b) && (d >= c)) //Nessa condicao decrescente = a d c b
            printf("A ordem crescente do grupo 1 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", b, c, d, a, a, d, c, b);
        else if((b >= d) && (c >= b)) //Nessa condicao decrescente = a c b d
            printf("A ordem crescente do grupo 1 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", d, b, c, a, a, c, b, d);
        else if((d >= b) && (c >= d)) //Nessa condicao decrescente = a c d b
            printf("A ordem crescente do grupo 1 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", b, d, c, a, a, c, d, b);
    }
    else if((b >= a) && (b >= c) && (b >= d)) //Nessa condicao decrescente = b
    {
        if((c >= d) && (a >= c)) //Nessa condicao decrescente = b a c d
            printf("A ordem crescente do grupo 1 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", d, c, a, b, b, a, c, d);
        else if((d >= c) && (a >= d)) //Nessa condicao decrescente = b a d c
            printf("A ordem crescente do grupo 1 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", c, d, a, b, b, a, d, c);
        else if((a >= c) && (d >= a)) //Nessa condicao decrescente = b d a c
            printf("A ordem crescente do grupo 1 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", c, a, d, b, b, d, a, c);
        else if((c >= a) && (d >= c)) //Nessa condicao decrescente = b d c a
            printf("A ordem crescente do grupo 1 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", a, c, d, b, b, d, c, a);
        else if((a >= d) && (c >= a)) //Nessa condicao decrescente = b c a d
            printf("A ordem crescente do grupo 1 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", d, a, c, b, b, c, a, d);
        else if((d >= a) && (c >= d)) //Nessa condicao decrescente = b c d a
            printf("A ordem crescente do grupo 1 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", a, d, c, b, b, c, d, a);
    }
    else if((c >= a) && (c >= b) && (c >= d)) //Nessa condicao decrescente = c
    {
        if((b >= d) && (a >= b)) //Nessa condicao decrescente = c a b d
            printf("A ordem crescente do grupo 1 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", d, b, a, c, c, a, b, d);
        else if((d >= b) && (a >= d)) //Nessa condicao decrescente = c a d b
            printf("A ordem crescente do grupo 1 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", b, d, a, c, c, a, d, b);
        else if((a >= b) && (d >= a)) //Nessa condicao decrescente = c d a b
            printf("A ordem crescente do grupo 1 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", b, a, d, c, c, d, a, b);
        else if((b >= a) && (d >= b)) //Nessa condicao decrescente = c d b a
            printf("A ordem crescente do grupo 1 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", a, b, d, c, c, d, b, a);
        else if((a >= d) && (b >= a)) //Nessa condicao decrescente = c b a d
            printf("A ordem crescente do grupo 1 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", d, a, b, c, c, b, a, d);
        else if((d >= a) && (b >= d)) //Nessa condicao decrescente = c b d a
            printf("A ordem crescente do grupo 1 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", a, d, b, c, c, b, d, a);
    }
    else if((d >= a) && (d >= b) && (d >= c)) //Nessa condicao decrescente = d
    {
        if((b >= c) && (a >= b)) //Nessa condicao decrescente = d a b c
            printf("A ordem crescente do grupo 1 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", c, b, a, d, d, a, b, c);
        else if((c >= b) && (a >= c)) //Nessa condicao decrescente = d a c b
            printf("A ordem crescente do grupo 1 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", b, c, a, d, d, a, c, b);
        else if((a >= b) && (c >= a)) //Nessa condicao decrescente = d c a b
            printf("A ordem crescente do grupo 1 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", b, a, c, d, d, c, a, b);
        else if((b >= a) && (c >= b)) //Nessa condicao decrescente = d c b a
            printf("A ordem crescente do grupo 1 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", a, b, c, d, d, c, b, a);
        else if((a >= c) && (b >= a)) //Nessa condicao decrescente = d b a c
            printf("A ordem crescente do grupo 1 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", c, a, b, d, d, b, a, c);
        else if((c >= a) && (b >= c)) //Nessa condicao decrescente = d b c a
            printf("A ordem crescente do grupo 1 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", a, c, b, d, d, b, c, a);
    }
    /******
    grupo 2
    ******/
    
    printf("\nDigite agora os 4 valores do grupo 2: \n");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    if((a >= b) && (a >= c) && (a >= d)) //Nessa condicao decrescente = a
    {
        if((c >= d) && (b >= c)) //Nessa condicao decrescente = a b c d
            printf("A ordem crescente do grupo 2 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", d, c, b, a, a, b, c, d);
        else if((d >= c) && (b >= d)) //Nessa condicao decrescente = a b d c
            printf("A ordem crescente do grupo 2 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", c, d, b, a, a, b, d, c);
        else if((b >= c) && (d >= b)) //Nessa condicao decrescente = a d b c
            printf("A ordem crescente do grupo 2 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", c, b, d, a, a, d, b, c);
        else if((c >= b) && (d >= c)) //Nessa condicao decrescente = a d c b
            printf("A ordem crescente do grupo 2 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", b, c, d, a, a, d, c, b);
        else if((b >= d) && (c >= b)) //Nessa condicao decrescente = a c b d
            printf("A ordem crescente do grupo 2 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", d, b, c, a, a, c, b, d);
        else if((d >= b) && (c >= d)) //Nessa condicao decrescente = a c d b
            printf("A ordem crescente do grupo 2 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", b, d, c, a, a, c, d, b);
    }
    else if((b >= a) && (b >= c) && (b >= d)) //Nessa condicao decrescente = b
    {
        if((c >= d) && (a >= c)) //Nessa condicao decrescente = b a c d
            printf("A ordem crescente do grupo 2 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", d, c, a, b, b, a, c, d);
        else if((d >= c) && (a >= d)) //Nessa condicao decrescente = b a d c
            printf("A ordem crescente do grupo 2 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", c, d, a, b, b, a, d, c);
        else if((a >= c) && (d >= a)) //Nessa condicao decrescente = b d a c
            printf("A ordem crescente do grupo 2 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", c, a, d, b, b, d, a, c);
        else if((c >= a) && (d >= c)) //Nessa condicao decrescente = b d c a
            printf("A ordem crescente do grupo 2 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", a, c, d, b, b, d, c, a);
        else if((a >= d) && (c >= a)) //Nessa condicao decrescente = b c a d
            printf("A ordem crescente do grupo 2 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", d, a, c, b, b, c, a, d);
        else if((d >= a) && (c >= d)) //Nessa condicao decrescente = b c d a
            printf("A ordem crescente do grupo 2 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", a, d, c, b, b, c, d, a);
    }
    else if((c >= a) && (c >= b) && (c >= d)) //Nessa condicao decrescente = c
    {
        if((b >= d) && (a >= b)) //Nessa condicao decrescente = c a b d
            printf("A ordem crescente do grupo 2 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", d, b, a, c, c, a, b, d);
        else if((d >= b) && (a >= d)) //Nessa condicao decrescente = c a d b
            printf("A ordem crescente do grupo 2 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", b, d, a, c, c, a, d, b);
        else if((a >= b) && (d >= a)) //Nessa condicao decrescente = c d a b
            printf("A ordem crescente do grupo 2 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", b, a, d, c, c, d, a, b);
        else if((b >= a) && (d >= b)) //Nessa condicao decrescente = c d b a
            printf("A ordem crescente do grupo 2 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", a, b, d, c, c, d, b, a);
        else if((a >= d) && (b >= a)) //Nessa condicao decrescente = c b a d
            printf("A ordem crescente do grupo 2 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", d, a, b, c, c, b, a, d);
        else if((d >= a) && (b >= d)) //Nessa condicao decrescente = c b d a
            printf("A ordem crescente do grupo 2 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", a, d, b, c, c, b, d, a);
    }
    else if((d >= a) && (d >= b) && (d >= c)) //Nessa condicao decrescente = d
    {
        if((b >= c) && (a >= b)) //Nessa condicao decrescente = d a b c
            printf("A ordem crescente do grupo 2 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", c, b, a, d, d, a, b, c);
        else if((c >= b) && (a >= c)) //Nessa condicao decrescente = d a c b
            printf("A ordem crescente do grupo 2 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", b, c, a, d, d, a, c, b);
        else if((a >= b) && (c >= a)) //Nessa condicao decrescente = d c a b
            printf("A ordem crescente do grupo 2 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", b, a, c, d, d, c, a, b);
        else if((b >= a) && (c >= b)) //Nessa condicao decrescente = d c b a
            printf("A ordem crescente do grupo 2 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", a, b, c, d, d, c, b, a);
        else if((a >= c) && (b >= a)) //Nessa condicao decrescente = d b a c
            printf("A ordem crescente do grupo 2 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", c, a, b, d, d, b, a, c);
        else if((c >= a) && (b >= c)) //Nessa condicao decrescente = d b c a
            printf("A ordem crescente do grupo 2 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", a, c, b, d, d, b, c, a);
    }
    /******
    grupo 3
    ******/
    
    printf("\nDigite agora os 4 valores do grupo 3: \n");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    if((a >= b) && (a >= c) && (a >= d)) //Nessa condicao decrescente = a
    {
        if((c >= d) && (b >= c)) //Nessa condicao decrescente = a b c d
            printf("A ordem crescente do grupo 3 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", d, c, b, a, a, b, c, d);
        else if((d >= c) && (b >= d)) //Nessa condicao decrescente = a b d c
            printf("A ordem crescente do grupo 3 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", c, d, b, a, a, b, d, c);
        else if((b >= c) && (d >= b)) //Nessa condicao decrescente = a d b c
            printf("A ordem crescente do grupo 3 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", c, b, d, a, a, d, b, c);
        else if((c >= b) && (d >= c)) //Nessa condicao decrescente = a d c b
            printf("A ordem crescente do grupo 3 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", b, c, d, a, a, d, c, b);
        else if((b >= d) && (c >= b)) //Nessa condicao decrescente = a c b d
            printf("A ordem crescente do grupo 3 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", d, b, c, a, a, c, b, d);
        else if((d >= b) && (c >= d)) //Nessa condicao decrescente = a c d b
            printf("A ordem crescente do grupo 3 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", b, d, c, a, a, c, d, b);
    }
    else if((b >= a) && (b >= c) && (b >= d)) //Nessa condicao decrescente = b
    {
        if((c >= d) && (a >= c)) //Nessa condicao decrescente = b a c d
            printf("A ordem crescente do grupo 3 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", d, c, a, b, b, a, c, d);
        else if((d >= c) && (a >= d)) //Nessa condicao decrescente = b a d c
            printf("A ordem crescente do grupo 3 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", c, d, a, b, b, a, d, c);
        else if((a >= c) && (d >= a)) //Nessa condicao decrescente = b d a c
            printf("A ordem crescente do grupo 3 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", c, a, d, b, b, d, a, c);
        else if((c >= a) && (d >= c)) //Nessa condicao decrescente = b d c a
            printf("A ordem crescente do grupo 3 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", a, c, d, b, b, d, c, a);
        else if((a >= d) && (c >= a)) //Nessa condicao decrescente = b c a d
            printf("A ordem crescente do grupo 3 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", d, a, c, b, b, c, a, d);
        else if((d >= a) && (c >= d)) //Nessa condicao decrescente = b c d a
            printf("A ordem crescente do grupo 3 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", a, d, c, b, b, c, d, a);
    }
    else if((c >= a) && (c >= b) && (c >= d)) //Nessa condicao decrescente = c
    {
        if((b >= d) && (a >= b)) //Nessa condicao decrescente = c a b d
            printf("A ordem crescente do grupo 3 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", d, b, a, c, c, a, b, d);
        else if((d >= b) && (a >= d)) //Nessa condicao decrescente = c a d b
            printf("A ordem crescente do grupo 3 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", b, d, a, c, c, a, d, b);
        else if((a >= b) && (d >= a)) //Nessa condicao decrescente = c d a b
            printf("A ordem crescente do grupo 3 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", b, a, d, c, c, d, a, b);
        else if((b >= a) && (d >= b)) //Nessa condicao decrescente = c d b a
            printf("A ordem crescente do grupo 3 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", a, b, d, c, c, d, b, a);
        else if((a >= d) && (b >= a)) //Nessa condicao decrescente = c b a d
            printf("A ordem crescente do grupo 3 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", d, a, b, c, c, b, a, d);
        else if((d >= a) && (b >= d)) //Nessa condicao decrescente = c b d a
            printf("A ordem crescente do grupo 3 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", a, d, b, c, c, b, d, a);
    }
    else if((d >= a) && (d >= b) && (d >= c)) //Nessa condicao decrescente = d
    {
        if((b >= c) && (a >= b)) //Nessa condicao decrescente = d a b c
            printf("A ordem crescente do grupo 3 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", c, b, a, d, d, a, b, c);
        else if((c >= b) && (a >= c)) //Nessa condicao decrescente = d a c b
            printf("A ordem crescente do grupo 3 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", b, c, a, d, d, a, c, b);
        else if((a >= b) && (c >= a)) //Nessa condicao decrescente = d c a b
            printf("A ordem crescente do grupo 3 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", b, a, c, d, d, c, a, b);
        else if((b >= a) && (c >= b)) //Nessa condicao decrescente = d c b a
            printf("A ordem crescente do grupo 3 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", a, b, c, d, d, c, b, a);
        else if((a >= c) && (b >= a)) //Nessa condicao decrescente = d b a c
            printf("A ordem crescente do grupo 3 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", c, a, b, d, d, b, a, c);
        else if((c >= a) && (b >= c)) //Nessa condicao decrescente = d b c a
            printf("A ordem crescente do grupo 3 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", a, c, b, d, d, b, c, a);
    }
    
    /******
    grupo 4
    ******/
    
    printf("\nDigite agora os 4 valores do grupo 4: \n");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    if((a >= b) && (a >= c) && (a >= d)) //Nessa condicao decrescente = a
    {
        if((c >= d) && (b >= c)) //Nessa condicao decrescente = a b c d
            printf("A ordem crescente do grupo 4 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", d, c, b, a, a, b, c, d);
        else if((d >= c) && (b >= d)) //Nessa condicao decrescente = a b d c
            printf("A ordem crescente do grupo 4 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", c, d, b, a, a, b, d, c);
        else if((b >= c) && (d >= b)) //Nessa condicao decrescente = a d b c
            printf("A ordem crescente do grupo 4 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", c, b, d, a, a, d, b, c);
        else if((c >= b) && (d >= c)) //Nessa condicao decrescente = a d c b
            printf("A ordem crescente do grupo 4 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", b, c, d, a, a, d, c, b);
        else if((b >= d) && (c >= b)) //Nessa condicao decrescente = a c b d
            printf("A ordem crescente do grupo 4 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", d, b, c, a, a, c, b, d);
        else if((d >= b) && (c >= d)) //Nessa condicao decrescente = a c d b
            printf("A ordem crescente do grupo 4 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", b, d, c, a, a, c, d, b);
    }
    else if((b >= a) && (b >= c) && (b >= d)) //Nessa condicao decrescente = b
    {
        if((c >= d) && (a >= c)) //Nessa condicao decrescente = b a c d
            printf("A ordem crescente do grupo 4 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", d, c, a, b, b, a, c, d);
        else if((d >= c) && (a >= d)) //Nessa condicao decrescente = b a d c
            printf("A ordem crescente do grupo 4 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", c, d, a, b, b, a, d, c);
        else if((a >= c) && (d >= a)) //Nessa condicao decrescente = b d a c
            printf("A ordem crescente do grupo 4 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", c, a, d, b, b, d, a, c);
        else if((c >= a) && (d >= c)) //Nessa condicao decrescente = b d c a
            printf("A ordem crescente do grupo 4 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", a, c, d, b, b, d, c, a);
        else if((a >= d) && (c >= a)) //Nessa condicao decrescente = b c a d
            printf("A ordem crescente do grupo 4 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", d, a, c, b, b, c, a, d);
        else if((d >= a) && (c >= d)) //Nessa condicao decrescente = b c d a
            printf("A ordem crescente do grupo 4 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", a, d, c, b, b, c, d, a);
    }
    else if((c >= a) && (c >= b) && (c >= d)) //Nessa condicao decrescente = c
    {
        if((b >= d) && (a >= b)) //Nessa condicao decrescente = c a b d
            printf("A ordem crescente do grupo 4 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", d, b, a, c, c, a, b, d);
        else if((d >= b) && (a >= d)) //Nessa condicao decrescente = c a d b
            printf("A ordem crescente do grupo 4 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", b, d, a, c, c, a, d, b);
        else if((a >= b) && (d >= a)) //Nessa condicao decrescente = c d a b
            printf("A ordem crescente do grupo 4 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", b, a, d, c, c, d, a, b);
        else if((b >= a) && (d >= b)) //Nessa condicao decrescente = c d b a
            printf("A ordem crescente do grupo 4 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", a, b, d, c, c, d, b, a);
        else if((a >= d) && (b >= a)) //Nessa condicao decrescente = c b a d
            printf("A ordem crescente do grupo 4 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", d, a, b, c, c, b, a, d);
        else if((d >= a) && (b >= d)) //Nessa condicao decrescente = c b d a
            printf("A ordem crescente do grupo 4 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", a, d, b, c, c, b, d, a);
    }
    else if((d >= a) && (d >= b) && (d >= c)) //Nessa condicao decrescente = d
    {
        if((b >= c) && (a >= b)) //Nessa condicao decrescente = d a b c
            printf("A ordem crescente do grupo 4 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", c, b, a, d, d, a, b, c);
        else if((c >= b) && (a >= c)) //Nessa condicao decrescente = d a c b
            printf("A ordem crescente do grupo 4 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", b, c, a, d, d, a, c, b);
        else if((a >= b) && (c >= a)) //Nessa condicao decrescente = d c a b
            printf("A ordem crescente do grupo 4 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", b, a, c, d, d, c, a, b);
        else if((b >= a) && (c >= b)) //Nessa condicao decrescente = d c b a
            printf("A ordem crescente do grupo 4 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", a, b, c, d, d, c, b, a);
        else if((a >= c) && (b >= a)) //Nessa condicao decrescente = d b a c
            printf("A ordem crescente do grupo 4 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", c, a, b, d, d, b, a, c);
        else if((c >= a) && (b >= c)) //Nessa condicao decrescente = d b c a
            printf("A ordem crescente do grupo 4 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", a, c, b, d, d, b, c, a);
    }
    /******
    grupo 5
    ******/
    
    printf("\nDigite agora os 4 valores do grupo 5: \n");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    if((a >= b) && (a >= c) && (a >= d)) //Nessa condicao decrescente = a
    {
        if((c >= d) && (b >= c)) //Nessa condicao decrescente = a b c d
            printf("A ordem crescente do grupo 5 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", d, c, b, a, a, b, c, d);
        else if((d >= c) && (b >= d)) //Nessa condicao decrescente = a b d c
            printf("A ordem crescente do grupo 5 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", c, d, b, a, a, b, d, c);
        else if((b >= c) && (d >= b)) //Nessa condicao decrescente = a d b c
            printf("A ordem crescente do grupo 5 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", c, b, d, a, a, d, b, c);
        else if((c >= b) && (d >= c)) //Nessa condicao decrescente = a d c b
            printf("A ordem crescente do grupo 5 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", b, c, d, a, a, d, c, b);
        else if((b >= d) && (c >= b)) //Nessa condicao decrescente = a c b d
            printf("A ordem crescente do grupo 5 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", d, b, c, a, a, c, b, d);
        else if((d >= b) && (c >= d)) //Nessa condicao decrescente = a c d b
            printf("A ordem crescente do grupo 5 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", b, d, c, a, a, c, d, b);
    }
    else if((b >= a) && (b >= c) && (b > d)) //Nessa condicao decrescente = b
    {
        if((c >= d) && (a >= c)) //Nessa condicao decrescente = b a c d
            printf("A ordem crescente do grupo 5 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", d, c, a, b, b, a, c, d);
        else if((d >= c) && (a >= d)) //Nessa condicao decrescente = b a d c
            printf("A ordem crescente do grupo 5 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", c, d, a, b, b, a, d, c);
        else if((a >= c) && (d >= a)) //Nessa condicao decrescente = b d a c
            printf("A ordem crescente do grupo 5 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", c, a, d, b, b, d, a, c);
        else if((c >= a) && (d >= c)) //Nessa condicao decrescente = b d c a
            printf("A ordem crescente do grupo 5 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", a, c, d, b, b, d, c, a);
        else if((a >= d) && (c >= a)) //Nessa condicao decrescente = b c a d
            printf("A ordem crescente do grupo 5 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", d, a, c, b, b, c, a, d);
        else if((d >= a) && (c >= d)) //Nessa condicao decrescente = b c d a
            printf("A ordem crescente do grupo 5 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", a, d, c, b, b, c, d, a);
    }
    else if((c >= a) && (c >= b) && (c >= d)) //Nessa condicao decrescente = c
    {
        if((b >= d) && (a >= b)) //Nessa condicao decrescente = c a b d
            printf("A ordem crescente do grupo 5 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", d, b, a, c, c, a, b, d);
        else if((d >= b) && (a >= d)) //Nessa condicao decrescente = c a d b
            printf("A ordem crescente do grupo 5 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", b, d, a, c, c, a, d, b);
        else if((a >= b) && (d >= a)) //Nessa condicao decrescente = c d a b
            printf("A ordem crescente do grupo 5 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", b, a, d, c, c, d, a, b);
        else if((b >= a) && (d >= b)) //Nessa condicao decrescente = c d b a
            printf("A ordem crescente do grupo 5 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", a, b, d, c, c, d, b, a);
        else if((a >= d) && (b >= a)) //Nessa condicao decrescente = c b a d
            printf("A ordem crescente do grupo 5 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", d, a, b, c, c, b, a, d);
        else if((d >= a) && (b >= d)) //Nessa condicao decrescente = c b d a
            printf("A ordem crescente do grupo 5 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", a, d, b, c, c, b, d, a);
    }
    else if((d >= a) && (d >= b) && (d >= c)) //Nessa condicao decrescente = d
    {
        if((b >= c) && (a >= b)) //Nessa condicao decrescente = d a b c
            printf("A ordem crescente do grupo 5 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", c, b, a, d, d, a, b, c);
        else if((c >= b) && (a >= c)) //Nessa condicao decrescente = d a c b
            printf("A ordem crescente do grupo 5 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", b, c, a, d, d, a, c, b);
        else if((a >= b) && (c >= a)) //Nessa condicao decrescente = d c a b
            printf("A ordem crescente do grupo 5 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", b, a, c, d, d, c, a, b);
        else if((b >= a) && (c >= b)) //Nessa condicao decrescente = d c b a
            printf("A ordem crescente do grupo 5 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", a, b, c, d, d, c, b, a);
        else if((a >= c) && (b >= a)) //Nessa condicao decrescente = d b a c
            printf("A ordem crescente do grupo 5 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", c, a, b, d, d, b, a, c);
        else if((c >= a) && (b >= c)) //Nessa condicao decrescente = d b c a
            printf("A ordem crescente do grupo 5 é: %f, %f, %f, %f.\nA ordem descrescente é: %f, %f, %f, %f.\n", a, c, b, d, d, b, c, a);
    }

    return 0;
}
