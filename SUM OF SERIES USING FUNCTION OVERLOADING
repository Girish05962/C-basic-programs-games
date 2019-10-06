#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>

double factorial(int n)
{
 double pro=1;
 for(int i=1;i<=n;i++)
   pro*=i;
 return(pro);
}
void sum()
{ double x,n,tot=0;
  cout<<endl<<endl<<"Enter the 'n' value to find the sum of odd numbers : ";cin>>n;
  cout<<"Enter the value for X to find the sum of odd numbers : ";cin>>x;
  for(int i=1,j=1;i<=n;i++,j+=2)
{
  tot+=(pow(x,j)/factorial(j));
}
 cout<<endl<<"THE SUM OF ODD NUMBER SERIES="<<tot;
}
void sum(int m)
{ double x;
  double tot=0;
  cout<<"Enter the value for x to find even numbers : ";cin>>x;
  for(double i=1,j=2;i<=m;i++,j+=2)
  {
  tot+=(pow(x,j)/factorial(j));
  }
  cout<<endl<<"THE SUM OF EVEN NUMBER OF SERIES="<<tot;
}
void main()
{
 clrscr();
 cout<<"\n   SUM OF SERIES USING FUNCTION OVERLOADING   "<<endl;
 int n;
 cout<<"\nEnter the 'n' value to find the sum of even numbers : ";
 cin>>n;
 sum(n);
 sum();
 getch();
}

