//ass-5

#include <stdio.h>
float round(float var)
{
    // 37.66666 * 100 =3766.66
    // 3766.66 + .5 =3767.16    for rounding off value
    // then type cast to int so value is 3767
    // then divided by 100 so the value converted into 37.67
    float value = (int)(var * 100 + 0.5);
    return (float)value / 100;
}

int main()
{
    float var;
    scanf("%f",&var);
    float result=round(var);
    printf("%.2f",result);
    return 0;
}
