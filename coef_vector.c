/*
** EPITECH PROJECT, 2022
** coef_vector
** File description:
** coef_vector
*/
#include<stdlib.h>

double *coef_vec(double *vec, int coef)
{
    double *tab;
    tab = malloc(sizeof(double) * 3);
    for (int a = 0; a < 3; a++)
        tab[a] = vec[a] * coef;
    return (tab);
}
