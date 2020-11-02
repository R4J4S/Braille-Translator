#include <iostream>
#include<vector>
#include<cctype>

#include "lettersToBraille.hpp"

using namespace std;

//returns a raw braille string, for example: "India is Great" ---> ".india is .great"
string handlingCapitalLetters(string sentence)
{
    string str="";
    //iterating through the sentence
    for(int x=0;x<sentence.length();++x)
    {
        //check if the character is upper case
        if(isupper(sentence[x])==true)
        {   
            //add "." character and lowercase of character to string str
            char c = tolower(sentence[x]);
            str = str + "." + c;
        }
        //else add the character directly to string str
        else
        {
            str = str + sentence[x];
        }
    }
    return str;

}

//returns a vector of strings from given sentence i.e. user's input.
vector<string> sentenceToWordlist(string str)
{
    string sentence = handlingCapitalLetters(str);

    vector<string> wordlist;
    //iterating through each character of sentence.
    for(auto x:sentence)
    {
        string word  = "";

        //if character is a space " " then reset word variable.
        if(x==' ')
        {
            wordlist.push_back(" ");
            word = "";
        }
        //else keep on adding characters to word variable.
        else
        {
            word = word+x;
        }

        //inserting word to the wordlist vector.
        wordlist.push_back(word);
    }

    return wordlist;
}

//returns a string in Braille for a given word.
string wordToBraille(string word)
{
    string braille_word = "";
    //iterating through every character of the word.
    for(int i=0;i<word.length();++i)
    {
        //checking if the character is present in lettersToBraille header file.
        if(letters.find(word[i]) == letters.end())
            continue;
        else
        //replacing the character with braille character.
            braille_word = braille_word + letters.at(word[i]);
    }

    return braille_word;
}


//returns the whole sentence in braille.
string toBraille(string sentence)
{
    //getting the vector list of words from the sentence.
    vector<string> wordlist = sentenceToWordlist(sentence);
    string braille_sentence = "";

    //iterating through every word in wordlist and passing it to the wordToBraille function.
    for(auto x:wordlist)
    {
        string braille_word = wordToBraille(x);
        //concatinating the braille words to form the resultant braille sentence.
        braille_sentence = braille_sentence + braille_word;
    }
    return braille_sentence;
}