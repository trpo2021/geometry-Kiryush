#include <stdio.h>
#include <stdlib.h>
#define N 50
#include <math.h>


int main()
{
    int r;
    float s = 0, p = 0;
    FILE* pointer = NULL;

    char a[N] = { 0 };
    char arr[N] = { 0 };


    pointer = fopen("geometry.txt", "r");
    if (!pointer)
    {
        printf("Can`t open the file\n");
    }
    else
    {
        int i = 0;

        while (i < N)
        {
            fscanf(pointer, "%c", &a[i]);
            ++i;
        }
    }

    fclose(pointer); 
    

    for (int i = 0; i != '\0'; i++)
    {
        if((a[i] != 'C') && (a[i] != 'i') && (a[i] != 'r') && (a[i] != 'c') && (a[i] != 'l') && (a[i] != 'e') && (a[i] != '0') && (a[i] != '1') && (a[i] != '2') && (a[i] != '3') && 
        (a[i] != '4') && (a[i] != '5') && (a[i] != '6') && (a[i] != '7') && (a[i] != '8') && (a[i] != '9'))
        {
            for(int j = 0; j < N; j++)
            {
                 printf("%c", a[j]);
            }
            printf("invalid input\n");
            break;
      
        }
        else
        {
            int j = 0;
            for (int i = 0; i < N - 1; i++) 
            {
                if ((a[i] == ',') && (a[i + 1] == ' '))
                {
                    for (j = i; a[j + 1] != ')'; j++)
                    {
                        arr[j - i] = a[j + 1];
                    }
                }   

            }


            r = arr[3] - '0';

            s = 3.14 * r * r;

            p = 2 * 3.14 * r;

            for (int i = 0; i < N; i++)
            {
                printf("%c", a[i]);
            }
            printf("\n");
            printf("area = %.2f\n", s);
            printf("perimeter = %.2f\n", p);
        }
    }


    return 0;
}