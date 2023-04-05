/*
** EPITECH PROJECT, 2022
** my_put_coord
** File description:
** my_put_coord
*/
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

double *vector_printer(double x, double y, double z);

double norm(double *vec);

double *pos(double *spd_vec, double *vec, int t)
{
    double *pos;
    pos = malloc(sizeof(double) * 3);
    pos[0] = spd_vec[0] * (t + 1) + vec[0];
    pos[1] = spd_vec[1] * (t + 1) + vec[1];
    pos[2] = spd_vec[2] * (t + 1) + vec[2];
    return (pos);
}

double *my_put_coord(char **av)
{
    double x;
    double *zeta = malloc(sizeof(double) * 3);
    double *v0 = vector_printer(atof(av[1]), atof(av[2]), atof(av[3]));
    double *v1 = vector_printer(atof(av[4]) - atof(av[1]),
                                atof(av[5]) - atof(av[2]),
                                atof(av[6]) - atof(av[3]));
    zeta = pos(v1, v0, atof(av[7]));
    printf("The velocity vector of the ball is");
    printf(":\n(%.2lf, %.2lf, %.2lf)\n", v1[0], v1[1], v1[2]);
    printf("At time t + %d, ball coordinates will be:\n", atoi(av[7]));
    printf("(%.2lf, %.2lf, %.2lf)\n", zeta[0], zeta[1], zeta[2]);
    free(v0);
    free(v1);
    return (zeta);
}
