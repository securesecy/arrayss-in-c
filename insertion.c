#include<stdio.h>
int main(){
   int student[40],pos,i,size,value;
   printf("enter no of elements in array of students:\n");
   scanf("%d",&size);
   printf("enter %d elements are:\n",size);
   for(i=0;i<size;i++)
      scanf("%d",&student[i]);
   printf("enter the position where you want to insert the element:\n");
   scanf("%d",&pos);
   printf("enter the value into that poition:\n");
   scanf("%d",&value);
   for(i=size-1;i>=pos-1;i--)
      student[i+1]=student[i];
   student[pos-1]= value;
   printf("final array after inserting the value is\n");
   for(i=0;i<=size;i++)
      printf("%d\n",student[i]);
   return 0;
}