#include<stdio.h>
void main()
{
    float phy,che,bio,math,com,total,perc;
    printf("Enter your Physics mark out of 100 \n");
    scanf("%f",&phy);
    printf("Enter your Chemistry mark out of 100 \n");
    scanf("%f",&che);
    printf("Enter your Biology mark out of 100 \n");
    scanf("%f",&bio);
    printf("Enter your Mathematics mark out of 100 \n");
    scanf("%f",&math);
    printf("Enter your Computer mark out of 100 \n");
    scanf("%f",&com);
    total=phy+che+bio+math+com;
    perc=total*100/500;
    if(perc>=90)
        printf("You have scored %f percentage and your grade is A.",perc);
    else if(perc>=80)
        printf("You have scored %f percentage and your grade is B.",perc);
    else if(perc>=70)
        printf("You have scored %f percentage and your grade is C.",perc);
    else if(perc>=60)
        printf("You have scored %f percentage and your grade is D.",perc);
    else if(perc>=40)
        printf("You have scored %f percentage and your grade is E.",perc);
    else
        printf("You have scored %f percentage and your grade is F.",perc);
}
