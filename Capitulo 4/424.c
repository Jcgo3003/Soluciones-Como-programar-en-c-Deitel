#include<stdio.h>

int main(void)
{
int  i=1, j=2, k=3, m=2;

printf("a %d\n", j==1 );
printf("b %d\n", j==3 );
printf("c %d\n", i >= 1 && j < 4);
printf("d %d\n", m >= 99 && k < m);
printf("f %d\n", j >= i || k==m);
printf("g %d\n", k + m < j || 3 - j >= k);
printf("h %d\n", !m );
printf("i %d\n", !( j - m) );
printf("j %d\n", !( k > m) );
printf("k %d\n", !( j > k ) );
}
/*
a 0   j == 0 hace que el resultado sea 0, pero si solo coloco un '=' no hay problema
b 0
c 1   i >= 1 && j < 4, i = 1 y j = 2 esto hace que esta ecuacion sea 'verdadero' o 'true' ointerpretado como 1
d 0   m >= 99 && k < m, m  = 2 y k = 3 esto hace que la operacion sea 'falso' interpretado como 0
f 1   j >= i || k==m, j = 2, i = 1, da 1 como resultado, k == m da como resultado 0, haciendo esto un or resulta en 'true'
g 0   k + m < j || 3 - j >= k, k + m = 3 + 2 = 5 < 2 .. "f"|| 3 - 2 = 1 > 3 "f" resultado 'falso' o cero
h 0   !m, m = 2 esto da como resultado 'falso', porque cualquier numero que no sea cero se interpreta como 'verdadero'
i 1   !( j - m), ( 2 - 2 ), !0 resultado 'verdadero' o 1
j 0   !( k > m), k = 3 > m = 2 .. 'v' !v resultado 'falso' o cero
k 1   !( j > k ), j = 2 > k = 3, esto es falso  como resultado da 'verdadero' o uno
*/
