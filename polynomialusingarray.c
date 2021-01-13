#include<stdio.h>
#include<math.h>

struct poly
{
  float coeff;
  int exp;
};


//declaration of polynomials
struct poly a[50];

int main()
{
 int i;
 int deg1;      //stores degrees of the polynomial
 int k=0,l=0,m=0;
 
 
 printf("Enter the highest degree of poly1:");
 scanf("%d",&deg1);
 
 //taking polynomial terms from the user
 for(i=0;i<=deg1;i++)
 {
 
    //entering values in coefficient of the polynomial terms
    printf("\nEnter the coeff of x^%d :",i);
    scanf("%f",&a[i].coeff);
	
	//entering values in exponent of the polynomial terms
	a[k++].exp = i;
 }
  printf("\nExpression  = %.1f",a[0].coeff);
  for(i=1;i<=deg1;i++)
  {
    printf("+ %.1fx^%d",a[i].coeff,a[i].exp);
  }
  return 0;
}