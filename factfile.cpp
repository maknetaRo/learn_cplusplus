#include <iostream>
#include <string>

int main()
  {
    std::string userName1;
    std::string userName2;
    std::string userAddress1;
    std::string userAddress2;
    std::string userPhone1;
    std::string userPhone2;

    std::cout<<"What's your name? ";
    std::getline(std::cin, userName1);
    std::cout<<userName1<<"\n";

    std::cout<<"What's your address? ";
    std::getline(std::cin, userAddress1);
    std::cout<<"\t\t"<<userAddress1<<"\n";

    std::cout<<"What's your telephone number? ";
    std::getline(std::cin, userPhone1);
    std::cout<<"\t\t"<<userPhone1<<"\n";

    std::cout<<"What's your name? ";
    std::getline(std::cin, userName2);
    std::cout<<userName2<<"\n";

    std::cout<<"What's your address? ";
    std::getline(std::cin, userAddress2);
    std::cout<<"\t\t"<<userAddress2<<"\n";

    std::cout<<"What's your telephone number? ";
    std::getline(std::cin, userPhone2);
    std::cout<<"\t\t"<<userPhone2<<"\n";
  }
