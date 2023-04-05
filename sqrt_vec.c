/*
** EPITECH PROJECT, 2022
** sqrt_vec
** File description:
** sqrt_vec
*/
#include<stdlib.h>
#include<math.h>
#include<stdio.h>

double norm(double *vec)
{
    double r = 0;
    double norm;
    for (int a = 0; a < 3; a++)
        r = r + vec[a] * vec[a];
    norm = sqrt(r);
    return (norm);
}
