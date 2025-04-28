#include <iostream>
 #include <cstdlib>

int main(){
  // Your future is here

  srand(time(NULL));

  int answer = std::rand() % 10;

  std::cout << "MAGIC 8-BALL: \n";

  if(answer == 0){
    std::cout << "System says yes.\n";
  }
  else if(answer == 1){
    std::cout << "AI says maybe.\n";
  }
  else if(answer == 2){
    std::cout << "The road will be hard.\n";
  }
  else if(answer == 3){
    std::cout << "Buffering... ask again later.\n";
  }
  else if(answer == 4){
    std::cout << "100% upload success.\n";
  }
  else if(answer == 5){
    std::cout << "Error 404: Answer not found.\n";
  }
  else if(answer == 6){
    std::cout << "Power low - outlook not good.\n";
  }
  else if(answer == 7){
    std::cout << "All systems go.\n"; 
  }
  else if(answer == 8){
    std::cout << "Signal lost try again.\n";
  }
  else if(answer == 9){
    std::cout << "Connection strong-go for it.\n";
  }
  else{
    std::cout << "Access denied.\n";
  }

  return 0;
}
