#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double add(int n)
{   printf("Enter numbers you want to add\n");
    double sum=0;
   for(int i=1;i<=n;i++)
   {
     double xy;
     scanf("%lf",&xy);
     sum=sum+xy;
     }
    return sum;
   }
 double mul(int n)
 {   printf("Enter numbers you want to multiply\n");
   double multi=1.0;
   for(int i=1;i<=n;i++)
   {
     double xy;
     scanf("%lf",&xy);
     multi=multi*xy;
     }
    return multi;
    }
 void sub()
 {   double subs;
     printf("Your choice is substraction\n");
     printf("Enter two numbers\n");
     double x,y;
     scanf("%lf%lf",&x,&y);
    if(x>y)
    {
      subs=x-y;
      printf("Substraction = %lf\n ",subs);
      }
      else 
      {
        subs=-(x-y);
        printf("Substraction = - %lf\n ",subs);
        }
    
  }
  double division(double x,double y)
  {
     double divi=x/y;
     return divi;
     }
  int rem(int x,int y)
  {
      int remi=(x%y);
      return remi;
      }
  double power(double  x, double y)
  {
     double powe=0.0;
     powe=pow(x,y);
     return powe;
     }
  double sq(double x)
  {
     double squ=sqrt(x);
     return squ;
  }
  double sine(double x)
  {
    double ans=0.0;
    ans=sin(x*3.14159 / 180);
    return ans;
  }
  double cose(double x)
  {
    double as=0.0;
    as=cos(x*3.14159 / 180);
    return as;
  }
  double tane(double x)
  {
    double a=0.0;
    a=tan(x*3.14159 / 180);
    return a;
  }
  double cosinee(double x)
  {
    double anse=0.0;
    anse=(1/sin(x*3.14159 / 180));
    return anse;
  }
  double sece(double x)
  {
    double anser=0.0;
    anser=(1/ cos(x*3.14159 / 180));
    return anser;
  }
  void main()
  {
    printf("1 for addition    2 for subs\n3 for multi       4 for division\n5 for remainder   6 for power\n7 for square root 8 for sin\n9 for cos         10 for tan\n11 for cosine     12 for sec\n");
    int  ch=0;
    printf("Enter choice\n");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:
      printf("Your selection is addition \n");
      printf("Enter the number of numbers you want to add\n");
      int i;
      scanf("%d",&i);
      double s2=add(i);
      printf("Sum=%lf\n",s2);
      break;
      
      case 2:
      sub();
      break;
      
      case 3:
      printf("Your selection is multiplication \n");
      printf("Enter the number of numbers to be multiplied\n");
      int i1;
      scanf("%d",&i1);
      double mu=mul(i1);
      printf("Multpilcation= %lf\n",mu);
      break;
      
      case 4:
      printf("Your selection is division \n");
      printf("Enter the numbers you want to divide\n");
      double x1,y1;
      scanf("%lf%lf",&x1,&y1);
      double di=division(x1,y1);
      printf("Division=%lf\n",di);
      break;
      
      case 5:
      printf("Your selection is remainder \n");
      printf("Enter the numbers\n");
      int x2,y2;
      scanf("%d%d",&x2,&y2);
      int r=rem(x2,y2);
      printf("Remainder is %d\n",r);
      break;
      
      case 6:
      printf("Your selection is power \n");
      printf("Enter the numbers \n");
      double x3,y3;
      scanf("%lf%lf",&x3,&y3);
      double p=power(x3,y3);
      printf("Power = %lf\n",p);
      break;
      
      case 7:
      printf("Your selection is square root \n");
      printf("Enter number\n");
      double x4;
      scanf("%lf",&x4);
      double s4=sq (x4);
      printf("Sqrt= %lf\n",s4);
      break;

      case 8:
      printf("Enter angle \n");
      double angle=0.0;
      scanf("%lf",&angle);
      double answe=0.0;
      answe=sine(angle);
      printf("Sin is %lf\n",answe);
      break;

      case 9:
      printf("Enter angle \n");
      double an=0.0;
      scanf("%lf",&an);
      double a=0.0;
      a=cose(an);
      printf("Cos is %lf\n",a);
      break;

      case 10:
      printf("Enter angle \n");
      double ang=0.0;
      scanf("%lf",&ang);
      double an1=0.0;
      an1=tane(ang);
      printf("Tan is %lf\n",an1);
      break;

      case 11:
      printf("Enter angle \n");
      double angl=0.0;
      scanf("%lf",&angl);
      double ans=0.0;
      ans=cosinee(angl);
      printf("Cosine is %lf\n",ans);
      break;

      case 12:
      printf("Enter angle \n");
      double angle1=0.0;
      scanf("%lf",&angle1);
      double answ=0.0;
      answ=sece(angle1);
      printf("Sec is %lf\n",answ);
      break;
      
      default:
      printf("Programer dumb fr\n");
      break;
   }
   }    
      
    
        