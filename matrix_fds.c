#include <stdio.h>

#define ROW 10
#define COL 10

int add();
int subtract();
int multiply();
int transpose();
int saddle();

int main()
{
  int n;

while(1)
{
  printf("Enter your matrix operation:- \n 1. Addtition \t 2. Subtraction \t 3. Multiply \t \n 4. Transpose \t 5. Saddle point  \n");
  scanf("%d",&n);



  switch(n)
  {
    case 1: add();
            break;
    case 2: subtract();
            break;
    case 3: multiply();
            break;
    case 4: transpose();
            break;
    case 5: saddle();
            break;

    default: printf("Enter the correct option");
            break;
  }

  }
return 0;
}

int add()
{
  int m, n, c, d, first[10][10], second[10][10], sum[10][10];

  printf("Enter the number of rows and columns of matrix:- ");
  scanf("%d%d", &m, &n);

  printf("Enter the elements of first matrix:- \n");

  for (c = 0; c < m; c++)
  {
    for (d = 0; d < n; d++)
    {
      scanf("%d", &first[c][d]);
    }
  }

  printf("Enter the elements of second matrix:- \n");

  for (c = 0; c < m; c++)
  {
     for (d = 0 ; d < n; d++)
     {
        scanf("%d", &second[c][d]);
     }
  }

  printf("Sum of entered matrices:-\n");

  for (c = 0; c < m; c++)
  {
     for (d = 0 ; d < n; d++)
     {
        sum[c][d] = first[c][d] + second[c][d];
        printf("%d\t", sum[c][d]);
     }
     printf("\n");
  }
  return 0;
}

int subtract()
{
  int m, n, c, d, first[10][10], second[10][10], difference[10][10];

  printf("Enter the number of rows and columns of matrix:- ");
  scanf("%d%d", &m, &n);

  printf("Enter the elements of first matrix\n");

  for (c = 0; c < m; c++)
  {
    for (d = 0 ; d < n; d++)
    {
      scanf("%d", &first[c][d]);
    }
  }

  printf("Enter the elements of second matrix\n");

  for (c = 0; c < m; c++)
  {
    for (d = 0; d < n; d++)
    {
        scanf("%d", &second[c][d]);
    }
  }

  printf("Difference of entered matrices:-\n");

  for (c = 0; c < m; c++)
  {
    for (d = 0; d < n; d++)
    {
      difference[c][d] = first[c][d] - second[c][d];
      printf("%d\t",difference[c][d]);
    }
    printf("\n");
  }
  return 0;
}

int multiply()
{

  int m, n, p, q, c, d, k, sum = 0;

  int first[10][10], second[10][10], multiply[10][10];

  printf("Enter number of rows and columns of first matrix:- ");
  scanf("%d%d", &m, &n);

  printf("Enter elements of first matrix\n");

  for (c = 0; c < m; c++)
  {
    for (d = 0; d < n; d++)
    {
      scanf("%d", &first[c][d]);
    }
  }

  printf("Enter number of rows and columns of second matrix\n");
  scanf("%d%d", &p, &q);

  if (n != p)
  {
    printf("The matrices can't be multiplied with each other.\n");
  }
  else
  {
    printf("Enter elements of second matrix\n");

    for (c = 0; c < p; c++)
    {
      for (d = 0; d < q; d++)
      {
        scanf("%d", &second[c][d]);
      }
    }
  }
    for (c = 0; c < m; c++)
    {
      for (d = 0; d < q; d++)
      {
        for (k = 0; k < p; k++)
        {
          sum = sum + first[c][k]*second[k][d];
        }
        multiply[c][d] = sum;
        sum = 0;
      }
    }

    printf("Product of the matrices:\n");

    for (c = 0; c < m; c++)
    {
      for (d = 0; d < q; d++)
      {
        printf("%d\t", multiply[c][d]);

    }
    printf("\n");
  }

  return 0;
}


int transpose()
{
  int m, n, c, d, matrix[10][10], transpose[10][10];

  printf("Enter the number of rows and columns of matrix\n");
  scanf("%d%d", &m, &n);

  printf("Enter elements of the matrix\n");

  for (c = 0; c < m; c++)
  {
     for(d = 0; d < n; d++)
     {
        scanf("%d", &matrix[c][d]);
    }
  }

  for (c = 0; c < m; c++)
  {
     for( d = 0 ; d < n ; d++ )
     {
        transpose[d][c] = matrix[c][d];
     }
  }

  printf("Transpose of the matrix:\n");

  for (c = 0; c < n; c++)
  {
     for (d = 0; d < m; d++)
     {
        printf("%d\t ", transpose[c][d]);

     }
     printf("\n");
  }

  return 0;
}

int saddle()
{
  int i, j, k, n, min, max, matrix[ROW][COL], pos[2][2];

        printf("Enter the order of the matrix:");
        scanf("%d", &n);

        printf("Enter your entries for the input matrix:\n");
        for (i = 0; i < n; i++)
        {
                for (j = 0; j < n; j++)
                {
                        scanf("%d", &matrix[i][j]);
                }
        }

        for (i = 0; i < n; i++)
        {
                min = matrix[i][0];
                for (j = 0; j < n; j++)
                {
                        if (min >= matrix[i][j])
                        {
                                min = matrix[i][j];
                                pos[0][0] = i;
                                pos[0][1] = j;
                        }
                }

                j = pos[0][1];
                max = matrix[0][j];
                for (k = 0; k < n; k++)
                {
                        if (max <= matrix[k][j])
                        {
                                max = matrix[i][j];
                                pos[1][0] = k;
                                pos[1][1] = j;
                        }
                }

                if (min == max)
                {
                        if (pos[0][0] == pos[1][0] &&
                                pos[0][1] == pos[1][1])
                                {
                                printf("Saddle point (%d, %d) : %d\n",
                                                pos[0][0], pos[0][1], max);
                                }
                }
        }
return 0;
}
