#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define TIME_SEC (20 * 60) // 20 минут в секундах

/**
 * @brief считает работу электрического тока на основе полученных данных
 * @param i - сила тока в А
 * @param u - напряжение в В
 * @return значение работы в Джоулях
 */
double GetWork(const double i, const double u);

/**
 * @brief Считывает число из консоли и проверяет совпадение типа
 *
 * @return считанное значение
 */
double ReadDouble();

/**
 * @brief проверяет корректность ввода
 *
 * @return корректное полученное значение
 */
double GetValidValue();

/**
 * @brief точка входа в программу
 *
 * @return возвращает 0, если программа выполнена корректно
 */
int main()
{
    printf("Введите силу тока в А: ");
    double i = GetValidValue();

    printf("Введите напряжение в В: ");
    double u = GetValidValue();

    printf("Работа электрического тока равна: %.3f Дж ", GetWork(i, u));

    return 0;
}

double ReadDouble()
{
    double value = 0;
    if(scanf("%lf", &value) != 1)
    {
        printf("Error: incorrect type\n");
        exit(1);
    }
    return value;
}

double GetValidValue()
{
    double value = ReadDouble();
    if(value <= 0)
     {
        printf("Error: incorrect type (must be positive number)\n");
        exit(1);
    }
    return value;
}

double GetWork(const double i, const double u)
{
    return u * i * TIME_SEC;
}