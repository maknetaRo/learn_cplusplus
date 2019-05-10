#include <iostream>

int main() {
  int earth_weight;
  std::cout << "What is your earth weight? \n";
  std::cin >> earth_weight;
  const int venus = 1; //0.78
  const int mars = 2; // 0.39
  const int jupiter = 3; // 2.65
  const int saturn = 4; // 1.17
  const int uranus = 5; // 1.05
  const int neptune = 6; // 1.23
  int number_planet;
  int planet_weight;
  std::cout << "Choose the planet: Venus - 1, Mars - 2, Jupiter - 3, Saturn - 4, Uranus - 5, Neptune - 6: \n";
  std::cin >> number_planet;
  if (number_planet == 1) {
      planet_weight = earth_weight * 0.78;
      std::cout << "Your weight on Venus is " << planet_weight << ".\n";
  }
  else if (number_planet == 2) {
      planet_weight = earth_weight * 0.39;
      std::cout << "Your weight on Mars is " << planet_weight << ".\n";
  }
  else if (number_planet == 3) {
      planet_weight = earth_weight * 2.65;
      std::cout << "Your weight on Jupiter is " << planet_weight << ".\n";
  }
  else if (number_planet == 4) {
      planet_weight = earth_weight * 01.17;
      std::cout << "Your weight on Saturn is " << planet_weight << ".\n";
  }
  else if (number_planet == 5) {
      planet_weight = earth_weight * 1.05;
      std::cout << "Your weight on Uranus is " << planet_weight << ".\n";
  }
  else if (number_planet == 6) {
      planet_weight = earth_weight * 1.23;
      std::cout << "Your weight on Neptune is " << planet_weight << ".\n";
  }
  else {
      std::cout << "Invalid value\n";
  }

  
  
  
}