#include<stdio.h>

int m=0,n=0;
void inter(int a[10],int b[10], int m,int n);
void un(int a[10], int b[10], int m, int n);
void difference(int a[10], int b[10], int m, int n);
void symdiff(int a[10], int b[10], int m, int n);
void accept(int a[10], int m);
void display(int b[10], int n);



int main()
{
int a[10],b[10], m, n,z;



printf("_____________________________________________________________________");
printf("\n \t \tEnter the size of first set : \t ");
scanf("%d",&m);
accept(a,m);

printf("_____________________________________________________________________");
printf("\n \t \tEnter the size of second set : \t ");
scanf("%d",&n);
accept(b,n);

printf("_____________________________________________________________________");
printf("\n \t \tYour first set is: ",a);
display(a,m);

printf("_____________________________________________________________________");
printf("\n \t \tYour second set is: ",b);
display(b,n);


while(1)
{
  printf("_____________________________________________________________________");
printf("\n Which operation do you want to perform? \n 1.Union \n 2.Intersection \n 3.Difference(A-B) \n 4.Difference(B-A) \n 5.Symmetric difference \n ");
scanf("%d",&z);

switch(z)
{
case 1:
printf("_____________________________________________________________________");
printf("\n Union is: \n");
un(a,b,m,n);
break;

case 2:
printf("_____________________________________________________________________");
printf("\n Intersection is: \n");
inter(a,b,m,n);
break;

case 3:
printf("_____________________________________________________________________");
printf("\n Difference is: \n");
difference(a,b,m,n);
break;

case 5:
printf("_____________________________________________________________________");
printf("\n Symmetric difference is: \n");
symdiff(a,b,m,n);
break;

case 12:
printf("\n Union & intersection are: \n");
un(a,b,m,n);
inter(a,b,m,n);
break;

case 13:printf("_____________________________________________________________________");
printf("\n Union & difference are: \n");
un(a,b,m,n);
difference(a,b,m,n);
break;

case 15:
printf("\n Union & symmetric difference are: \n");
un(a,b,m,n);
symdiff(a,b,m,n);
break;

case 23:
printf("_____________________________________________________________________");
printf("\n Intersection & difference are: \n ");
inter(a,b,m,n);
difference(a,b,m,n);
break;

case 25:
printf("_____________________________________________________________________");
printf("\n Intersection & symmetric difference are: \n");
inter(a,b,m,n);
symdiff(a,b,m,n);
break;

case 35:
printf("_____________________________________________________________________");
printf("\n Difference & symmetric difference are: \n");
difference(a,b,m,n);
symdiff(a,b,m,n);
break;

case 4:
printf("_____________________________________________________________________");
printf("\n Difference(B-A) is: \n");
difference(b,a,n,m);
break;

case 14:
printf("_____________________________________________________________________");
printf("\n Union & difference(A-B) are: \n");
un(a,b,m,n);
difference(b,a,n,m);
break;

case 24:
printf("_____________________________________________________________________");
printf("\n Intersection & difference(B-A) are: \n");
inter(a,b,m,n);
difference(b,a,n,m);
break;

case 34:
printf("_____________________________________________________________________");
printf("\n Difference(A-B) & difference(B-A) are: \n");
difference(a,b,m,n);
difference(b,a,n,m);
break;

case 45:
printf("_____________________________________________________________________");
printf("\n Difference(B-A) & Symmetric difference are: \n");
difference(b,a,n,m);
symdiff(a,b,m,n);
break;

default:
printf("_____________________________________________________________________");
printf("\n Request Declined due to rule violation");
break;

}
}



}

void accept(int a[10],int n)
{
 int k,l;
 printf("_____________________________________________________________________");
 printf("\n \t \tEnter the Elements of the set \t ");
	for(k=0;k<n;k++)
	{
		scanf("%2d",&a[k]);
		for(l=0;l<k;l++)
		{
		if(a[k]==a[l])
		{
			printf("\n Enter a unique number \n ");
			--k;
			break;
		}
		}

	}
}

void display(int a[10],int n)
{
int i;
printf("{");
for(i=0;i<n;i++)
{
printf("%d",a[i]);

}
printf(" }");
}

void inter(int a[10],int b[10],int m, int n)
{
int i,j,k=0,c[10];
for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
	{
	if(a[i]==b[j])
	{
	c[k]=a[i];
	++k;
	break;
	}
	}

}
display(c,k);
}

void difference(int a[10],int b[10], int m, int n)
{
int i,j,c[10],k=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		if( a[i]==b[j])
		{
		break;
		}
		}
		if(j==n)
		{
		c[k]=a[i];
		k++;
		}
	}
	display(c,k);
}
void un(int a[10],int b[10],int m, int n)
{
difference(a,b,m,n);
difference(b,a,n,m);
inter(a,b,m,n);
}

  void symdiff(int a[10],int b[10], int m, int n)
  {
  difference(a,b,m,n);
  difference(b,a,n,m);
  }
