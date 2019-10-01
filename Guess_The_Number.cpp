#include<iostream>
#include<cstdio>
#include <ctime>

using namespace std;

int randomNumber() 
{
 srand(time(0));
 int number;
 number=(rand() % 5) + 1;
 return number;
}

int game() 
{
  int input;
  int randomnumber = randomNumber();
  
  for(int i=0 ;input!=randomnumber;i++)
  {
    cout<<"Attempt "<<i+1<<" : ";
    cin>>input;
    if(input!=randomnumber)
    {
      if(input<randomnumber)
      cout<<"Bad guess, Try again by increasing the number ..\n";
      else 
       cout<<"Bad guess, Try again by decreasing the number .."<<endl;
    }
  }
  cout<<"Congrats .. You found the number\n";
  cout<<"The number is : "<<randomnumber<<"\n";
  return 0;
}

int main()
{
  char play='Y';
  cout<<"This is a number guessing game "<<"\n";
  cout<<"A Random number is generated Between 1 to 5 "<<"\n";
  while(play == 'Y' || play == 'y')
  {
    game();
    cout<<"Do you want to play another game ? [Y/N] : ";
    cin>>play;
  }
  cout<<"Thanks for playing <3";
  return 0;
}
