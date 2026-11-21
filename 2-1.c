#include <stdio.h>
#include <math.h>
#include <stdlib.h>


/**
 * @brief Вычисляет периметр прямоугольника с заданными сторонами
 * @param side1 сторона прямоугольника
 * @param side2 вторая сторона прямоугольника
 * @return Рассчитанное значение
 */
double perimeter(const double side1, const double side2);

/**
 * @brief Вычисляет площадь прямоугольника с заданными сторонами
 * @param side1 сторона прямоугольника
 * @param side2 вторая сторона прямоугольника
 * @return Рассчитанное значение
 */
double square(const double side1, const double side2);

/**
 * @brief Вычисляет диагональ прямоугольника с заданными сторонами
 * @param side1 сторона прямоугольника
 * @param side2 вторая сторона прямоугольника
 * @return Рассчитанное значение
 */
double diagonal(const double side1, const double side2);

/**
 * @brief Считывает с клавиатуры значение с плавающей точкой
 * @return Считанное значение
 */
double getDouble();

/**
 * @brief Проверяет, что сторона - положительное число
 * @param side - считанное значение стороны квадрата
 */
void checkSide(const double side);

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main()
{
    printf("Enter side1: ");
    double side1 = getDouble();
    checkSide(side1);
    printf("Enter side2: ");
    double side2 = getDouble();
    checkSide(side2);
    printf("perimeter is %lf\n",perimeter(side1, side2));
    printf("square is %lf\n",square(side1, side2));
    printf("diagonal is %lf",diagonal(side1, side2));
    return 0;
}


double perimeter(const double side1, const double side2)
{
    return side1*2 + side2*2;
}

double square(const double side1, const double side2)
{
    return side1 * side2;
}

double diagonal(const double side1, const double side2)
{
    return sqrt((pow(side1,2)+pow(side2,2)));
}

double getDouble()
{
    double side = 0.0;
    if (scanf("%lf",&side) != 1)
        {
            printf("Error");
            exit(1);
        }
    return side;
}

void checkSide(const double side)
{
   if (side <= 0)
   {
       printf("Error");
       exit(1);
   }
}