#include<iostreams.h>
#include<conio.h>


class fib
{ int i,j,n;
public:
fib(int x)
{ i=0;
  j=1;
  n=x;
}
void fibonacci();
~fib()
{cout<<"\nThe variables initialised are deinitialised";}
};
void fib::fibonacci()
{ if(n%2==0)
 for(int k=0;k<n/2;k++)
{ cout<<i<<","<<j<<",";
 i=i+j;
 j=i+j;
}
else
{ for(int k=0;k<n/2;k++)
 {cout<<i<<","<<j<<",";
 i=i+j;
 j=i+j;
 }
 cout<<i;
}
}
void main()
{

clrscr();
int n;
cout<<"\t FIBONACCI SERIES USING CONSTRUCTORS ";
cout<<"\n\nEnter  n : ";
 cin>>n;
fib x(n);
x.fibonacci();
getch();
}

