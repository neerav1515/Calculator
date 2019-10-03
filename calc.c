#include<stdio.h>



int main()

{   
	double num1,num2,i=0;
	char c;
	printf("NOTE:Give numbers and symbols\nType 'n' for new line\n");
	scanf("%lf",&num1);
    while(1)
    {
    scanf(" %c",&c);
    double ans,opans;    
    if(c=='n')
	scanf("%lf %c %lf",&num1,&c,&num2);	
    else
	scanf(" %lf",&num2);
    switch(c)
     { case '+':
            {  opans=num1+num2;  break;}
      case '-':     
           {   opans=num1-num2;  break;}
      case '*':
           {   opans=num1*num2;  break;}
      case '/':
           {   opans=num1/num2;  break;}
           }     
    printf("=%lf",opans);
    num1=opans;
    }
      return 0;
}
