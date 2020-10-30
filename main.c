#include<stdio.h>
int main()
{
int op;
float num1,num2;
{
 printf("Menu\n");
 printf("1. Add (+)\n");
 printf("2. Subtract (-)\n");
 printf("3. Multiply (*)\n");
 printf("4. Divide (/)\n");
 printf("5. Modulo ()\n");
 printf("Enter Number1:");
 scanf("%f",&num1);
 printf("Enter Number2:");
 scanf("%f",&num2);
 printf("Select Choice ");
 scanf("%d",&op);
   switch(op)
        {
            case 1:
                printf("Answer is %.2f + %.2f = %.2f",num1,num2,num1 + num2);
                break;
            case 2:
                printf("Answer is %.2f - %.2f = %.2f",num1,num2,num1 - num2);
                break;
            case 3:
                printf("Answer is %.2f * %.2f = %.2f",num1,num2,num1 * num2);
                break;
            case 4:
                printf("Answer is %.2f / %.2f = %.2f",num1,num2,num1 / num2);
                break;
            case 5:
                num1=(int)num1;
                num2=(int)num2;
                printf("Answer is %.0f %% %.0f = %d",num1,num2,(int)num1 % (int)num2);
        }    default:num2=0;
    }
    return 0;
}