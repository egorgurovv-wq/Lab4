#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>
void Task1()
{
    char c = '!';
    int i = 2;
    float f = 3.14f;
    double d = 5e-12;
    printf("%c\n %d\n %f\n %lf\n", c, i, f, d);
    printf("Введите значения переменных\n");
    scanf(" %c", &c);
    scanf("%d", &i);
    scanf("%f", &f);
    scanf("%lf", &d);
    printf("Вывод введеных значений:\n%c\n %d\n %f\n %lf", c, i, f, d);

    int cel = f/1;
    printf("\n task1a\nЦелая часть числа %.2f равна %d\n Дробная часть: %.2f", f, cel, f - cel);

    printf("\n Task1b \n %x \n %d");

    printf("\n task1c \n%.3f\n", (float)1/i);
}
void task2(){
    int a = 11;
    int b = 3;
    int x;
    float y;
    double z;
    x = a/b;
    y = a/b;
    z = a/b;
    printf("x: %d\n y: %.2f\n z: %.2lf\n", x, y, z);
    printf("float %f\n double %lf\n", (float)a/b, (double)a/b);

}
void task3(){
int n;
printf("Введите число:");
scanf("%d", &n);
int last = n % 10;
int first = n/100;
int mid = n/10 % 10;
int sum = first + mid + last;
printf("Сумма цифр числа %d равна %d\n", n, sum);
}

int main(){
    setlocale(LC_ALL, "Russian");
    printf("Задание 1\n");
    Task1();
    printf("\n Задание 2\n");
    task2();
    printf("\n Задание 3\n");
    task3();
}