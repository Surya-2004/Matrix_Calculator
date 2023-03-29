#define MAX_col 10
#define MAX_row 10
void MatProd(int Matrix_1[][MAX_col],int Matrix_2[][MAX_col],int row_1,int col_1,int row_2,int col_2)
{
    int Product[MAX_row][MAX_col];
    for(int i=0;i<row_1;i++)
    {
        for(int j=0;j<col_2;j++)
        {
            Product[i][j]=0;
            for(int k=0;k<row_2;k++)
            {
                Product[i][j]+=Matrix_1[i][k]*Matrix_2[k][j];
            }
        }
    }
    for(int i=0;i<row_1;i++)
    {
        for(int j=0;j<col_2;j++)
        {
            printf("%d ",Product[i][j]);
        }
        printf("\n");
    }
}
void Transpose(int Matrix[][MAX_col],int row,int col)
{
    for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
            printf("%d ",Matrix[j][i]);
        }
        printf("\n");
    }
}
void MatAdd(int Matrix_1[][MAX_col],int Matrix_2[][MAX_col],int row,int col)
{
    int sum[MAX_row][MAX_col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            sum[i][j]=Matrix_1[i][j]+Matrix_2[i][j];
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
}
void MatSub(int Matrix_1[][MAX_col],int Matrix_2[][MAX_col],int row,int col)
{
    int diff[MAX_row][MAX_col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            diff[i][j]=Matrix_1[i][j]-Matrix_2[i][j];
            printf("%d ",diff[i][j]);
        }
        printf("\n");
    }
}
void MatDet(int Matrix[][MAX_col],int size)
{
    int determinant;
    if(size==1)
    {
        printf("%d\n",Matrix[0][0]);
    }
    else if(size==2)
    {
        determinant=(Matrix[0][0]*Matrix[1][1])-(Matrix[0][1]*Matrix[1][0]);
        printf("%d\n",determinant);
    }
    else
    {
        determinant=(Matrix[0][0]*((Matrix[1][1]*Matrix[2][2])-(Matrix[1][2]*Matrix[2][1]))-Matrix[0][1]*((Matrix[1][0]*Matrix[2][2])-(Matrix[1][2]*Matrix[2][0]))+Matrix[0][2]*((Matrix[1][0]*Matrix[2][1])-(Matrix[1][1]*Matrix[2][0])));
        printf("%d\n",determinant);
    }
}