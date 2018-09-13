#include<stdio.h>

int insert();                                                                                                                                                                                  //User defined functions
int display();
int display_s();
int s_transpose();
int f_transpose();
int addition();

int main()
{
     int n;
     while(1)                             
     {
               printf("Enter the operation:- \n 1.Addition \t 2.Slow transpose \t 3.Fast transpose  " );                //Operations 
               scanf("%d",&n);
               
                         switch(n)
                          {
                                   case 1: printf("____________A d d i t i o n____________");
                                   
                                                   break;
                                                   
                                   case 1: printf("________S l o w   t r a n s p o s e_______");
                                                   break;
                                                   
                                   case 1: printf("________F a s t   t r a n s p o s e _______");
                                                   break;
                              
                                   default: printf("\t\t\tEnter the correct choice");
                                                       break;
                         }
     }

    return 0;
}

int display_s(int newmat[3][size],int size);                                                                                                                          //Display S matrix
{
        int i,j;
        
             for (i=0; i<3; i++)
              {
                           for (j=0; j<size; j++)
                           {
                                   printf("%d ", newmat[i][j]);
                           }
                           printf("\n");
              }
              return 0;
}

int display(int first[m][n],int m,int n);                                                                                                                                      //Display Matrix
{    
         int c,d;
              for (c = 0; c < m; c++)
                        {
                                       for (d = 0; d < n; d++)
                                       {
                                             printf("%d", first[c][d]);
                                       }
                        }
                          return 0;
}

int insert()                                                                                                                                                                                            //Insert Matrix
{
             int m, n, c, d,i,j, first[10][10], size = 0,k=0;

              printf("Enter the number of rows and columns of matrix:- ");
              scanf("%d%d", &m, &n);

              printf("Enter the elements of first matrix:- \n");

              for (c = 0; c < m; c++)
              {
                        for (d = 0; d < n; d++);k1++;
		}
		} 
	} 
	while ( k1 <=tot1 )
	{
		sp3[k3][0] = sp1[k1][0];
		sp3[k3][1] = sp1[k1][1];
		sp3[k3][2] = sp1[k1][2];
		k3++;k1++;
	} 
	
	while ( k2 <= tot2 )
	{
		sp3[k3][0] = sp2[k2][0];
		sp3[k3][1] = sp2[k2][1];
		sp3[k3][2] = sp2[k2][2];
		k3++;k2++;
	} 
	sp3[0][0] = sp1[0][0];
	sp3[0][1] = sp1[0][1];
	sp3[0][2] = k3-1;
	return;
} 


                        {
                          scanf("%d", &first[c][d]);
                        }
              }
              
              display(first[m][n],m,n);
            
            for (i = 0; i < m; i++)
            {
                        for (j = 0; j < n; j++)
                         {   
                                      if (first[i][j] != 0)
                                     {   
                                        size++;
                                    }
                       }   
           }
           
           int newmat[3][size];
           
           for (i = 0; i < m; i++)
            {
                        for (j = 0; j < n; j++)
                         {   
                                      if (first[i][j] != 0)
                                     {   
                                        newmat[0][k]=i;
                                        newmat[1][k]=j;
                                        newmat[2][k]=first[i][j];
                                        k++;
                                    }
                       }   
           }
           
        display_s(newmat[3][size],size);
        
  return 0;
}

int s_transpose()                                                                                                                                                                                  //Transpose
{


  return 0;
}

int f_transpose()                                                                                                                                                                                  //Transpose
{



  return 0;
}

int addition()                                                                                                                                                                                           //Addition
{


  return 0;
}
