#include <stdio.h>
#include <string.h>

int main()
{   
   char s[110], i=0, n;
   scanf("%d", &n);

   for(i=0; i<n; i++)
   {
       scanf("%s", s);

       long int l= strlen(s);

       if(l>10)
       {
           l -= 2;
           printf("%c%ld%c\n", s[0], l, s[l+1]);
       }
       else
       {
           printf("%s\n", s);

       }
   }

   return 0;
}