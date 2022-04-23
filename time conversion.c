#include<stdio.h>
int main()
{
    int tot_mins,hrs,mins;
    scanf("%i",&tot_mins);
    hrs=tot_mins/60;
    mins=tot_mins%60;
    printf("%d Hours and %i Minutes",hrs,mins);
   
return 0; 
}
