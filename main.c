#include <stdio.h>
int main()
{
   float a;
   union {
      float b;
      unsigned int u;
   } t;

   int i;

   printf("between 1 and 2\n\n");
   printf("step  decimal value                                       hex value\n");
   printf("----  --------------------------------------------------  ---------\n");
   a = 1.0;
   t.b = 2.0;
   i = 0;
   while (a != t.b) {
      t.b = (a+t.b)/2;
      i++;
      printf("%3d.  %50.48f  %08x\n", i, t.b, t.u);
   }
   printf("\ntotal steps: %d\n\n", i);
   printf("\n\nbetween 0 and 1\n\n");
   printf("step  decimal value                                       hex value\n");
   printf("----  --------------------------------------------------  ---------\n");
   a = 0.0;
   t.b = 1.0;
   i = 0;
   while (a != t.b) {
      t.b = (a+t.b)/2;
      i++;
      printf("%3d.  %50.48f  %08x\n", i, t.b, t.u);
   }
   printf("\ntotal steps: %d\n\n", i);
   return 0;
}
