#include <stdio.h>
#include <math.h>

void sum();
void sub();
void mul();
void mul();
void div();
void sine();
void cosine();
void tangent();
void fact();
void avg();
void square();
void cube();
void power();
void sq_root();

int main()
{
  int n;
  while(1)
  {
    printf("\n1.Addition");
    printf("\n2.Subtraction");
    printf("\n3.Multiplication");
    printf("\n4.Divison");
    printf("\n5.sin");
    printf("\n6.cos");
    printf("\n7.tan");
    printf("\n8.fact");
    printf("\n9.avg");
    printf("\n10.Square");
    printf("\n11.cubic");
    printf("\n12.power");
    printf("\n13.sq_root");
    printf("\n14.Exit");
    
    printf("Enter choice\n");
    scanf("%d",&n);

    switch(n)
    {
      case 1:sum();
      break;

      case 2:sub();
      break;

      case 3:mul();
      break;

      case 4:div();
      break;

      case 5:sine();
      break;

      case 6:cosine();
      break;

      case 7:tangent();
      break;

      case 8:fact();
      break;

      case 9:avg();
      break;

      case 11:square();
      break;

      case 12:cube();
      break;

      case 13:power();
      break;

      case 14:sq_root();
      break;

      case 15:
      printf("Exit");
      break;

      default:
      printf("Ivalid choice");
    }
  }
  return 0;
}

void sum()
{
  int a,b,c;
  printf("Enter two numbers: \n");
  scanf("%d%d",&a,&b);
  c=a+b;
  printf("sum=%d\n",c);

}
void sub()
{
    int a,b,c;
    printf("Enter 2 numbers\n");
    scanf("%d%d",&a,&b);
    c=a-b;
    printf("Sub=%d\n\n",c);
}
void div()
{
    int a,b,c;
    printf("Enter 2 numbers\n");
    scanf("%d%d",&a,&b);
    c=a/b;
    printf("Division=%d\n\n",c);
}
void mul()
{
    int a,b,c;
    printf("Enter 2 numbers\n");
    scanf("%d%d",&a,&b);
    c=a*b;
    printf("Multiplication=%d\n\n",c);
}
void sine()
{
  double a,b;
  printf("Enter angle\n");
  scanf("%lf",&a);
  b=sin(a);
  printf("%lf\n\n",b);
}
void cosine()
{
  double a,b;
  printf("Enter angle\n");
  scanf("%lf",&a);
  b=cos(a);
  printf("%lf\n\n",b);
}
void tangent()
{
double a,b;
  printf("Enter angle\n");
  scanf("%lf",&a);
  b=tan(a);
  printf("%lf\n\n",b);
}
void avg()
{
  double a,b,c,d,avg;
  printf("Enter angle\n");
  scanf("%lf%lf%lf",&a,&b,&c);
  d=a+b+c;
  avg=d/3;
  printf("%lf\n\n",avg);
}

void fact()
{
    long long n, f, i;
    printf("\nEnter a number: \n");
    scanf("%lld", &n);
    f = 1;
    for(i = 1; i<=n; i++)
    {
        f = f * i;
    }
    int Result = f;
    printf("\nResult = %lld\n\n",Result);
  
}
void square()
{
  int a,s;
  printf("Enter number\n");
  scanf("%d",&a);
  s=a*a;
  printf("square=%d\n\n",s);
}
void cube()
{
  int a,c;
  printf("Enter number:\n");
  scanf("%d",&a);
  c=a*a*a;
  printf("cube=%d\n\n",c);
}
void power()
{
  int b,e,result;
  printf("enter base: \n");
  scanf("%d",&b);
  printf("enter power: \n");
  scanf("%d",&e);
  result=pow(b,e);
  printf("result=%d\n\n",result);
}
void sq_root()
{
  int n,result;
  printf("enter number\n");
  scanf("%d",&n);
  result=sqrt(n);
  printf("result=%d\n\n",result);
}