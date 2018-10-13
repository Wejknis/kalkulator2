#include <stdio.h>

void info_dla_uzytkownika();
void pobieranie_zmiennych(double *a, double *b, char *zn);
void operacje(double a, double b, char zn);

void main() {
    double a, b;
    char zn;
    info_dla_uzytkownika();
    pobieranie_zmiennych(&a, &b, &zn);
    operacje(a, b, zn);
}

void operacje(double a, double b, char zn) {
    switch (zn) {
        case '+' :
            printf("%4.3lf", a + b);
            break;
        case '-' :
            printf("%4.3lf", a - b);
            break;
        case '*' :
            printf("%4.3lf", a * b);
            break;
        case '/' :
            if(b)
            {
                printf("%lf", a / b);
            } else
            {
                printf("nie dzieli się przez 0");
            }
            break;
        default : printf("nieprawidłowe działanie");
    }
}

void pobieranie_zmiennych(double *a, double *b, char *zn) {
    printf("podaj liczbę a: ");
    scanf(" %lf", a);
    printf("podaj działanie (+ , - , * , /: ");
    scanf(" %c", zn);
    printf("podaj liczbę b: ");
    scanf(" %lf", b);
}

void info_dla_uzytkownika() { printf("To jest kalkulator do obliczania sumy, różnicy, iloczynu i ilorazu.\n"); }