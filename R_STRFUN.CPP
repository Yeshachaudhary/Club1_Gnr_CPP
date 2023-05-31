#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
  char str[10],str2[10];
  int x;
  clrscr();
  cout<<"Enter string";
  gets(str);
  puts(str);

  cout<<"\nEnter second string";
  gets(str2);

  strcpy(str2,str);
  cout<<"\ncopy string:"<<str2;

  strrev(str);
  cout<<"\nreverce string:"<<str;

  strcat(str,str2);
  cout<<"\nConcat string:"<<str;

  strlwr(str2);
  cout<<"\nLower string:"<<str2;

  strupr(str2);
  cout<<"\nUpper string:"<<str2;

  x=strlen(str2);
  cout<<"\nLenth of string:"<<x;
  getch();
}