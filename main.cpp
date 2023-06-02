#include <iostream>
#include <ctime>


using namespace std;

int main() {
  srand(time(0));  //random number
  int number =rand() % 100 + 1;  
  int userNumber;


  do {
    cout << "Enter a number: " << endl;
      cin >> userNumber;

    if (userNumber > number) {
      cout << "Your number is too large" << endl;
    } else if (userNumber < number) {
      cout << "Your number is too small" << endl;
    }
  } while  (userNumber != number);
  
  cout << "Bravo! Is the correct number!" << endl;
  
    
}
  

  
  

  

  



