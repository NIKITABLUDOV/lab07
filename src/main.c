#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void lab06(long int ARR[][5], long int d);
int lab05(int x);

int main(int argc, char* argv[])

{
    long int ARR[5][5], i, j, d = 2, t;
    int a;
    char* C;

    if (argc > 1)

    {

        t = strtol(argv[1], &C, 10);

        for (i = 0; i < t; i++)

        {
            for (j = 0; j < t; j++)

            {
                ARR[i][j] = strtol(argv[d], &C, 10);

                d++;
            }
        }

    lab06(ARR, t);

    } else {

        t = d;

        for (i = 0; i < t; i++)

        {
            for (j = 0; j < t; j++)

            {
                ARR[i][j] = strtol(argv[d], &C, 10);

                d++;
            }
        }
    
    lab06(ARR, t);
    }
    

    srand((unsigned int)time(NULL));
    a = rand() % 100;
    lab05(a);
}

void lab06(long int ARR[][5], long int d)
{

    long int RES[5][5], i, j;

    
    for (i = 0; i < d; i++)

    {
        for (j = 0; j < d; j++)

        {
            RES[i][j] = 0;
            for (int f = 0; f < d; f++)

            {
                RES[i][j] += ARR[i][f] * ARR[f][j];
            }
        }
    }

    for (i = 0; i < d; i++)

    {
        for (j = 0; j < d; j++)

        {
            printf("%ld\t", RES[i][j]);
        }

        printf("\n");
    }
}

int lab05(int x)
{
    int y, res = 0;

    for (y = 2; x % y != 0; y++) 
    {
    }
    if (x == y)
    {
        res = 1;
    }

return res;
}
