/*Goal: practice using stringstream
/*Goal: practice getting string inputs and
 **converting them to numeric variables using
 **stringstream.
 **
 **Prompt the user for the length of a room.
 **Then prompt for the width of the room.
 **Print out the area of the room.
 */
#include <iostream>
#include <string>
#include <sstream>

int main()
{
  std::string stringRoomLength;
  std::string stringRoomWidth;
  float roomLength = 0;
  float roomWidth = 0;
  float roomArea = 0;


  std::cout<<"Enter the length of a room: ";
  std::getline(std::cin, stringRoomLength);
  std::stringstream(stringRoomLength) >> roomLength;
  std::cout<<"You entered "<<roomLength<<"\n";

  std::cout<<"Enter the width of the room: ";
  std::getline(std::cin, stringRoomWidth);
  std::stringstream(stringRoomWidth) >> roomWidth;
  std::cout<<"You entered "<<roomWidth<<"\n";

  roomArea = roomLength * roomWidth;
  std::cout<<"Room area is "<<roomArea<<"\n";
  return 0;
}
