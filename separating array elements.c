/******************************************************************************
o/p:
Enter array elements : 23 0 78 3

even array is: 0 78 
odd array is: 23 3 


Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>

int main()
{
 int even[100],odd[100]; 
 int n;            //size of given array
 printf("Enter array size : ");
 scanf("%d",&n);
 int a[n];
 int j=0,k=0;
 
 printf("Enter array elements : ");
 for(int i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
 }
 for(int i=0;i<n;i++)
 {  if(a[i]%2==0)
    {
        even[j] = a[i];              //assigning each even value to elements in even array
        j++ ;
    }
    else
    {
        odd[k] = a[i];           //assigning each odd value to elements in odd array
        k++;
    }
 }
 
 printf("\neven array is: ");
 
 for(int i=0;i<j;i++)
 {
     printf("%d ",even[i]);
 }
 printf("\nodd array is: ");
 for(int i=0;i<k;i++)
 {
     printf("%d ",odd[i]);
 }
    return 0;
}