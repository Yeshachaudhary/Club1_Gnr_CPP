#include<stdio.h>
#include<conio.h>
struct employee
{
 char name[30];
 int id;
 float salary;

};
void main()
{
  struct employee e1 ,e2;
  FILE *fp;
  char a[] ="Hello Dhiraj sir";
  clrscr();
  fp = fopen("file190.txt","w");
  if(fp == NULL)
  {
    perror("File does not Exist");
   // exit(1);
  }
  printf("\nEnter id: ");
  scanf("%d",&e1.id);
  printf("\nEnter Name: ");
  fflush(stdin);
  gets(e1.name);
  printf("\nEnter Salary: ");
  scanf("%f",&e1.salary);
    fwrite(&e1,sizeof(e1),1,fp);
//  fread(&e1,sizeof(e1),1,fp);
  //fread(&a,sizeof(a),1,fp);
 // printf("%d %s %f",e2.id,e2.name,e2.salary);
  fclose(fp);



  getch();
}