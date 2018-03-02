#include<stdio.h>
  int main()
        {
         int a, b, c, d, e, f, g, h, i, j, p, q, w, l, m, n, large;
        
         printf(" Enter any Ten integer numbers :  ") ;
         scanf("%d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j) ;
         l = (a > b? a : b);
         m = (c > d? c : d);
         n = (e > f? e : f);
         p = (g > h? g : h);
         q = (i > j? i : j);
         w = l > m ? ( l > n ? l : n) : (m > n ? m : n) ;
         large = p > q ? ( p > w ? p : w) : (q > w ? q : w) ;
         printf("\n\n The largest of Ten numbers  is : %d", large) ;
        
         return 0;
         }
         
         
