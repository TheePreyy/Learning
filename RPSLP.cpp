/* A game of 
rock paper scissors 
with an added twist*/

#include <iostream>

using namespace std;

int main() {
  // Live long and prosper

  srand (time(NULL));

  int computer = rand() % 5 + 1;
  int user = 0;

  cout << "Rock Paper Scissors!\n";
  cout << "1) Rock\n";
  cout << "2) Paper\n";
  cout << "3) Scissors\n";
  cout << "4) Lizard\n";
  cout << "5) Spock\n";
  cout << "Player choice: ";

  cin >> user;

  cout << "Shoot!\n";

  switch(user){

    case 1:
    switch(computer){
      case 1:
      cout << "Rock vs. Rock!!!\n";
      cout << "Tie!!!\n";
      break;

      case 2:
      cout << "Rock vs. Paper!!!\n";
      cout << "Paper Covers Rock!!!\n";
      break;

      case 3:
      cout << "Rock vs. Scissors!!!\n";
      cout << "Rock Smashes Scissors!!!\n";
      break;

      case 4:
      cout << "Rock vs. Lizard!!!\n";
      cout << "Rock Smashes Lizard!!!\n";
      break;

      case 5:
      cout << "Rock vs. Spock!!!\n";
      cout << "Spock Vaporizes Rock!!!\n";
      break;

      default:
      cout << "Invalid Input\n";
    }
    break;

    case 2:
    switch(computer){
      case 1:
      cout << "Paper vs. Rock!!!\n";
      cout << "Paper Covers Rock!!!\n";
      break;

      case 2:
      cout << "Paper vs. Paper!!!\n";
      cout << "Tie!!!\n";
      break;

      case 3:
      cout << "Paper vs. Scissors!!!\n";
      cout << "Scissors Cut Paper!!!\n";
      break;

      case 4:
      cout << "Paper vs. Lizard!!!\n";
      cout << "Lizard Eats Paper!!!\n";
      break;

      case 5:
      cout << "Paper vs. Spock!!!\n";
      cout << "Paper Disproves Spock!!!\n";
      break;

      default:
      cout << "Invalid Input\n";
    }
    break;

    case 3:
    switch(computer){
      case 1:
      cout << "Scissors vs. Rock!!!\n";
      cout << "Rock Crushes Scissors!!!\n";
      break;

      case 2:
      cout << "Scissors vs. Paper!!!\n";
      cout << "Scissors Cut Paper!!!\n";
      break;

      case 3:
      cout << "Scissors vs. Scissors!!!\n";
      cout << "Tie!!!\n";
      break;

      case 4:
      cout << "Scissors vs. Lizard!!!\n";
      cout << "Scissors Decapitate Lizard!!!\n";
      break;

      case 5:
      cout << "Scissors vs. Spock!!!\n";
      cout << "Spock Smashes Scissors!!!";
      break;

      default:
      cout << "Invalid Input\n";
    }
    break;

    case 4:
    switch(computer){
      case 1:
      cout << "Lizard vs. Rock!!!\n";
      cout << "Rock Smashes Lizard!!!\n";
      break;

      case 2:
      cout << "Lizard vs. Paper!!!\n";
      cout << "Lizard Eats Paper!!!\n";
      break;

      case 3:
      cout << "Lizard vs. Scissors!!!\n";
      cout << "Scissors Decapitate Lizard!!!\n";
      break;

      case 4:
      cout << "Lizard vs. Lizard!!!\n";
      cout << "Tie!!!\n";
      break;

      case 5:
      cout << "Lizard vs. Spock!!!\n";
      cout << "Spock Smashes Scissors!!!";
      break;

      default:
      cout << "Invalid Input\n";
    }
    break;

    case 5:
    switch(computer){
      case 1:
      cout << "Spock vs. Rock!!!\n";
      cout << "Spock Vaporizaes Rock!!!\n";
      break;

      case 2:
      cout << "Spock vs. Paper!!!\n";
      cout << "Paper Disproves Spock!!!\n";
      break;

      case 3:
      cout << "Spock vs. Scissors!!!\n";
      cout << "Spock Smashes Scissors!!!\n";
      break;

      case 4:
      cout << "Spock vs. Lizard!!!\n";
      cout << "Lizard Poisons Spock!!!\n";
      break;

      case 5:
      cout << "Spock vs. Spock!!!\n";
      cout << "Tie!!!\n";
      break;

      default:
      cout << "Invalid Input\n";
    }
    break;

    default:
    cout << "Invalid Input\n";
  }

if (user == computer){
  cout << "Ugh, go again :(\n";
}

}
