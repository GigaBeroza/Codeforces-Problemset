/* Petya loves lucky numbers. Everybody knows that lucky numbers are positive integers whose decimal representation contains 
only the lucky digits 4 and 7. For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.

Petya calls a number almost lucky if it could be evenly divided by some lucky number. Help him find out if the given number n is almost lucky.

Input
The single line contains an integer n (1 ≤ n ≤ 1000) — the number that needs to be checked.

Output
In the only line print "YES" (without the quotes), if number n is almost lucky. Otherwise, print "NO" (without the quotes). */

#include <iostream>
#include<sstream>

using namespace std;

int main()
{

    int num;
    string numbers;
    cin >> num;

    if(num % 4 == 0 || num % 7 == 0 || num % 47 == 0 || num % 74 == 0){
        cout << "YES";
        return 0;
    }

    stringstream ss;
    ss<<num;
    ss>>numbers;

    for(int i = 0; i < numbers.length(); i++){
        if(numbers[i] != '4' && numbers[i] != '7'){
            cout << "NO";
            return 0;
        }

    }
    cout << "YES";
    return 0;
}
