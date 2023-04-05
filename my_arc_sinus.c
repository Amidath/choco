/*
** EPITECH PROJECT, 2022
** arc_sinus
** File description:
** arc_sinus
*/
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

double *vector_printer(double x, double y, double z);

double norm(double *vec);

double my_arc_sinus(char **av)
{
    double x;
    double z;
    double *v1 = vector_printer(atof(av[4]) - atof(av[1]),
                                atof(av[5]) - atof(av[2]),
                                atof(av[6]) - atof(av[3]));
    z = norm(v1);
    if (z == 0) {
        printf("The ball won’t reach the paddle.");
        return (84);
    }
    double y = v1[2] / z;
    x = (asin(y) * 180) / M_PI;
    x = fabs(x);
    printf("\e[1;34mThe incidence angle is:\n%.2f degrees\n\e[0;m", x);
    return (x);
}
