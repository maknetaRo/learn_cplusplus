#include <iostream>

int main()
{
  int a = 65;
  char charA = 65;
  char charB = 'B';
  float answer = 0;
  char charC = 67;
  int integer = 80;
  float floatNumber = 0.0;

  std::cout << "a = "<<a<<"\n";
  std::cout << "charA = "<< charA <<"\n";
  std::cout << "charB = "<< charB <<"\n";

  // we can assign integer to a float
  floatNumber = integer;
  std::cout << "integer = " << integer <<"\n\n";
  std::cout << "floatNumber = integer = " << floatNumber <<"\n";

  // we can asing a char to a float
  floatNumber = charB;
  std::cout << "floatNumber = charB = " << floatNumber << "\n";

  answer = floatNumber / 4;
  std::cout << "answer = floatNumber / 4 = " << answer << "\n";

  // But assigning a float to a char doesn't quite work - no answer?
  charC = answer;
  std::cout << "charC = answer = " << charC << "\n";

  // assinging a float to an integer, results in the float being truncated
  integer = answer;
  std::cout <<"integer = floatNumber = " << integer << "\n";
  return 0; 

}
