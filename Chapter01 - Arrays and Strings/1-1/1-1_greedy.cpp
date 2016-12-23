/*
  Noe Rojas
  Cracking the Code Interview:
  Chapter 1: problem 1.1
*/

#include <iostream>

using namespace std;

bool checkUnique(const string&);

int main()
{
  string input;
  cout << "Insert string: ";
  cin >> input;

  bool ans = checkUnique(input);

  if(ans)
    cout << "True" << endl;
  else
    cout << "False" << endl;

  cout << endl;
  return 0;
}

bool checkUnique(const string& input)
{
  int inputSize = input.length();

  bool unique = true;

  for(int i = 0; i < inputSize; ++i)
  {
    int j = 0;
    char compare = input[i];
    int pos = i;

    while(j < inputSize && unique == true)
    {
      if(compare == input[j])
      {
        if(pos == j)
          ++j;
        else
            unique = false;
      }
      else
        ++j;
    }
  }
  return unique;
}
