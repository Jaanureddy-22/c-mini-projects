#include<stdio.h>
int main()
{
    int temp;
    printf("Enter the temperature: ");
    scanf("%d",&temp);
    int ch;
    printf("Enter your choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        {
           int Celsius_temp=temp;
           float farenheit=9.0/5+Celsius_temp+32;
           printf("the temperature in farenheit is %.2f",farenheit);
           break;
        }
        case 2:
        {
           int farenheit_temp=temp;
           float Celsius=5.0/9*(farenheit_temp-32);
           printf("the temperature in celsius is %.2f",Celsius);
           break;
        }
    }
    return 0;
}
