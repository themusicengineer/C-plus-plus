#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

  srand(time(NULL));
  int answer = rand() % 10;
  cout << "MAGIC 8-BALL:\n";
  cout << answer;
  cout << "\n";

  if (answer == 0) {
    cout << "It is certain.";
  }
  else if (answer == 1) {
    cout << "It is decidedly so.";
  }
  else if (answer == 2) {
    cout << "Without a doubt.";
  }
  else if (answer == 3) {
    cout << "Yes - definitely.";
  }
  else if (answer == 4) {
    cout << "You may rely on it.";
  }
  else if (answer == 5) {
    cout << "As I see it, yes.";
  }
  else if (answer == 6) {
    cout << "Most likely.";
  }
  else if (answer == 7) {
    cout << "Outlook good.";
  }
  else if (answer == 8) {
    cout << "Yes.";
  }
  else if (answer == 9) {
    cout << "Signs point to yes.";
  }
  else {
    cout << "Very doubtful.";
  }
}