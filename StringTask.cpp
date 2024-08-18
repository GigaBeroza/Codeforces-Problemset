/*Petya started to attend programming lessons. On the first lesson his task was to write a simple program. 
The program was supposed to do the following: in the given string, consisting if uppercase and lowercase Latin letters, it:

deletes all the vowels,
inserts a character "." before each consonant,
replaces all uppercase consonants with corresponding lowercase ones.
Vowels are letters "A", "O", "Y", "E", "U", "I", and the rest are consonants. 
The program's input is exactly one string, it should return the output as a single string, 
resulting after the program's processing the initial string.

Help Petya cope with this easy task.

Input
The first line represents input string of Petya's program. This string only consists of uppercase and 
lowercase Latin letters and its length is from 1 to 100, inclusive.

Output
Print the resulting string. It is guaranteed that this string is not empty. */

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string word;
    cin >> word;
    transform(word.begin(), word.end(), word.begin(), ::tolower);

    string chars = "aeiouy";

    for (char c: chars) {
        word.erase(remove(word.begin(), word.end(), c), word.end());
    }

    for(int i = 0; i < word.size(); i++){
        word.insert(i, ".");
        i++;
    }


    cout << word;
    return 0;
}
