#include<stdio.h>
int main()
{
int avg;
printf("enter average:");
sacnf("%d",avg);
if(avg>85&&avg<100)
{
printf("Grade A");
}
else if(avg<85&&avg>70)
{
printf("Grade B");
}
else if(avg>55&&avg<70)
{
printf("Grade C");
}
else if(avg>40&&avg<55)
{
printf("Grade D");
}
else(avg<40)
{
printf("Grade F");
}
return 0;
}
