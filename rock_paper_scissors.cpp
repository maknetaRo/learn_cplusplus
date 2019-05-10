/* Scissors cuts Paper.
Paper covers Rock.
Rock crushes Lizard.
Lizard poisons Spock.
Spock smashes Scissors.
Scissors decapitate Lizard.
Lizard eats Paper.
Paper disproves Spock.
Spock vaporizes Rock.
(and as it always has) Rock crushes Scissors. */
#include <iostream>
#include <stdlib.h>

int main() {
  // Long live and prosper
  srand (time(NULL));
  int computer = rand() % 5 +1;
  int user = 0;
  std::cout << "====================\n";
  std::cout << "rock paper scissors\n";
  std::cout << "lizard Spock!\n";
  std::cout << "====================\n";
  std::cout << "1) ✊\n";
	std::cout << "2) ✋\n";
	std::cout << "3) ✌️\n";
  std::cout << "4) lizard\n";
  std::cout << "5) Spock\n";
  std::cout << "shoot! ";
  std::cin >> user;

  if (computer == 1) {
    if (user == 1) {
      std::cout << "It's a tie!";
    }
    else if (user == 2) {
      std::cout << "User wins!";
    }
    else if  (user == 3) {
      std::cout << "Computer wins";
    }
    else if (user == 4) {
      std::cout << "Computer wins!";
   }
    else {
      std::cout << "User wins!";
    }
  }
  else if (computer == 2) {
    if (user == 2) {
      std::cout << "It's a tie!";
    }
    else if (user == 1) {
      std::cout << "Computer wins!";
    }
    else if (user == 3) {
      std::cout << "User wins!";
    }
    else if (user == 4) {
      std::cout << "User wins!";
    }
    else {
      std::cout << "Computer wins!";
    }
  }
  else if (computer == 3) {
    if (user == 3) {
      std::cout << "It's a tie!";
    }
    else if (user == 1) {
      std::cout << "User wins!";
    }
    else if (user == 2) {
      std::cout << "Computers wins!";
    }
    else if (user == 4) {
      std::cout << "Computer wins!";
    }
    else {
      std::cout << "User wins!";
    }
  }
  else if (computer == 4) {
    if (user == 4) {
      std::cout << "It's a tie!";
    }
    else if (user == 1) {
      std::cout << "User wins!";
    }
    else if (user == 2) {
      std::cout << "Computer wins!";
    }
    else if (user == 3) {
      std::cout << "User wins!";
    }
    else {
      std::cout << "Computer wins!";
    }
  }
  else if (computer == 5) {
    if (user == 5) {
      std::cout << "It's a tie!";
    }
    else if (user == 1) {
      std::cout << "Computer wins!";
    }
    else if (user == 2) {
      std::cout << "User wins!";
    }
    else if (user == 3) {
      std::cout << "Computer wins!";
    }
    else {
      std::cout << "User wins!";
    }
  }
}
