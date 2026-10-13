#include <stdio.h>
#include <math.h>

/**
 * @brief вычисляет значение функции по заданной формуле
 * @param x - значение переменной х
 * @param y - значение переменной y
 * @param z - значение переменной z
 * @return рассчитанное значение
 */
double A(const double x, const double y, const double z);

/**
 * @brief вычисляет значение функции по заданной формуле
 * @param x - значение переменной х
 * @param y - значение переменной y
 * @param z - значение переменной z
 * @return рассчитанное значение
 */
double B(const double x, const double y, const double z);

/**
 * @brief точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main()
{
    const double x =0.61;
    const double y = 3.4;
    const double z = 16.5;
    printf("A = %lf\n",A(x,y,z));
    printf("B = %lf",B(x,y,z));

    return 0;
}

double A(const double x, const double y, const double z)
{
    return pow(x,3)*pow(tan(pow((x+y),2)),2) + z/sqrt(x+y);
}

double B(const double x, const double y, const double z)
{
    return (y*pow(x,2)-z)/exp(z*x) - 1;
}
