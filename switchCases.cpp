#include <iostream>
using namespace std;


//switch cases
//checks if an entered letter is a vowel
int main()
{
  char c;
  cout << "Please enter a letter" << endl;
  cin >> c;
  switch(c)
  {
    case 'a' : case 'A':
      cout << c << "\n is a vowel \n";
      break;
    case 'e' : case 'E':
      cout << c << "\n is a vowel \n";
      break;
    case 'i' : case 'I':
      cout << c << "\n is a vowel \n";
      break;
    case 'o' : case 'O':
      cout << c << "\n is a vowel \n";
      break;
    case 'u' : case 'U':
      cout << c << "\n is a vowel \n";
      break;
    default:
      cout << c << "\n is not a vowel\n";
  };
}
