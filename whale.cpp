#include <iostream>
#include <vector>
#include <string>
using namespace std;

/* This program cycles through a phrase and chooses the vowels to output, imagining what a whele would say */

int main() {
  
  // Whale, whale, whale.
  // What have we got here?

  string input = "Turpentine and turtles.";
  vector<char> vowels; // = {'a','e','i','o','u'};
  
  vowels.push_back('a');
  vowels.push_back('e');
  vowels.push_back('i');
  vowels.push_back('o');
  vowels.push_back('u');

  vector<char> whale_talk;

  for (int i = 0; i < input.size(); i++) {
    for (int j = 0; j < vowels.size(); j++) {
      if (input[i] == vowels[j]) {
        whale_talk.push_back(input[i]);
        if (input[i] == 'e' || input[i] == 'u') {
          whale_talk.push_back(input[i]);

        }
      }
    }
  }

  for (int k = 0; k < whale_talk.size(); k++) {
    cout << whale_talk[k];
  }
}