#include <iostream>
#include <vector>

#include "lettersToBraille.cpp"
#include "lettersToBraille.hpp"

using namespace std;

int main()
{
  //prompting and taking input sentence from user.
  cout<<"Given Sentence:"<<endl;
  string sentence = "I have 2 dogs. A pomeranian named \"DODO\" and labrador named \"RIO\". Dodo is 9 years old and Rio is 10 months old.";
  cout<<sentence<<endl;
  
  cout<<"BRAILLE SENTENCE:"<<endl;

  //calling function toBraille from letterstoBraille.cpp
  string braille_sentence = toBraille(sentence);
  cout<<braille_sentence;

  cin.get();

  return 0;
}