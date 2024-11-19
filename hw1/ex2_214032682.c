
#include<stdio.h>
int main(){
    int op=0,res=0,n1=0,n2=0,c=0;
    printf("Please enter your exam score (0-100)");
    if (op ==100){
        printf("Grade: A\nWell Done");
        return 0;
    }
    switch(op/10) {
    case '0':
		printf("Grade: F\n");	break;
    case '1':
		printf("Grade: F\n"); 	break;
	case '2':
		printf("Grade: F\n");  break;
	case '3':
		printf("Grade: F\n");	break;
	case '4': 
		printf("Grade: F\n");	break;
    case '5':
		printf("Grade: E\n");  break;
	case '6':
		printf("Grade: D\n");	break;
	case '7': 
		printf("Grade: C\n");	break;
    case '8':
		printf("Grade: B\nGood job! There is room for improvement.");  break;
	case '9':
		printf("Grade: A\nWell Done");	break;
	default:{
        printf("%c is an invalid arithmetical operator!\n",op);
        c++;
        if (c>3){
            return 0;//QUIT??
                 } 
    }
     }
    return 0;
}
