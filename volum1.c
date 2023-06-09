#include <stdio.h>

struct Distance {
   int feet;
   int  inch;
} s1, s2, s;

main() 
{

   printf("Enter 1st distance\n");
   printf("Enter feet: ");
   scanf("%d", &s1.feet);
   printf("Enter inch: ");
   scanf("%d", &s1.inch);
 
   printf("\nEnter 2nd distance\n");
   printf("Enter feet: ");
   scanf("%d", &s2.feet);
   printf("Enter inch: ");
   scanf("%d", &s2.inch);
   
   s.feet = s1.feet + s2.feet;
   s.inch = s1.inch + s2.inch;

   while(s.inch>=12)
   {
   	    s.feet++;
   	    s.inch-=12;
   } 
   
   printf("\nSum of distances = %d",s.feet,s.inch);
   
}

