/*
** EPITECH PROJECT, 2022
** vector
** File description:
** vector
*/
#include<stdlib.h>

double *vector_printer(double x, double y, double z)
{
    double *vector;
    vector = malloc(sizeof(double) * 3);
    vector[0] = x;
    vector[1] = y;
    vector[2] = z;
    return (vector);
}
