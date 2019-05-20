# include <iostream>
# include <string>
# include <sstream>

int main()
{
  std::string stringA;
  std::string stringB;
  int a = 0;
  int b = 0;
  int sumTwo = 0;
  std::cout << "Enter the first number: ";
  std::getline(std::cin, stringA);
  std::stringstream(stringA) >> a;
  std::cout << "Enter the second number: ";
  std::getline(std::cin, stringB);
  std::stringstream(stringB) >> b;
  sumTwo = a + b;
  std::cout<< sumTwo <<"\n";
  return 0;
}
