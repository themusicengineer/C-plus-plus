#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

  srand(time(NULL));
  int answer = rand() % 10;
  cout << "MAGIC 8-BALL:\n";
  cout << answer;
  cout << "\n";

  switch(answer) {
      case 0: cout << "It is certain.";
      break;
      case 1: cout << "It is decidedly so.";
      break;
      case 2: cout << "Without a doubt.";
      break;
      case 3: cout << "Yes - definitely.";
      break;
      case 4: cout << "You may rely on it.";
      break;
      case 5: cout << "As I see it, yes.";
      break;
      case 6: cout << "Most likely.";
      break;
      case 7: cout << "Outlook good.";
      break;
      case 8: cout << "Yes.";
      break;
      case 9: cout << "Signs point to yes.";
      break;
      case 10: cout << "Very doubtful.";
      break;
  }
    
}