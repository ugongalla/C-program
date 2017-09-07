#include<stdio.h>
main()
{
int num,devident,rem;
printf("Enter number and devident of the number\n");
scanf("%d%d",&num,&devident);
rem=num-((num/devident)*devident);
printf("remainder is %d\n",rem);

}
