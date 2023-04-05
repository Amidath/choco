/*
** EPITECH PROJECT, 2022
** vector
** File description:
** vector
*/
#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

double *vector_printer(double x, double y, double z);

int my_printf(const char *format, ...);

double *sum(double *v1, double *v2);

double *coef_vec(double *vec, int coef);

double norm(double x, double y, double z);

double my_get_nbr(char const *str);

double *my_put_coord(char **av);

int hit_checker(char **av);

double my_arc_sinus(char **av);

int float_checker(char **av)
{
    double x = atof(av[7]);
    int	y = atof(av[7]);
    int i = (x - y) * 10;
    if (i != 0)
	return (84);
    else
        return (0);
}

int my_pong(char **av)
{
    double *coord;
    if (atof(av[7]) < 0)
        return (84);
    if (atof(av[7]) == 0) {
        my_put_coord(av);
        return (0);
    }
    coord = my_put_coord(av);
    hit_checker(av);
    free(coord);
    return (0);
}

int main(int ac, char **av)
{
    for (int a = 1; av[a] != NULL; a++)
        for (int b = 0; av[a][b] != '\0'; b++) {
            if (((av[a][b] < 48) || (av[a][b] > 59)) && (av[a][b] != '-')
                && (av[a][b] != '.'))
                return (84);
        }
    if (ac != 8)
        return (84);
    int i = float_checker(av);
    if (i == 84)
        return (84);
    if (atoi(av[7]) < 0)
        return (84);
    if (ac == 8) {
        my_pong(av);
        return (0);
    }
}
