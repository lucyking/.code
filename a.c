#include <stdio.h>
#include <math.h>
int main()
{
   double sq(double a);
	double b;
	printf("Input your No.\n");
	scanf("%lf", &b);
	printf("The No. you input is:\t\t %lf\n", b);
   printf("The sqar of your No. is\t %lf\n",sq(b));
   return 0;   
} 

double sq(double a){
    double e = 0.0000005;
    double y = a;
    double x = 1;
    double k = y*y-a;
    double flag =1;
         
         if(a==0)
         return 0;
         

             while(flag>e){
             if(k>0)
                 y=(x+y)/2;
               
                else if (k<0)
                 x=(x+y)/2;
                k=(x+y)*(x+y)/4 - a;
                flag = k; 
                if(flag<0)
                     flag=-flag;                 
             }
         return (x+y)/2;
    }

