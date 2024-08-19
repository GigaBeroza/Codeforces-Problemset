/* Vasya has recently learned to type and log on to the Internet. He immediately entered a chat room and decided to say hello to everybody. 
Vasya typed the word s. It is considered that Vasya managed to say hello if several letters can be deleted from the typed word 
so that it resulted in the word "hello". For example, if Vasya types the word "ahhellllloou", it will be considered that he said hello, 
and if he types "hlelo", it will be considered that Vasya got misunderstood and he didn't manage to say hello. 
Determine whether Vasya managed to say hello by the given word s.

Input
The first and only line contains the word s, which Vasya typed. This word consisits of small Latin letters, 
its length is no less that 1 and no more than 100 letters.

Output
If Vasya managed to say hello, print "YES", otherwise print "NO". */

#include <iostream>

using namespace std;

int main()
{
    string hello;
    string after = "";
    int k, l = 0, rest = 0;
    cin >> hello;

    for(int i = 0; i < hello.length(); i++){
        if(hello[i] == 'h' && after == ""){
            after = "h";
        }else
        if(hello[i] == 'e' && after == "h"){
            after = "he";
        }else
        if(hello[i] == 'l' && after == "he"){
            after = "hel";
        }else
        if(hello[i] == 'l' && after == "hel"){
            after = "hell";
        }else
        if(hello[i] == 'o' && after == "hell"){
            after = "hello";
        }
    }

    if(after == "hello"){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}
