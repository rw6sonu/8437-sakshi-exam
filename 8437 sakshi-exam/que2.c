
#include<stdio.h>
int main()
{
    int i,age,name,gender,male;

    printf("enter the name:- ");
    scanf("%d",&name);

    printf("enter the age:- ");
    scanf("%d",&age);

    printf("enter the gender:- ");
    scanf("%d",&gender);

 if(gender=male)
        {
            printf("he is eligible for vote\n");
        }
        else
        {
            printf("she is eligible for vote\n");
        }
    if(age>=18)
    {
        printf("candidate is eligible for vote\n");

        
    }
    else
    {
        printf("candidate is not eligible for vote");
    }

    
}