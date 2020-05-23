#include <iostream>
 #include <cstring> 
 #include <string> 
 #include <cstdio>
 using namespace std; 
 int main () 
 {
     unsigned int a, b;
     unsigned int a, b;
     int casen;cin >> casen;
     for (int cas = 1; cas <= casen;cas++) 
     {
         scanf ("%x%x", &a, &b); 
         int r=0, l=0;
         a = A, B = B;
         while (A! = b&&l<32) 
            {
             a = (a >> 31) | (a << 1); 
             l++;
            } 
            A = A, B = b;
            while (A! = b&&r<32) 
            {
                a = (a << 31) | (a >> 1); 
                r++;
                } 
                if (l = =)
                     printf ("Case #%d:not possible\n", CAs), 
                     else if (L = = r) 
                     printf ("Case #%d:%d any\n", CAS, l); else if (l<r printf ("Case #%d:%d left\n", CAS, L), else printf ("Case #%d:%d right\n", CAs, r);}}