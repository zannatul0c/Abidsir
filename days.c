#include<stdio.h>
int main()
{

    int days,years,weeks;
    scanf("%d",&days);
    years=days/365;
    printf("%d\n",years);
    weeks=(days%365)/7;
    printf("%d\n",weeks);
    days=days - ((years * 365) + (weeks * 7));
    printf("%d",days);
    return 0;
}
