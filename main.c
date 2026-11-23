#include <stdio.h>
 
void split_double(double d, int *int_part, double *frac_part);
 
int main(void)
{
    double val;
    int ipart;
    double fpart;
 
    if (scanf("%lf", &val) != 1) {
        return 1;
    }
 
    split_double(val, &ipart, &fpart);
    printf("%d,%.4f", ipart, fpart);
    return 0;
}
 
void split_double(double d, int *int_part, double *frac_part)
{
    *int_part = (int)d;
    *frac_part = d - (double)(*int_part);
}
 ーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーー
0806