#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Russian");
    int A,B,C,D;
    printf("Введите значения A, B, C, D: ");
    scanf("%d %d %d %d", &A, &B, &C, &D);
    int sum = A + B + C + D;
    int recording = sum >=3;
    printf("Состояние записи: %d\n", recording);
}