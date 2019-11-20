/*
( Removing extra white spaces from a giving string )

This Program is to remove
extra white spaces
from a giving string
in c programming language

::  © Created By GitHub@barhouum7
*/

#include<stdio.h>
#include<stdlib.h>
//#include<conio.h>
#include<string.h>
//#include<math.h>

int main(void){
  //WELCOME Part ...
  printf("\n\n            <<<<<<<<     Hello World ! :)    >>>>>>>>\n\n\n");
  //Declaration Part...

  char chaine[100], chaineTemp[100];
  int i = 0, j = 0;
  //Reading the string from user ...
     printf("\n\n\t\tEnter your string : ");
     gets(chaine);
  //Finding the first two white spaces successive ..
     while (chaine[i] != '\0')
     {
        if (!(chaine[i] == ' ' && chaine[i+1] == ' ')) {
          chaineTemp[j] = chaine[i];
          j++;
        }
        i++;
     }
     //Determine the end of the string ...
     chaineTemp[j] = '\0';

     printf("\n\n\t\tThe string after removing whiteSpaces :\n\n\t\t\t|%s|\n", chaineTemp);

    /* ----------------------------------------------------------------------------------------------------------------------- */
  printf("\n\n\n\n\n              |    Mind Hackers ! - Removing extra whiteSpaces  .   ^,^    |");
  printf("\n\n                         ----------------------------------------\n\n\n\n");
  system("PAUSE");
  return 0;
}
