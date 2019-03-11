#include<stdio.h>

int main()

{   
	long long num1,num2;
	char c;
	
	  printf("NOTE:Give space between numbers and symbols\n");
    
    scanf("%lld %c %lld",&num1,&c,&num2);
    long long ans,opans;    
      
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
      printf("%lli",opans); 
      return 0;



}