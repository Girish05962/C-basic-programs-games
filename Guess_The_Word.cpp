#include <iostream>
#include<functional>
#include<string>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

string randomWord()
{
  srand(time(0));
  string word[5] = {"apple", "orange", "car", "bike", "banana"};
  int number = (rand() % 5);
  return word[number];
}

int game()
{
  string word = randomWord();
  string input;

  for(int i=0;input != word ;i++)
  {
    cout<<"Attempt"<<" "<<i+1<<": ";
    cin >> input;

    // make the input lowercase
    std::transform(input.begin(), input.end(), input.begin(), ::tolower);

    if(input == word)
    {
      cout<<"Congratulations...You have found the word.\n";
      return 0;
    }

    cout << "Bad guess, Try again\n";
  }
  
  return 0;
}

int main()
{
  char play = 'Y'; 
  cout<<"This is a word guessing game..\n";
  cout<<"The words are : Apple, Orange, Car, Bike, Banana\n";


  while(play == 'Y' || play == 'y')
  {
    play = 'N';
    game();
    cout<<"Do you want to play another game ? [Y/N] : ";
    cin>>play;
  }

  cout << "Thanks for playing >3";
  return 0;
}
