/*
** EPITECH PROJECT, 2022
** hit_checker
** File description:
** hit_checker
*/
#include<stdlib.h>
#include<stdio.h>

double *vector_printer(double x, double y, double z);

double *my_put_coord(char **av);

double my_arc_sinus(char **av);

int hit_checker(char **av)
{
    int t_end;
    int vz = atof(av[6]) - atof(av[3]);
    t_end = ((atof(av[3]) * -1) / vz);
    if (t_end <= 0)
        printf("The ball won't reach the paddle.\n");
    if (t_end > 0)
        my_arc_sinus(av);
        return (0);
}
