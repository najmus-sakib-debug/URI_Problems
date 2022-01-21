#include<stdio.h>
int main()
{
    double a,b,c,d,e,f,g,h,i,j,k,l,m,n;
    int p,q,r,s,t,u,v,w,x,y,z,lastt;
    scanf("%lf", &n);
    p = n /100;
    a = n - (p * 100);
    q = a / 50;
    b = a - (q * 50);
    r = b / 20;
    c = b - (r * 20);
    s = c / 10;
    d = c - (s * 10);
    t = d / 5;
    e = d - (t * 5);
    u = e / 2;
    f = e - (u * 2);
    v = f / 1;
    g = f - (v * 1);
    w = g / 0.50;
    h = g - (w * 0.50);
    x = h / 0.25;
    i = h - (x * 0.25);
    y = i / 0.10;
    j = i - (y * 0.10);
    z = j /0.05;
    k = j - (z * 0.05);
    lastt = k / 0.01;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", p);
    printf("%d nota(s) de R$ 50.00\n", q);
    printf("%d nota(s) de R$ 20.00\n", r);
    printf("%d nota(s) de R$ 10.00\n", s);
    printf("%d nota(s) de R$ 5.00\n", t);
    printf("%d nota(s) de R$ 2.00\n", u);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", v);
    printf("%d moeda(s) de R$ 0.50\n", w);
    printf("%d moeda(s) de R$ 0.25\n", x);
    printf("%d moeda(s) de R$ 0.10\n", y);
    printf("%d moeda(s) de R$ 0.05\n", z);
    printf("%d moeda(s) de R$ 0.01\n", lastt);
    return 0;
}
