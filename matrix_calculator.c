#include<stdio.h>
#include<stdlib.h>
#include"Matfunc.h"
int main()
{
    //declaration
    int choice,row_1,row_2,col_1,col_2,Matrix_1[MAX_row][MAX_col],Matrix_2[MAX_row][MAX_col];
    printf("\nWelcome to this Matrix Calculator\n1.Matrix Addition\n2.Matrix Subtraction\n3.Matrix Product\n4.Matrix Determinant\n5.Matrix Transpose\nChoose any option to proceed\n");
    printf("\nPLEASE NOTE THAT THE DEVELOPER IS WEAK IN MATHEMATICS SO THERE WILL BE LIMITS FOR THE INPUT\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        //sum
        printf("\nNOTE THAT THE ROW AND COLUMN VALUES SHOULD BE SAME FOR BOTH THE MATRICES\n");

        printf("\nEnter the row value of the matrices (THE VALUE SHOULD BE STRICTLY BETWEEN 1 AND 10): ");
        scanf("%d",&row_1);

        printf("\nEnter the column value of the matrices (THE VALUE SHOULD BE STRICTLY BETWEEN 1 AND 10): ");
        scanf("%d",&col_1);

        printf("\nGive the matrix elements of first matrix in order\n");
        for(int i=0;i<row_1;i++)
        {
            for(int j=0;j<col_1;j++)
            {
                scanf("%d",&Matrix_1[i][j]);
            }
        }

        printf("\nGive the matrix elements of second matrix in order\n");
        for(int i=0;i<row_1;i++)
        {
            for(int j=0;j<col_1;j++)
            {
                scanf("%d",&Matrix_2[i][j]);
            }
        }

        printf("\nThe sum of the given matrices is...\n");
        MatAdd(Matrix_1,Matrix_2,row_1,col_1);
        break;

    case 2:
        //subtraction
        printf("\nNOTE THAT THE ROW AND COLUMN VALUES SHOULD BE SAME FOR BOTH THE MATRICES\n");

        printf("\nEnter the row value of the matrices (THE VALUE SHOULD BE STRICTLY BETWEEN 1 AND 10): ");
        scanf("%d",&row_1);

        printf("\nEnter the column value of the matrices (THE VALUE SHOULD BE STRICTLY BETWEEN 1 AND 10): ");
        scanf("%d",&col_1);

        printf("\nGive the matrix elements of first matrix in order\n");
        for(int i=0;i<row_1;i++)
        {
            for(int j=0;j<col_1;j++)
            {
                scanf("%d",&Matrix_1[i][j]);
            }
        }

        printf("\nGive the matrix elements of second matrix in order\n");
        for(int i=0;i<row_1;i++)
        {
            for(int j=0;j<col_1;j++)
            {
                scanf("%d",&Matrix_2[i][j]);
            }
        }

        printf("\nThe difference of the given matrices is...\n");
        MatSub(Matrix_1,Matrix_2,row_1,col_1);
        break;

    case 3:
        //product

        printf("\nEnter the row value of first matrix (THE VALUE SHOULD BE STRICTLY BETWEEN 1 AND 10): ");
        scanf("%d",&row_1);

        printf("\nEnter the column value of first matrix (THE VALUE SHOULD BE STRICTLY BETWEEN 1 AND 10): ");
        scanf("%d",&col_1);

        printf("\nGive the matrix elements in order\n");
        for(int i=0;i<row_1;i++)
        {
            for(int j=0;j<col_1;j++)
            {
                scanf("%d",&Matrix_1[i][j]);
            }
        }

        printf("\nEnter the row value of second matrix (THE VALUE SHOULD BE STRICTLY BETWEEN 1 AND 10): ");
        scanf("%d",&row_2);

        printf("\nEnter the column value of second matrix (THE VALUE SHOULD BE STRICTLY BETWEEN 1 AND 10): ");
        scanf("%d",&col_2);

        printf("\nGive the matrix elements in order\n");
        for(int i=0;i<row_2;i++)
        {
            for(int j=0;j<col_2;j++)
            {
                scanf("%d",&Matrix_2[i][j]);
            }
        }

        if(col_1!=row_2)
        {
            printf("\nIT IS NOT POSSIBLE TO CALCULATE THE PRODUCT\n");
            exit(0);
        }

        printf("\nThe product of the given matrices is...\n");
        MatProd(Matrix_1,Matrix_2,row_1,col_1,row_2,col_2);
        break;

    case 4:
        //determinant

        printf("\nEnter the size of the matrix (THE VALUE SHOULD BE BETWEEN 1 TO 3): ");
        scanf("%d",&row_1);

        printf("\nEnter the matrix elements\n");
        for(int i=0;i<row_1;i++)
        {
            for(int j=0;j<row_1;j++)
            {
                scanf("%d",&Matrix_1[i][j]);
            }
        }

        printf("\nThe determinant of the given matrix is...\n");
        MatDet(Matrix_1,row_1);
        break;
    
    case 5:
        //transpose

        printf("\nEnter the row value of the matrix (THE VALUE SHOULD BE STRICTLY BETWEEN 1 AND 10): ");
        scanf("%d",&row_1);

        printf("\nEnter the column value of the matrix (THE VALUE SHOULD BE STRICTLY BETWEEN 1 AND 10): ");
        scanf("%d",&col_1);

        printf("\nEnter the matrix elements in order\n");
        for(int i=0;i<row_1;i++)
        {
            for(int j=0;j<col_1;j++)
            {
                scanf("%d",&Matrix_1[i][j]);
            }
        }

        printf("\nThe transpose of the given matrix is...\n");
        Transpose(Matrix_1,row_1,col_1);
        break;

    default:
        printf("\nENTER A VALID OPTION");
        break;
    }

}