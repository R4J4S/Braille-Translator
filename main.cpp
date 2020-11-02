#include <iostream>
#include <vector>

#include "lettersToBraille.cpp"
#include "lettersToBraille.hpp"

using namespace std;

int main()
{
  //prompting and taking input sentence from user.
  cout<<"SENTENCE"<<endl;
  string sentence = "rajas is a good boy";
  //cin>>sentence;

  //calling function toBraille from letterstoBraille.cpp
  string braille_sentence=toBraille(sentence);
  cout<<braille_sentence;

  return 0;

}