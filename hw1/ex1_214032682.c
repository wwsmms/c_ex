#include<stdio.h>
int abs(int x){//calculate absulote value
    return (x<0) ? -x : x;
}
void sign(int num){//print sign
    if (num>0)
        printf("It’s sign is: +\n");
    else if (num<0)
        printf("It’s sign is: -\n");
    else 
        printf("It’s sign is: 0\n"); 
}
void digit_sum_and_num(int num){//should i add int org=num?
    int sum=0,i=0;
    while (num>0){
        sum+=num%10;
        i++;
        num/=10;
    }
    printf("The sum of digits is:%d\n",sum);
    printf("The number of digits is:%d\n",i);
}

int main(){
    int num,base;
    printf("Please enter an integer and a base: ");
    scanf("%d %d", &num, &base);
    while (1){
        if (base!=8 && base!=10 && base!=16){
        printf("Invalid base%d\nPlease enter 8, 10, or 16.\n",base);
        scanf("%d",&base);
        }
        else{
            break;
            }
    }
    printf("Here is some information about the given number: %d\n",num);
    sign(num);
    printf("Decimal Representation of absolute value: %d\n", abs(num));
    digit_sum_and_num(abs(num));
    switch (base)
    {
    case 8:
        printf("0d%d = 0%o\n", abs(num), abs(num));
        break;
    case 16:
        printf("0d%d = 0x%x\n", abs(num), abs(num));
        break;
    default:
        printf("Base 10 representation was already computed above.\n");
        break;
    }
}