#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void gen(int a1, int d, int n){
    
    int vysledek;
    

    printf("%d ", a1);
    for(int i = 1; i < n; i++){
        a1 = a1 + d;
        printf("%d ", a1);
    }
    printf("\n");
}

int an(int a1, int d, int n){

    int vysledek;
    vysledek = a1 + (n-1) * d;
    printf("%d\n", vysledek);
}

void main()
{
    float a[6];
    int vstup;
    
    printf("Chces vypsat radu aritmeticke posloupnosti nebo pouze jedno cislo? [1/2]?\n");
    scanf("%d", &vstup);
    
    if(vstup <= 1){
        printf("Zadej od jakeho cisla chces zacit:  ");
        scanf("%f", &a[0]);
        printf("Zadej od jakeho cisla chces pripocitat:  ");
        scanf("%f", &a[1]);
        printf("Zadej kolik cisel chces vypsat:  ");
        scanf("%f", &a[2]);
        gen(a[0],a[1],a[2]);

    system("pause");    
    }    
    else{
        printf("Zadej od jakeho cisla chces zacit:  ");
        scanf("%f", &a[3]);
        printf("Zadej od jakeho cisla chces pripocitat:  ");
        scanf("%f", &a[4]);
        printf("Zadej kolikate cislo chces vypsat:  ");
        scanf("%f", &a[5]);
        an(a[3],a[4],a[5]);
    
    system("pause");
    } 
}  
