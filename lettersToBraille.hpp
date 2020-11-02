//Stores the Alphabets and their Braille substitutes.
#ifndef LETTERSTOBRAILLE_H
#define LETTERSTOBRAILLE_H

#include <map>
#include <string>

extern std::map<char, std::string> letters
{
           {' '," "},
           {'a', "⠁"},
           {'b', "⠃"},
           {'c', "⠉"},
           {'d', "⠙"},
           {'e', "⠑"},
           {'f', "⠋"},
           {'g', "⠛"},
           {'h', "⠓"},
           {'i', "⠊"},
           {'j', "⠚"},
           {'k', "⠅"},
           {'l', "⠇"},
           {'m', "⠍"},
           {'n', "⠝"},
           {'o', "⠕"},
           {'p', "⠏"},
           {'q', "⠟"},
           {'r', "⠗"},
           {'s', "⠎"},
           {'t', "⠞"},
           {'u', "⠥"},
           {'v', "⠧"},
           {'w', "⠺"},
           {'x', "⠭"},
           {'y', "⠽"},
           {'z', "⠵"}
};

#endif