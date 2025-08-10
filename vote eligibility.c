#include<stdio.h>
int voting_eligibility(int age)
{
    if(age>=18)
    printf("Your eligible for vote");
    else
    printf("Your not eligible you have %d years left for eligible",18-age);
    return 1;
}
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    int check=voting_eligibility(age);
    printf("%d",check);
    return 0;
}