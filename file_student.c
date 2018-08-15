#include<stdio.h>
#include<stdlib.h>

struct student
{
  int roll;
  char name[20];
  float marks;
}s;

void search();
void insert();
void modify();
void ddelete();
void display();

int main()
{
  int x;
  FILE *fptr;

  if((fptr=fopen("student.txt","w"))==NULL)
  {
    printf("Error ! ! !");
    exit(1);
  }

  printf("Choose the operation:- \n 1. Insert Data \t 2. Display Data \t 3. Modify Data \t 4. Delete Data \t 5. Search Data :-  ");
  scanf("%d",&x);
  while(1)
  {
    switch(x)
    {
      case 1: insert();
              break;

      case 2: display();
              break;

      case 3: modify();
              break;

      case 4: ddelete();
              break;

      case 5: search();
              break;

      default: printf(" !! Enter the correct option !!");
              break;

    }

  }


  fclose(fptr);

}



void search()
{
  FILE *fptr;
  char n[20];

  if((fptr=fopen("student.txt","w"))==NULL)
  {
    printf("Error ! ! !");
    exit(1);
  }

  fscanf(fptr,"%s",s.name);
  fscanf(fptr,"%d",&s.roll);
  fscanf(fptr,"%f",&s.marks);

  printf("Enter the name you want to search :- ");
  scanf("%s",n);

  if(s.name==n)
  {
    printf("Name found !!");
  }
  else
  {
    printf("Name not found !!");
  }

  fclose(fptr);
}


void insert()
{
  FILE *fptr;

  if((fptr=fopen("student.txt","w"))==NULL)
  {
    printf("Error ! ! !");
    exit(1);
  }

  printf("Enter the name of the student:- ");
  scanf("%s",s.name);

  printf("Enter the roll no. of the student:- ");
  scanf("%d",&s.roll);

  printf("Enter the marks of the student:- ");
  scanf("%f",&s.marks);

    fprintf(fptr,"%s %d %f", s.name,s.roll,s.marks);
    fclose(fptr);
}


void modify()
{
  FILE *fptr;

  if((fptr=fopen("student.txt","w"))==NULL)
  {
    printf("Error ! ! !");
    exit(1);
  }

  fscanf(fptr,"%s",s.name);
  fscanf(fptr,"%d",&s.roll);
  fscanf(fptr,"%f",&s.marks);

  printf("Enter the name of the student:- ");
  scanf("%s",s.name);

  printf("Enter the roll no. of the student:- ");
  scanf("%d",&s.roll);

  printf("Enter the marks of the student:- ");
  scanf("%f",&s.marks);

  printf("Done !!");

  fclose(fptr);
}


void ddelete()
{
  FILE *fptr;

  if((fptr=fopen("student.txt","w+"))==NULL)
  {
    printf("Error ! ! !");
    exit(1);
  }

  fscanf(fptr,"%s",s.name);
  fscanf(fptr,"%d",&s.roll);
  fscanf(fptr,"%f",&s.marks);

  s.marks='\0';
  s.roll='\0';
  s.name=;

  fprintf(fptr,"%s %d %f", s.name,s.roll,s.marks);

  fclose(fptr);
}


void display()
{
  FILE *fptr;

  if((fptr=fopen("student.txt","w+"))==NULL)
  {
    printf("Error ! ! !");
    exit(1);
  }

  fscanf(fptr,"%s",s.name);
  fscanf(fptr,"%d",&s.roll);
  fscanf(fptr,"%f",&s.marks);

  printf("Name is :- %s",s.name);
  printf("Roll no. is :- %d",s.roll);
  printf("Marks is :- %f",s.marks);

  fclose(fptr);
}
