#include <stdio.h>
#include <math.h>

/**
 * @brief Вычисляет значение в унциях по заданному значению в граммах
 * @param grams значение для расчета
 * @return Рассчитанное значение в унциях
 */
double m(const double unc);

/**
 * @brief считывает с клавиатуры значение с плавающей точкой
 * @return считанное значение
 */
double getDouble();

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main()
{
    double gr = getDouble();
    printf("weight is %lf",m(gr));
    return 0;
}

double m(const double grams)
{
    return grams/28.3;
}

double getDouble()
{
    double gr = 0.0;
    scanf("%lf",&gr);
    return gr;
}
