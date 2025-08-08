#include<stdio.h>
#include<math.h>
int main()
{
    int size,i;
    printf("enter size: ");
    scanf("%d",&size);
    int operands[size];
    printf("enter the the values: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&operands[i]);
    }
    printf("the operand values are: ");
    for(i=0;i<size;i++)
    {
        printf("%d\t",operands[i]);
    }
    printf("\n-----enter your choice:----\n");
    printf("1.ADDITION:\n");
    printf("2.SUBSTRACTION:\n");
    printf("3.MULTIPLICATION:\n");
    printf("4.DIVISION:\n");
    printf("5.POWER:\n");
    int ch;
    printf("enter your choice to perform task:\n");
    scanf("%d",&ch);
    double result;
        switch(ch)
        {
            case 1:
            result=0;	
            printf("Addition of give operands is:");
            for(i=0;i<size;i++)
            {
                result+=operands[i];
            }
            printf("%.2lf",result);
            break;
            case 2:
            printf("Substraction of given operands is: ");
            result=operands[0];
            for(i=1;i<size;i++)
            {
                result-=operands[i];
            }
            printf("%.2lf",result);
            break;
            case 3:
            printf("Multiplication of given operands is: ");
            result=operands[0];
            for(i=1;i<size;i++)
            {
                result*=operands[i];
            }
             printf("%.2lf",result);
            break;
            case 4:
            printf("Division of given operands is: ");
            result=operands[0];
            for(i=1;i<size;i++)
            {
                result/=operands[i];
            }
            printf("%.2lf",result);
            break;
            case 5:
            printf("Power of given operands is: ");
            result=operands[0];
            for(i=1;i<size;i++)
            {
                result=pow(result ,operands[i]);
            }
            printf("%.2lf",result);
            break;
            default:
            printf("Invalid operator\n");
            break;
        }
    return 0;
}