/*
Author ; Juliana Mathenge 
Reg ; D33-5023-2023
Two dimension Array
*/
#include<stdio.h>

int main()
{
int i,j;
 //declaration and initialization 
 int marks[3][2]={
  {1,2},
  {3,4},
  {5,6}
 };
 for(i=0;i<3;i++){
 for(j=0;j<2;j++){
 printf("%d\t",marks[i][j]);
 }
 printf("\n");
 }
 return 0;
 }