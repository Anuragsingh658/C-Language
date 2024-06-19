#include <stdio.h>

int main(){
    int a,b,ch, add, sub, mul, div, mol;
    printf("enter the  first value:\n");
    scanf("%d",&a);

    printf("enter the second value:\n");
    scanf("%d",&b);

    printf("choose the operation +,-,*,/:\n");
    scanf("%d",&ch);

    switch(ch)

    {
        
        case 1:
        add=a+b;        
        printf("the addition is:",add);
        break;
        

        case 2:
        sub=a-b;        
        printf("the addition is:",sub);
        break;
        
        case 3:
        mul=a*b;        
        printf("the addition is:",mul);
        break;
        

        case 4:
        div=a/b;        
        printf("the addition is:",div);
        break;
        
        case 5:
        mol=a%b;        
        printf("the addition is:",mol);
        break;

        default:
        printf("The Invalid Enrty");
        
    }
        return 0;

    }