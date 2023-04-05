/*
** EPITECH PROJECT, 2022
** vector
** File description:
** vector
*/
#include<stdlib.h>

double *sum(double *v1, double *v2)
{
    double *vector;
    vector = malloc(sizeof(double) * 3);
    for (int a = 0; a < 3; a++)
        vector[a] = v2[a] - v1[a];
    free(v1);
    free(v2);
    return (vector);
}
