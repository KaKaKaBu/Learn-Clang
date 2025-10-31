//
// Created by zhu on 2025/10/27.
//

#include <stdio.h>

int main(void)
{
    int array[4][5];
    //÷∏’Î—≠ª∑∏≥÷µ
    for (int (*row_ptr)[5] = array; row_ptr < array + 4; row_ptr++)
    {
        for (int* col_ptr = *row_ptr; col_ptr < *row_ptr + 5; col_ptr++)
        {
            *col_ptr = (row_ptr - array) * 5 + (col_ptr - *row_ptr);
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }
}
